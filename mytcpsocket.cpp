#include "mytcpsocket.h"

mytcpsocket::mytcpsocket(QWidget *parent) : QWidget(parent)
{
    m_server = new QTcpServer();

    if(m_server->listen(QHostAddress::Any, 9876))   //port 9876
    {
//       connect(this, &mytcpsocket::newMessage, this, &mytcpsocket::displayMessage);
       connect(m_server, &QTcpServer::newConnection, this, &mytcpsocket::newConnection);
    //   ui->statusBar->showMessage("Server is listening...");
    }
    else
    {
        QMessageBox::critical(this,"QTCPServer",QString("Unable to start the server: %1.").arg(m_server->errorString()));
        exit(EXIT_FAILURE);
    }
}


mytcpsocket::~mytcpsocket()
{
    foreach (QTcpSocket* socket, connection_set)
    {
        socket->close();
        socket->deleteLater();
    }

    m_server->close();
    m_server->deleteLater();

    //delete ui;
}

void mytcpsocket::newConnection()
{
    while (m_server->hasPendingConnections())
        appendToSocketList(m_server->nextPendingConnection());
    qDebug() << "newConnection";
}

void mytcpsocket::appendToSocketList(QTcpSocket* socket)
{
    connection_set.insert(socket);
    connect(socket, &QTcpSocket::readyRead, this, &mytcpsocket::readSocket);
    connect(socket, &QTcpSocket::disconnected, this, &mytcpsocket::discardSocket);
//    connect(socket, &QAbstractSocket::error, this, &mytcpsocket::displayError);
//    ui->comboBox_receiver->addItem(QString::number(socket->socketDescriptor()));
    //displayMessage(QString("INFO :: Client with sockd:%1 has just entered the room").arg(socket->socketDescriptor()));
    qDebug()<< QString("INFO :: Client with sockd:%1 has just entered the room").arg(socket->socketDescriptor());
//    qDebug()<< "ip = " <<socket->peerAddress().toString();
//    qDebug() << "port =" <<socket->peerPort();
}


QString mytcpsocket::getPeerIpadderss()
{
    QString ip;
    ip.clear();

    if(!connection_set.isEmpty())
    {
        foreach (QTcpSocket* socket,connection_set)
        {
            if(socket)
            {
                if(socket->isOpen())
                {
                    ip = socket->peerAddress().toString();
                    int index = ip.lastIndexOf(":");
                    ip =  ip.mid(index+1);
                    qDebug()<< "ip = " <<ip;
                    break;
                }
            }
        }
    }
    return ip;
}



void mytcpsocket::readSocket()
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());

    QByteArray buffer;

    QDataStream socketStream(socket);
    socketStream.setVersion(QDataStream::Qt_5_9);

    while(1)
    {
        socketStream.startTransaction();
        socketStream >> buffer;

        if(!socketStream.commitTransaction())
        {
            //QString message = QString("%1 :: Waiting for more data to come..").arg(socket->socketDescriptor());
            //emit newMessage(message);
            return;
        }
        emit newMessage(buffer);
    }
    return;


#if 0
    QString header = buffer.mid(0,128);
    QString objName = header.split(",")[0].split(":")[1];

    buffer = buffer.mid(64);

    if(objName=="pushButton_ifconfig"){
        QString fileName = header.split(",")[1].split(":")[1];
        QString ext = fileName.split(".")[1];
        QString size = header.split(",")[2].split(":")[1].split(";")[0];

        if (QMessageBox::Yes == QMessageBox::question(this, "QTCPServer", QString("You are receiving an attachment from sd:%1 of size: %2 bytes, called %3. Do you want to accept it?").arg(socket->socketDescriptor()).arg(size).arg(fileName)))
        {
            QString filePath = QFileDialog::getSaveFileName(this, tr("Save File"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation)+"/"+fileName, QString("File (*.%1)").arg(ext));

            QFile file(filePath);
            if(file.open(QIODevice::WriteOnly)){
                file.write(buffer);
                QString message = QString("INFO :: Attachment from sd:%1 successfully stored on disk under the path %2").arg(socket->socketDescriptor()).arg(QString(filePath));
                emit newMessage(message);
            }else
                QMessageBox::critical(this,"QTCPServer", "An error occurred while trying to write the attachment.");
        }else{
            QString message = QString("INFO :: Attachment from sd:%1 discarded").arg(socket->socketDescriptor());
            emit newMessage(message);
        }
    }else if(fileType=="message"){
        QString message = QString("%1 :: %2").arg(socket->socketDescriptor()).arg(QString::fromStdString(buffer.toStdString()));
        emit newMessage(message);
    }
#endif
}

void mytcpsocket::discardSocket()
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());
    QSet<QTcpSocket*>::iterator it = connection_set.find(socket);
    if (it != connection_set.end()){
        //displayMessage(QString("INFO :: A client has just left the room").arg(socket->socketDescriptor()));
        qDebug() << (QString("INFO :: A client has just left the room").arg(socket->socketDescriptor()));
        connection_set.remove(*it);
    }
    //refreshComboBox();

    socket->deleteLater();
}

