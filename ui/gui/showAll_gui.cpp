//
// Created by Panaite Dorinel on 15/05/2017.
//

#include "showAll_gui.h"

showAll_gui::showAll_gui(Controller ctrl)
{
    this->ctrl = ctrl;

    int x = this->width() * 1.5;
    this->setFixedSize(x, this->height());
    this->setBaseSize(500,500);

    items = new QListWidget(this);

    for (Movie mov: ctrl.getItems())
    {
        items->addItem(QString::fromStdString(mov.toStr()));
    }


    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(items);
    //code
}