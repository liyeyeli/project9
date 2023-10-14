#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPixmap>
#include<QString>
#include<QDebug>//QT 中的 printf
#include "loginsuccess.h"
#include "loginfail.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    loginsuccess *l;
    loginfail *fail;
    QString code;
    QString pwd;
};

#endif // MAINWINDOW_H
