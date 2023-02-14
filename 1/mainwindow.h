#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"chooselevelscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     void paintEvent(QPaintEvent *);

     chooselevelscene * choosScene =NULL;


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
