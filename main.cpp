#include "mainwindow.h"
#include <repository/repository.h>
#include <repository/watchlist.h>
#include <controller/controller.h>
#include <domain/entities.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    Repository *repo = new FileRepository("/Users/vanpana/Desktop/backup/LMDB/data/movie_database.csv");
    Controller *ctrl = new Controller(repo);

    QApplication a(argc, argv);
    MainWindow w(*ctrl);
    w.show();

    return a.exec();
}
