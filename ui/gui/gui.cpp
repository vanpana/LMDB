//
// Created by Panaite Dorinel on 12/05/2017.
//

#include "gui.h"
#include "admin_gui.h"
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QApplication>

gui::gui(Controller ctrl, WatchList *wlist, QWidget *parent) : QWidget(parent)
{
    this->ctrl = ctrl;
    this->wlist = wlist;

    //UI layout
    adminButton = new QPushButton(this);
    adminButton->setText("Administrator Mode");

    userButton = new QPushButton(this);
    userButton->setText("User mode");

    quitButton = new QPushButton(this);
    quitButton->setText("Quit");

    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(adminButton);
    layout->addWidget(userButton);
    layout->addWidget(quitButton);

    //code
    QObject::connect(adminButton, SIGNAL(clicked()), this, SLOT(showAdmin()));
    QObject::connect(userButton, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(quitButton, SIGNAL(clicked()), this, SLOT(close()));

}

void gui::showAdmin()
{
    admin_gui *admin = new admin_gui(this->ctrl);
    admin->show();

}
