#ifndef USERMODE_H
#define USERMODE_H

#include <QDialog>
#include "repository/watchlist.h"
#include "controller/controller.h"

namespace Ui {
class userMode;
}

class userMode : public QDialog
{
    Q_OBJECT

public:
    explicit userMode(Controller ctrl, WatchList *wlist, QWidget *parent = 0);
    ~userMode();

private slots:
    void on_suggestionButton_clicked();

    void on_trailerButton_clicked();

    void on_addButton_clicked();

    void on_nextButton_clicked();

    void on_openButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::userMode *ui;
    Controller ctrl;
    WatchList *wlist;
};

#endif // USERMODE_H
