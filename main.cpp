#include "widget.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsProxyWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget wiget;

    wiget.setFixedSize(720,1280);
#ifdef RK_3399_PLATFORM
    wiget.show();
#else


    QGraphicsScene *scene = new QGraphicsScene;
    QGraphicsProxyWidget *w = scene->addWidget(&wiget);
    w->setRotation(-90);

    QGraphicsView *view = new QGraphicsView(scene);
    view->resize(1280, 720);
    view->show();
#endif



    return a.exec();
}
