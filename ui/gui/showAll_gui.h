//
// Created by Panaite Dorinel on 15/05/2017.
//

#ifndef LMDB_SHOWALL_GUI_H
#define LMDB_SHOWALL_GUI_H


#include <QWidget>
#include <QPushButton>
#include <QListWidget>
#include <QHBoxLayout>

#include "../../tests/test_controller.h"

class showAll_gui : public QWidget
{
    Q_OBJECT
private:
    //app requirements
    Controller ctrl;

    //ui req
    QListWidget *items;
    QHBoxLayout *layout;

public:
//    gui();
    showAll_gui(Controller ctrl);

signals:


public slots:

};


#endif //LMDB_SHOWALL_GUI_H
