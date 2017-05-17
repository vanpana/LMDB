//
// Created by Panaite Dorinel on 17/05/2017.
//

#include <QVBoxLayout>
#include "displayShort_gui.h"

displayShort_gui::displayShort_gui(Controller ctrl)
{
    this->ctrl = ctrl;

    int x = this->width() * 1.5;
    this->setFixedSize(x, this->height());
    this->setBaseSize(500,500);

    choice = new QComboBox();
    items = new QListWidget();

    choice->addItem("Long version");
    choice->addItem("Short version");
    choice->setCurrentIndex(choice->findText("Long version"));

    for (Movie mov: ctrl.getItems())
        items->addItem(QString::fromStdString(mov.toStr()));

    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(choice);
    layout->addWidget(items);

    QObject::connect(choice, SIGNAL(currentIndexChanged(int)), this, SLOT(switchItems(int)));
}

void displayShort_gui::switchItems(int mode)
{
    items->clear();
    if (mode == 0)
        for (Movie mov: ctrl.getItems())
            items->addItem(QString::fromStdString(mov.toStr()));
    else
        for (Movie mov: ctrl.getItems())
            items->addItem(QString::fromStdString(mov.getTitle()));
}
