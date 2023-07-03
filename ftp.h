#ifndef FTP_H
#define FTP_H

#include <QObject>
#include <QtDebug>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QString>
#include <QFileDialog>

class Ftp : public QObject
{
     Q_OBJECT

public:
    explicit Ftp();
    ~Ftp();
    void ftpDown();//从服务器下载文件功能
    void ftpUpload(QByteArray data);//上传文件到服务器
    void ftpWrite(QByteArray data);//将缓冲器中的内容写入文件，并保存
    QByteArray ftpRead();//将计算机中指定的文件的内容读入缓存
    void getfile_onftp(QString filename);
    void SendFile_ftp(QString filename);

private slots:
    void manageDownResult(QNetworkReply *reply);//当文件下载完毕触发函数
    void manageUploadResult(QNetworkReply *reply);//当文件上传成功触发函数
    void loadProgress(qint64 bytesSent, qint64 bytesTotal);//实时更新进度条进度

private:
    QNetworkAccessManager ftpManager;
    QNetworkReply *ftpReply;
    //QUrl fileUrl;
    QString sfilename;

};

#endif // FTP_H
