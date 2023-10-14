#ifndef LOGINSUCCESS_H
#define LOGINSUCCESS_H

#include <QMainWindow>
#include<QPixmap>
namespace Ui {
class loginsuccess;
}

class loginsuccess : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginsuccess(QWidget *parent = nullptr);
    ~loginsuccess();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginsuccess *ui;
};




#endif // LOGINSUCCESS_H
