#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QWidget>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QMetaType>
#include <QSet>
#include <QStandardPaths>
#include <QTcpServer>
#include <QTcpSocket>



class mytcpsocket : public QWidget
{
    Q_OBJECT
public:
    explicit mytcpsocket(QWidget *parent = nullptr);
    ~mytcpsocket();

    void sendMessage(QString objName,QString Message_str);
    QSet<QTcpSocket*> connection_set;

    QString getPeerIpadderss();

signals:
    void newMessage(QByteArray);
private slots:
    void newConnection();
    void appendToSocketList(QTcpSocket* socket);

    void readSocket();
    void discardSocket();
//    void displayError(QAbstractSocket::SocketError socketError);

//    void displayMessage(const QString& str);
    //void sendMessage(QTcpSocket* socket);

//    void sendAttachment(QTcpSocket* socket, QString filePath);

//    void on_pushButton_sendMessage_clicked();
//    void on_pushButton_sendAttachment_clicked();

//    void refreshComboBox();
private:
    QTcpServer* m_server;

};

#endif // MYTCPSOCKET_H
