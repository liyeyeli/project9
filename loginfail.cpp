#include "loginfail.h"
#include "ui_loginfail.h"

loginfail::loginfail(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginfail)
{
    ui->setupUi(this);
    QPixmap pic("D:/粤嵌创客训练营/vmshare/Ele_Picture/pic/20.bmp");
    pic = pic.scaled(ui->label_2->width(),ui->label_2->height());
    ui->label_2->setPixmap(pic);
}

loginfail::~loginfail()
{
    delete ui;
}

void loginfail::on_pushButton_clicked()
{
    this->parentWidget()->show();
    this->hide();
}
