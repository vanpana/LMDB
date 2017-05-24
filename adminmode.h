#ifndef ADMINMODE_H
#define ADMINMODE_H

#include <QDialog>
#include "repository/repository.h"
#include "repository/watchlist.h"
#include "controller/controller.h"
#include "domain/entities.h"
#include <QTextEdit>
#include <QListWidget>
#include <QPushButton>
#include <QComboBox>


namespace Ui {
class adminMode;
}

class adminMode : public QDialog
{
    Q_OBJECT

public:
    explicit adminMode(Controller ctrl, QWidget *parent = 0);
    ~adminMode();

private slots:
    void on_addButton_clicked();
    void switchItems(int mode);

    void on_updateButton_clicked();

    void on_deleteButton_clicked();

    void on_undoButton_clicked();

private:
    Ui::adminMode *ui;
    Controller ctrl;
};

#endif // ADMINMODE_H
