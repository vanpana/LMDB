#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <repository/repository.h>
#include <repository/watchlist.h>
#include <controller/controller.h>
#include <domain/entities.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(Controller ctrl, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_quitButton_clicked();


    void on_adminButton_clicked();

    void on_userButton_clicked();

    void on_chartButton_clicked();

private:
    Ui::MainWindow *ui;
    Controller ctrl;
    WatchList *wlist;
};

#endif // MAINWINDOW_H
