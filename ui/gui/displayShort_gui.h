//
// Created by Panaite Dorinel on 17/05/2017.
//

#ifndef LMDB_DISPLAYSHORT_GUI_H
#define LMDB_DISPLAYSHORT_GUI_H


#include <QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QListWidget>

#include "../../tests/test_controller.h"

class displayShort_gui : public QWidget
{
Q_OBJECT
private:
    //app requirements
    Controller ctrl;

    //ui req
    QComboBox *choice;
    QListWidget *items;

public:
//    gui();
    displayShort_gui(Controller ctrl);

signals:


public slots:
    void switchItems(int mode);
};


#endif //LMDB_DISPLAYSHORT_GUI_H
