#ifndef USERMODE_H
#define USERMODE_H

#include <QDialog>
#include <repository/watchlist.h>

namespace Ui {
class userMode;
}

class userMode : public QDialog
{
    Q_OBJECT

public:
    explicit userMode(WatchList *wlist, QWidget *parent = 0);
    ~userMode();

private:
    Ui::userMode *ui;
    WatchList *wlist;
};

#endif // USERMODE_H
