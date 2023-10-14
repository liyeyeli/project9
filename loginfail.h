#ifndef LOGINFAIL_H
#define LOGINFAIL_H

#include <QMainWindow>
#include <QPixmap>
namespace Ui {
class loginfail;
}

class loginfail : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginfail(QWidget *parent = nullptr);
    ~loginfail();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginfail *ui;
};

#endif // LOGINFAIL_H
