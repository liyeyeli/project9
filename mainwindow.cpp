#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(setlabel1()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(setlabel2()));
    connect(this,SIGNAL(mysig()),this,SLOT(setlabel3()));//用户自定义信号，在哪个类中就属于谁发送
    //connect(this,SIGNAL(mysig1(QString)),this,SLOT(setlabel4(QString)));//用户自定义带参信号
    connect(this,&MainWindow::mysig1,this,&MainWindow::setlabel4);
    emit mysig();//发送信号
    emit mysig1("hello world QT",10086);
}
//用户自定义信号
void MainWindow::setlabel4(QString a,int b)
{
    QString all = QString("%1 %2").arg(a).arg(b);
    ui->label_4->setText(all);
    qDebug() << "传入参数为: " << all << endl;
}

void MainWindow::setlabel3()
{
    ui->label_3->setText("用户自定义信号成功！");
}

void MainWindow::setlabel1()
{
    ui->label->setText("设置标签1成功");
}
void MainWindow::setlabel2()
{
    ui->label_2->setText("设置标签2成功");
}

MainWindow::~MainWindow()
{
    delete ui;
}
