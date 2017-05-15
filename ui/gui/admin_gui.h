//
// Created by Panaite Dorinel on 15/05/2017.
//

#ifndef LMDB_ADMIN_H
#define LMDB_ADMIN_H


#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

#include "../../tests/test_controller.h"

class QTextEdit;
class QPushButton;

class admin_gui : public QWidget
{
    Q_OBJECT
private:
    //app requirements
    Controller ctrl;

    //ui req
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *removeButton;
    QPushButton *showAllButton;

public:
//    gui();
    admin_gui(Controller ctrl);

signals:


public slots:
    void showAll();

};


#endif //LMDB_ADMIN_H
