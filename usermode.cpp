#include "usermode.h"
#include "ui_usermode.h"
#include "MovieTableModel.h"

userMode::userMode(Controller ctrl, WatchList *wlist, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userMode)
{
    ui->setupUi(this);

    this->ctrl = ctrl;
    this->wlist = wlist;

    ui->liked->addItem("Liked it");
    ui->liked->addItem("Disliked it");

    this->updateTable();

    //ui->listView = new MovieTableModel(wlist);
    //ui->items = new MovieTableModel(wlist);
}

userMode::~userMode()
{
    delete ui;
}

void userMode::on_suggestionButton_clicked()
{
    string needle = ui->genreEdit->toPlainText().toStdString();
    this->wlist->getSuggestions(this->ctrl.getItems(), needle);

    if (wlist->getMaximumPos() == 0)
        ui->movieLabel->setText("No suggestions for this genre!");
    else
        {
            Movie mov = wlist->getCurrentMovie();

            ui->movieLabel->setText(QString::fromStdString(mov.getTitle()));

//                else if (option == 2)
//                    this->wlist->add();

//                else if (option == 3)
//                    continue;

//                else if (option == 0)
//                    break;
            }
//        if (suggestions.size() == 0)
//            ui->movieLabel->setText("That's all for now!\n");
}

void userMode::on_trailerButton_clicked()
{
    Movie mov = wlist->getCurrentMovie();
    string url = "open ";
    url += mov.getTrailer();
    system(url.c_str());
    wlist->setCurrentPos(-1);
}

void userMode::on_addButton_clicked()
{
    this->wlist->add();

    ui->items->clear();
    for (Movie mov: wlist->getArray())
        ui->items->addItem(QString::fromStdString(mov.toStr()));

    this->updateTable();

    on_nextButton_clicked();
}

void userMode::on_nextButton_clicked()
{
    Movie mov = wlist->getCurrentMovie();
    ui->movieLabel->setText(QString::fromStdString(mov.getTitle()));
}

void userMode::on_openButton_clicked()
{
    this->wlist->saveToFile();
    this->wlist->openInApp();
}

void userMode::on_deleteButton_clicked()
{
    string title = ui->watchedEdit->toPlainText().toStdString();
    this->wlist->del(title);
    if (ui->liked->currentIndex() == 0)
        this->ctrl.incLikes(title);

    ui->items->clear();
    for (Movie mov: wlist->getArray())
        ui->items->addItem(QString::fromStdString(mov.toStr()));

    this->updateTable();
}
