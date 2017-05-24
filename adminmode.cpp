#include "adminmode.h"
#include "ui_adminmode.h"
#include <string>
#include <QMessageBox>
#include <iostream>

bool checkInteger(string s)
{
    if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

    char * p;
    strtol(s.c_str(), &p, 10);

    return (*p == 0);
}

adminMode::adminMode(Controller ctrl, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminMode)
{

    this->ctrl = ctrl;

    ui->setupUi(this);

    ui->choice->addItem("Long version");
    ui->choice->addItem("Short version");
    ui->choice->setCurrentIndex(ui->choice->findText("Long version"));

    for (Movie mov: ctrl.getItems())
        ui->items->addItem(QString::fromStdString(mov.toStr()));

    QObject::connect(ui->choice, SIGNAL(currentIndexChanged(int)), this, SLOT(switchItems(int)));

}

adminMode::~adminMode()
{
    this->ctrl.saveToFile();
    delete ui;
}

void adminMode::switchItems(int mode)
{
    ui->items->clear();
        if (mode == 0)
            for (Movie mov: ctrl.getItems())
                ui->items->addItem(QString::fromStdString(mov.toStr()));
        else
            for (Movie mov: ctrl.getItems())
                ui->items->addItem(QString::fromStdString(mov.getTitle()));
}

void adminMode::on_addButton_clicked()
{
    string title = ui->titleEdit->toPlainText().toStdString();
    string genre = ui->genreEdit->toPlainText().toStdString();
    int year, likes;

    if (checkInteger(ui->yearEdit->toPlainText().toStdString()))
        year = ui->yearEdit->toPlainText().toInt();

    if (checkInteger(ui->likesEdit->toPlainText().toStdString()))
        likes = ui->likesEdit->toPlainText().toInt();

    string trailer = ui->trailerEdit->toPlainText().toStdString();

    try
    {
        this->ctrl.add(title, genre, year, likes, trailer);
    }
    catch (...)
    {
        cout << "Exception encountered";
    }

    switchItems(ui->choice->currentIndex());
}

void adminMode::on_updateButton_clicked()
{
    string title = ui->titleEdit->toPlainText().toStdString();
    string genre = ui->genreEdit->toPlainText().toStdString();
    int year, likes;

    if (checkInteger(ui->yearEdit->toPlainText().toStdString()))
        year = ui->yearEdit->toPlainText().toInt();

    if (checkInteger(ui->likesEdit->toPlainText().toStdString()))
        likes = ui->likesEdit->toPlainText().toInt();

    string trailer = ui->trailerEdit->toPlainText().toStdString();

    try
    {
        this->ctrl.update(title, genre, year, likes, trailer);
    }
    catch (...)
    {
        cout << "Exception encountered";
    }

    switchItems(ui->choice->currentIndex());
}

void adminMode::on_deleteButton_clicked()
{
    string title = ui->titleDeleteEdit->toPlainText().toStdString();

    try
    {
        this->ctrl.del(title);
    }
    catch (...)
    {
        cout << "Exception encountered";
    }

    switchItems(ui->choice->currentIndex());
}

void adminMode::on_undoButton_clicked()
{
    this->ctrl.undo();
    switchItems(ui->choice->currentIndex());
    cout << "Clicked undo.";
}
