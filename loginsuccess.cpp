#include "loginsuccess.h"
#include "ui_loginsuccess.h"
#include "mainwindow.h"
loginsuccess::loginsuccess(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginsuccess)
{
    ui->setupUi(this);
    QPixmap pic("D:/粤嵌创客训练营/vmshare/Ele_Picture/pic/1.bmp");
    pic = pic.scaled(ui->label->width(),ui->label->height());
    ui->label->setPixmap(pic);

}

loginsuccess::~loginsuccess()
{
    delete ui;
}

void loginsuccess::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
