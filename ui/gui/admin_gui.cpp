//
// Created by Panaite Dorinel on 15/05/2017.
//

#include "admin_gui.h"
#include "showAll_gui.h"
#include "displayShort_gui.h"

admin_gui::admin_gui(Controller ctrl)
{
    this->ctrl = ctrl;

    addButton = new QPushButton(this);
    addButton->setText("Add new movie");

    updateButton = new QPushButton(this);
    updateButton->setText("Update a movie");

    removeButton = new QPushButton(this);
    removeButton->setText("Delete a movie");

    showAllButton = new QPushButton(this);
    showAllButton->setText("Display all movies");

    displayShortButton = new QPushButton(this);
    displayShortButton->setText("Display short movies");

    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(addButton);
    layout->addWidget(updateButton);
    layout->addWidget(removeButton);
    layout->addWidget(showAllButton);
    layout->addWidget(displayShortButton);


    //code
    QObject::connect(addButton, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(updateButton, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(removeButton, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(showAllButton, SIGNAL(clicked()), this, SLOT(showAll()));
    QObject::connect(displayShortButton, SIGNAL(clicked()), this, SLOT(displayShort()));
}

void admin_gui::showAll()
{
    showAll_gui *sa = new showAll_gui(this->ctrl);
    sa->show();
}

void admin_gui::displayShort()
{
    displayShort_gui *ds = new displayShort_gui(this->ctrl);
    ds->show();
}