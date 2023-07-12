

#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QThread>
#include <QMessageBox>
#include <QCloseEvent>
#include <QMouseEvent>
#include <QFrame>
#include <QColorDialog>
#include <QtNetwork/QNetworkInterface>

#ifdef RK_3399_PLATFORM
#ifdef  __cplusplus
extern "C" {
#endif
#include "drv722.h"
//#include "cpu_mem_cal.h"
#ifdef  __cplusplus
}
#endif
#endif

extern sys_conf_t g_sys_conf;


void Widget::displayMessage(QByteArray buffer)
{
    //ui->textBrowser_receivedMessages->append(str);
    //qDebug() <<"displayMessage:" << buffer;

    QString header = buffer.mid(0,64);
    QString objName = header.split(",")[0].split(":")[1];

    buffer = buffer.mid(64);

    if(objName=="pushButton_ifconfig")
    {
        QString size = header.split(",")[1].split(":")[1].split(";")[0];
        //qDebug() << "size=" << size;

        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));

        if(message == "check")
        {

        }
        on_pushButton_ifconfig_clicked();
    }
    else if(objName=="pushButton_Next_page")
    {
        next_func_page_show();
    }
    else if(objName=="pushButton_Last_page")
    {
        last_func_page_show();
    }
    else if(objName=="pushButton_6")  //键灯全部点亮熄灭控制
    {
        on_pushButton_6_clicked();
    }
    else if(objName=="pushButton_7")  //键灯流水灯控制
    {
        on_pushButton_7_clicked();
    }
    else if(objName=="pushButton")  //键灯全部点亮熄灭控制
    {
        on_pushButton_clicked();
    }
    else if(objName=="pushButton_FlowLEDS")  //工装板流水灯
    {
        on_pushButton_FlowLEDS_clicked();
    }
    //获取一些初始化的信息，比如当前显示的页面，键盘类型，lcd是否已连接，网卡的信息，哪些是开机默认启动的，配置文件中的信息，
    else if("connetct_init" == objName)
    {
        int page_index = ui->stackedWidget->currentIndex();
        QString message = QString("index:%1").arg(QString::number(page_index));
        message.append(QString(",keyboardtype:%1").arg(QString::number(keyboardtype)));
        if(eth0_dev)
            message.append(QString(",eth0_dev:1"));
        else if(eth2_dev)
            message.append(QString(",eth2_dev:1"));
        if(enp1_dev)
            message.append(QString(",enp1_dev:1"));
        if(enp2_dev)
            message.append(QString(",enp2_dev:1"));


        message.append(QString(",ip1:%1").arg(QString::number(g_sys_conf.ip1)));
        message.append(QString(",ip2:%1").arg(QString::number(g_sys_conf.ip2)));
        message.append(QString(",ip3:%1").arg(QString::number(g_sys_conf.ip3)));  //default_show_page
        message.append(QString(",default_show_page:%1").arg(QString::number(g_sys_conf.default_show_page)));    //启动默认显示页面,默认是第一页
        message.append(QString(",is_cpu_stress_start:%1").arg(QString::number(g_sys_conf.is_cpu_stress_start)));  //启动开始cpu压力测试？0表示不开启，1开启测试
        message.append(QString(",is_gpio_flow_start:%1").arg(QString::number(g_sys_conf.is_gpio_flow_start)));   //启动开启gpio流水灯吗？
        message.append(QString(",is_key_lights_start:%1").arg(QString::number(g_sys_conf.is_key_lights_start)));   //启动开启键灯吗？
        message.append(QString(",is_cpu_test_checked:%1").arg(QString::number(g_sys_conf.is_cpu_test_checked)));
        message.append(QString(",is_mem_test_checked:%1").arg(QString::number(g_sys_conf.is_mem_test_checked)));
        message.append(QString(",cpu_test_core_num:%1").arg(QString::number(g_sys_conf.cpu_test_core_num)));     //cpu的测试核心数
        message.append(QString(",mem_test_usage:%1").arg(QString::number(g_sys_conf.mem_test_usage)));           //内存测试的百分比

        mytcpsocket_one->sendMessage("connetct_init",message);
    }
    else if("verticalScrollBar_lightpwm2" == objName)  //键灯测试页：键灯亮度滑条调节
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->verticalScrollBar_lightpwm2->setValue(message.toInt());   //这个....
    }

    else if(objName=="checkBox")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox->setChecked(checked);   //这个....
    }
    else if(objName=="lineEdit_interval")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));

        ui->lineEdit_interval->setText(message);
    }
    else if(objName=="pushButton_start_color_test")  //
    {
        ui->label_color->setVisible(true);
        ui->label_color->setStyleSheet("background-color:rgb(255,0,0)");
        ui->label_color->raise();
#ifdef RK_3399_PLATFORM
        drvSetLcdBrt(255);
#endif
    }
    else if(objName=="pushButton_lcd_last_color")  //
    {
        last_color_page_show();
    }
    else if(objName=="pushButton_lcd_next_color")  //
    {
        next_color_page_show();
    }
    else if(objName=="horizontalScrollBar_light")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->horizontalScrollBar_light->setValue(message.toInt());
    }
    else if(objName=="checkBox_cpu_stress")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_cpu_stress->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_gpio_flow")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_gpio_flow->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_keyLights")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_keyLights->setChecked(checked);   //这个....
    }
    else if(objName=="comboBox_memory")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        int index = message.toInt();
        ui->comboBox_memory->setCurrentIndex(index);
    }
    else if(objName=="comboBox_cpu")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        int index = message.toInt();
        ui->comboBox_cpu->setCurrentIndex(index);
    }
    else if(objName=="checkBox_cpu_n")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_cpu_n->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_mem_n")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_mem_n->setChecked(checked);   //这个....
    }
    else if(objName=="comboBox")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        int index = message.toInt();
        ui->comboBox->setCurrentIndex(index);
    }
    else if(objName=="pushButton_start_cpustress")  //
    {
        on_pushButton_start_cpustress_clicked();
    }
    else if(objName=="pushButton_disk_info")  //
    {
        on_pushButton_disk_info_clicked();
    }
    else if(objName=="pushButton_version_info")  //
    {
        on_pushButton_version_info_clicked();
    }
    else if(objName=="pushButton_update")  //
    {
        pushButton_update_clicked_slot();
    }
    else if(objName=="version_compare_info")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->textBrowser_version_info->setText(message);
        ui->pushButton_version_compare->setEnabled(true);
        version_compare_wait = 0;
    }
    //2023-07-10
    else if(objName=="radioButton_Uarttest")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        int checked = !(message.toInt() == 0);

        ui->radioButton_Uarttest->setChecked(checked);
    }
    else if(objName=="radioButton_Spitest")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        int checked = !(message.toInt() == 0);

        ui->radioButton_Spitest->setChecked(checked);
    }
    else if(objName=="radioButton_IICtest")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        int checked = !(message.toInt() == 0);

        ui->radioButton_IICtest->setChecked(checked);
    }
    else if(objName=="pushButton_8")  //
    {
        on_pushButton_8_clicked();
    }
    else if(objName=="pushButton_9")  //
    {
        on_pushButton_9_clicked();
    }
    else if(objName=="pushButton_10")  //
    {
        on_pushButton_10_clicked();
    }
    else if(objName=="pushButton_clear_display")  //
    {
        ui->textBrowser_IICSPI->clear();
    }
    else if(objName=="pushButton_2")  //
    {
        on_pushButton_2_clicked();
    }
    else if(objName=="pushButton_4")  //
    {
        on_pushButton_4_clicked();
    }
    else if(objName=="pushButton_5")  //
    {
        on_pushButton_5_clicked();
    }
    //2023-07-11
    else if(objName=="lineEdit_ip1")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->lineEdit_ip1->setText(message);
    }
    else if(objName=="lineEdit_ip2")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->lineEdit_ip2->setText(message);
    }
    else if(objName=="lineEdit_ip3")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->lineEdit_ip3->setText(message);
    }

    else if(objName=="checkBox_bigpack1")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_bigpack1->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_bigpack2")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_bigpack2->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_bigpack3")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_bigpack3->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_adap1")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_adap1->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_adap2")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_adap2->setChecked(checked);   //这个....
    }
    else if(objName=="checkBox_adap3")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->checkBox_adap3->setChecked(checked);   //这个....
    }

    else if(objName=="pushButton_3")  //
    {
        on_pushButton_3_clicked();
    }
    //2023-07-12
    else if(objName=="pushButton_Play")  //
    {
        on_pushButton_Play_clicked();
    }
    else if(objName=="radioButton_loop")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_loop->setChecked(checked);   //这个....
    }
    else if(objName=="radioButton_playmusic")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_playmusic->setChecked(checked);   //这个....
    }
    else if(objName=="radioButton_playrec")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_playrec->setChecked(checked);   //这个....
    }
    else if(objName=="radioButton_rec")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_rec->setChecked(checked);   //这个....
    }
    else if(objName=="radioButton_micpanel")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_micpanel->setChecked(checked);   //这个....
    }
    else if(objName=="radioButton_michand")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_michand->setChecked(checked);   //这个....
    }
    else if("horizontalScrollBar_SpeakVol" == objName)  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        ui->horizontalScrollBar_SpeakVol->setValue(message.toInt());   //这个....
    }
    else if(objName=="radioButton_SpeakVol")  //
    {
        QString message = QString("%1").arg(QString::fromStdString(buffer.toStdString()));
        bool checked = message.toInt();
        ui->radioButton_SpeakVol->setChecked(checked);   //这个....
    }
}







