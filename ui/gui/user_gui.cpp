//
// Created by Panaite Dorinel on 16/05/2017.
//

#include "user_gui.h"
user_gui::user_gui(WatchList *wlist, QWidget *parent)
{
    this->wlist = wlist;

    getSuggestionsButton = new QPushButton(this);
    getSuggestionsButton->setText("Add new movie");

}