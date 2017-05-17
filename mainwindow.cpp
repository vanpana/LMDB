#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminmode.h"
#include "usermode.h"

MainWindow::MainWindow(Controller ctrl, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->saver->addItem("csv");
    ui->saver->addItem("html");

    this->ctrl = ctrl;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quitButton_clicked()
{
    this->close();
}

void MainWindow::on_adminButton_clicked()
{
    adminMode *am = new adminMode(this->ctrl);
    am->show();
}

void MainWindow::on_userButton_clicked()
{
    WatchList *wlist;
    if (ui->saver->currentIndex() == 0)
        wlist = new CSVWatchList();
    else wlist = new HTMLWatchList();

    userMode *um = new userMode(wlist);
    um->show();

}