//void mytcpsocket::displayError(QAbstractSocket::SocketError socketError)
//{
//    switch (socketError) {
//        case QAbstractSocket::RemoteHostClosedError:
//        break;
//        case QAbstractSocket::HostNotFoundError:
//            QMessageBox::information(this, "QTCPServer", "The host was not found. Please check the host name and port settings.");
//        break;
//        case QAbstractSocket::ConnectionRefusedError:
//            QMessageBox::information(this, "QTCPServer", "The connection was refused by the peer. Make sure QTCPServer is running, and check that the host name and port settings are correct.");
//        break;
//        default:
//            QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
//            QMessageBox::information(this, "QTCPServer", QString("The following error occurred: %1.").arg(socket->errorString()));
//        break;
//    }
//}

//void mytcpsocket::on_pushButton_sendMessage_clicked()
//{
//    QString receiver; //= ui->comboBox_receiver->currentText();

//    if(receiver=="Broadcast")
//    {
////        foreach (QTcpSocket* socket,connection_set)
////        {
////        //    sendMessage(socket);
////        }
//    }
//    else
//    {
////        foreach (QTcpSocket* socket,connection_set)
////        {
////            if(socket->socketDescriptor() == receiver.toLongLong())
////            {
////             //   sendMessage(socket);
////                break;
////            }
////        }
//    }
//    //ui->lineEdit_message->clear();
//}


//void mytcpsocket::on_pushButton_sendAttachment_clicked()
//{
//    QString receiver;// = ui->comboBox_receiver->currentText();

//    QString filePath = QFileDialog::getOpenFileName(this, ("Select an attachment"), QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation), ("File (*.json *.txt *.png *.jpg *.jpeg)"));

//    if(filePath.isEmpty()){
//        QMessageBox::critical(this,"QTCPClient","You haven't selected any attachment!");
//        return;
//    }

//    if(receiver=="Broadcast")
//    {
//        foreach (QTcpSocket* socket,connection_set)
//        {
//            sendAttachment(socket, filePath);
//        }
//    }
//    else
//    {
//        foreach (QTcpSocket* socket,connection_set)
//        {
//            if(socket->socketDescriptor() == receiver.toLongLong())
//            {
//                sendAttachment(socket, filePath);
//                break;
//            }
//        }
//    }
//    //ui->lineEdit_message->clear();
//}

void mytcpsocket::sendMessage(QString objName,QString Message_str)
{
    if(connection_set.isEmpty())
        return;
    foreach (QTcpSocket* socket,connection_set)
    {
        if(socket)
        {
            if(socket->isOpen())
            {
             //   QString Message_str ;//= ui->lineEdit_message->text();

                QDataStream socketStream(socket);
                socketStream.setVersion(QDataStream::Qt_5_9);

                QByteArray header;
                QString tmp = objName+";";
                //header.prepend(QString("objName:%1,fileSize:%2;").arg(objName).arg(Message_str.size()).toUtf8());
                header.prepend(tmp.toUtf8());
                //header.resize(64);

                QByteArray byteArray = Message_str.toUtf8();
                byteArray.prepend(header);

                socketStream.setVersion(QDataStream::Qt_5_9);
                socketStream << byteArray;
            }
            else
                QMessageBox::critical(this,"QTCPServer","Socket doesn't seem to be opened");
        }
        else
            QMessageBox::critical(this,"QTCPServer","Not connected");

    }
}

//void mytcpsocket::sendAttachment(QTcpSocket* socket, QString filePath)
//{
//    if(socket)
//    {
//        if(socket->isOpen())
//        {
//            QFile m_file(filePath);
//            if(m_file.open(QIODevice::ReadOnly)){

//                QFileInfo fileInfo(m_file.fileName());
//                QString fileName(fileInfo.fileName());

//                QDataStream socketStream(socket);
//                socketStream.setVersion(QDataStream::Qt_5_9);

//                QByteArray header;
//                header.prepend(QString("fileType:attachment,fileName:%1,fileSize:%2;").arg(fileName).arg(m_file.size()).toUtf8());
//                header.resize(128);

//                QByteArray byteArray = m_file.readAll();
//                byteArray.prepend(header);

//                socketStream << byteArray;
//            }else
//                QMessageBox::critical(this,"QTCPClient","Couldn't open the attachment!");
//        }
//        else
//            QMessageBox::critical(this,"QTCPServer","Socket doesn't seem to be opened");
//    }
//    else
//        QMessageBox::critical(this,"QTCPServer","Not connected");
//}

//void mytcpsocket::displayMessage(const QString& str)
//{
//    //ui->textBrowser_receivedMessages->append(str);
//    qDebug() <<"displayMessage:" << str;
//}

//void mytcpsocket::refreshComboBox(){
//   // ui->comboBox_receiver->clear();
//    //ui->comboBox_receiver->addItem("Broadcast");
//   // foreach(QTcpSocket* socket, connection_set)
//     //   ui->comboBox_receiver->addItem(QString::number(socket->socketDescriptor()));
//}


