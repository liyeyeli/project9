#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setlabel1();
    void setlabel2();
    void setlabel3();//用户自定义信号
    void setlabel4(QString a,int b);//用户自定义带参的信号，实现参数传递

signals:
    void mysig();
    void mysig1(QString a,int b);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
