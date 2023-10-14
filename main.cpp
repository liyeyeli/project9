#include "mainwindow.h"
#include <QApplication>
#include "loginsuccess.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//创建qt应用程序
    MainWindow w;
    w.show();

    return a.exec();//一直轮询应用
}
