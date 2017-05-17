#include "usermode.h"
#include "ui_usermode.h"

userMode::userMode(WatchList *wlist, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userMode)
{
    ui->setupUi(this);

    this->wlist = wlist;
}

userMode::~userMode()
{
    delete ui;
}
