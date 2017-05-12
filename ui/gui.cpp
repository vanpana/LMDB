//
// Created by Panaite Dorinel on 12/05/2017.
//

#include "gui.h"
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QApplication>

gui::gui(QWidget *parent) : QWidget(parent)
{
    adminButton = new QPushButton(this);
    adminButton->setText("Administrator Mode");

    userButton = new QPushButton(this);
    userButton->setText("User mode");

    quitButton = new QPushButton(this);
    quitButton->setText("Quit");
    QApplication::exit();
    QObject::connect(quitButton, SIGNAL(clicked()),this , SLOT(close()));
    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(adminButton);
    layout->addWidget(userButton);
    layout->addWidget(quitButton);
}
//gui::gui()
//{
//    adminButton = new QPushButton(this);
//    adminButton->setText("Administrator Mode");
//
//    userButton = new QPushButton(this);
//    userButton->setText("User mode");
//
//    quitButton = new QPushButton(this);
//    quitButton->setText("Quit");
//    QApplication::exit();
//    QObject::connect(quitButton, SIGNAL(clicked()),this , SLOT(close()));
//    QVBoxLayout *layout = new QVBoxLayout(this);
//
//    layout->addWidget(adminButton);
//    layout->addWidget(userButton);
//    layout->addWidget(quitButton);
//}
