//
// Created by Panaite Dorinel on 16/05/2017.
//

#ifndef LMDB_USER_GUI_H
#define LMDB_USER_GUI_H


#include <QArgument>
#include <QWidget>
#include <QPushButton>
#include "../../tests/test_watchlist.h"

class user_gui : QWidget
{
    Q_OBJECT
private:
    //app requirements
    WatchList *wlist;



    //ui req
    QPushButton *getSuggestionsButton;
    QPushButton *deleteMovieButton;
    QPushButton *viewWatchListButton;
    QPushButton *openAppButton;

public:
//    gui();
    explicit user_gui(WatchList *wlist, QWidget *parent = 0);

    signals:


public slots:

};


#endif //LMDB_USER_GUI_H
