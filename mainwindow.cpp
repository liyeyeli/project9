#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginsuccess.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    l = new loginsuccess(this);//子窗体在主窗体的构造函数里面new，只会在调用构造函数时初始化一次,
                               //不能默认构造，因为默认构造传的是空指针，会导致儿子找不到父亲
    fail = new loginfail(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//注册按钮
void MainWindow::on_pushButton_clicked()
{
    code = ui->lineEdit->text();//账号，获取lineEdit中的内容
    pwd = ui->lineEdit_2->text();//密码，获取lineEdit_2中的内容

}

//登录按钮
void MainWindow::on_pushButton_2_clicked()
{
    QString tmp_code = ui->lineEdit->text();
    QString tmp_pwd = ui->lineEdit_2->text();
    qDebug() << tmp_pwd;
    qDebug() << tmp_code;
    qDebug() << pwd;
    qDebug() << code;
    if(tmp_code == code && tmp_pwd == pwd)
    {
        qDebug() << "登录成功！" << endl;
        this->hide();
        l->show();

       // QPixmap pic("D:/粤嵌创客训练营/vmshare/Ele_Picture/pic/1.bmp");//设置成功显示的图片
       // pic = pic.scaled(ui->label_3->width(),ui->label_3->height());//将图片变成和label一样的宽高
       // ui->label_3->setPixmap(pic);
    }
    else
    {
        qDebug() << "登录失败！" << endl;
        this->hide();
        fail->show();
//        QPixmap pic1("D:/粤嵌创客训练营/vmshare/Ele_Picture/pic/20.bmp");//设置失败显示的图片
//        pic1 = pic1.scaled(ui->label_3->width(),ui->label_3->height());
//        ui->label_3->setPixmap(pic1);
    }

}
