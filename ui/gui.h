//
// Created by Panaite Dorinel on 12/05/2017.
//

#ifndef LMDB_GUI_H
#define LMDB_GUI_H

#include <QWidget>
#include "gui.h"
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QApplication>

class QTextEdit;
class QPushButton;

class gui : public QWidget
{
Q_OBJECT
private:
    QPushButton *adminButton;
    QPushButton *userButton;
    QPushButton *quitButton;

public:
//    gui();
    explicit gui(QWidget *parent = 0);

//signals:
//
//public slots:

};


#endif //LMDB_GUI_H
