#include "ftp.h"


Ftp::Ftp():QObject(0)
{

//    connectToHost(str_ip,n_port);
}

Ftp::~Ftp()
{

}

void Ftp::getfile_onftp(QString filename)
{
//    if(ui->server->text().isEmpty())//如果服务器地址没有写，提示用户
//    {

//        QMessageBox::warning(this,"Error","Please fill in the information");
//    }
//    else {
//        fileUrl = QFileDialog::getSaveFileUrl(this,tr("Save File"),QUrl(""),tr("File(*.*)")); //选择文件保存路径

//        ftpDown();//保存缓冲区的内容到文件中
//    }

    sfilename = filename;
    ftpDown();//保存缓冲区的内容到文件中

}

void Ftp::ftpDown(){
    ftpManager.disconnect(SIGNAL(finished(QNetworkReply*)));
    //获取将用户输入的信息
    QUrl url("192.168.2.200");
    url.setPort(21);
    url.setUserName("ftp_hnhtjc");
    url.setPassword("123456");
    url.setPath(sfilename);
    ftpReply=ftpManager.get(QNetworkRequest(url));
    // ftpManager2->get(QNetworkRequest(url))
    //信号槽机制，实时更新进度条
    connect(ftpReply,SIGNAL(downloadProgress(qint64,qint64)),SLOT(loadProgress(qint64 ,qint64)));
    //信号槽机制，当文件传输结束时，将缓存中的文件写入文件中
    connect(&ftpManager,SIGNAL(finished(QNetworkReply*)),SLOT(manageDownResult(QNetworkReply*)));//接收返回值
}

//文件上传功能
void Ftp::ftpUpload(QByteArray data){
 ftpManager.disconnect(SIGNAL(finished(QNetworkReply*)));

 //获取用户输入的信息
     QUrl url("192.168.2.200");
     url.setPort(21);
     url.setUserName("ftp_hnhtjc");
     url.setPassword("123456");
// qDebug() << data;

 //将缓存中的数据上传至服务器
    ftpReply=ftpManager.put(QNetworkRequest(url),data);

 /*信号槽机制，当文件上传完毕后，调用用户反馈函数，告诉用户文件上传结果（成功 or 失败）
   实时更新进度条*/
    connect(&ftpManager,SIGNAL(finished(QNetworkReply*)),SLOT(manageUploadResult(QNetworkReply*)));//接收返回值
    connect(ftpReply, SIGNAL(uploadProgress(qint64,qint64)), SLOT(loadProgress(qint64 ,qint64)));
}

//处理文件下载时的反馈信息，给用户良好的反馈
void Ftp::manageDownResult(QNetworkReply *reply)
{
    qDebug() << reply->error();
    QByteArray data;
    switch(reply->error()){
    case QNetworkReply::NoError:
        data=reply->readAll();//从url中读取文件内容，输出到data中（也可以再将数据写入到文件中，为了方便，这里就权且打印一下吧）
        //将缓存中的文件写入到文件中并保存
        ftpWrite(data);
        qDebug("Download Success!");
        break;
    case QNetworkReply::HostNotFoundError:
        qDebug("Host Not Found!");
        break;
    case QNetworkReply::AuthenticationRequiredError:
        qDebug("Login Failure!");
        break;
    default:
        qDebug("Unknown Failure");
        break;
    }
}

//处理文件上传时的反馈信息，给用户良好的反馈
void Ftp::manageUploadResult(QNetworkReply * reply)
{
    qDebug()<<reply->error();//输出调试信息
    switch(reply->error()){//判断连接后的状态
    case QNetworkReply::NoError:
        ftpManager.disconnect();
        qDebug("Upload Success!");
        break;
    case QNetworkReply::HostNotFoundError:
        qDebug("Host Not Found!");
        break;
    case QNetworkReply::AuthenticationRequiredError:
        qDebug("Login Failure!");
        break;
    default:
        qDebug("Unknown Failure");
        break;
    }
}

//将缓存中的文件写入到文件中并保存
void Ftp::ftpWrite(QByteArray data)
{
//    int position= (ui->server->text()).lastIndexOf("/");
//    QString fileName= (ui->server->text()).mid(position+1);

    QFile ftpFile(sfilename);
    ftpFile.open(QIODevice::WriteOnly | QIODevice::Truncate);
    ftpFile.write(data);
    ftpFile.close();
}

//当点击上传文件按钮时，触发
void Ftp::SendFile_ftp(QString filename)
{
    sfilename = filename;
    ftpUpload(ftpRead());
}

//打开文件并将内容读到缓存中
QByteArray Ftp::ftpRead()
{
    QFile ftpFile(sfilename);
    if(!ftpFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Open failed." << endl;
   //     EXIT_FAILURE;
    }
    QByteArray data = ftpFile.readAll();
    ftpFile.close();
    return data;
}


//更新进度条
void Ftp::loadProgress(qint64 bytesSent, qint64 bytesTotal)    //更新进度条
{
       qDebug() << "loaded" << bytesSent << "of" << bytesTotal;

       //判断文件当前传输进度，如果文件进度达到100%，自动关闭进度条
       if(bytesSent==bytesTotal)
       {
       }
}

