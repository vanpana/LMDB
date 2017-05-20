#include "mainwindow.h"
#include <repository/repository.h>
#include <repository/watchlist.h>
#include <controller/controller.h>
#include <domain/entities.h>
#include <Qdir>
#include <QApplication>

int main(int argc, char *argv[])
{

    Repository *repo = new FileRepository("/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/data/movie_database.csv");
    Controller *ctrl = new Controller(repo);

    QApplication a(argc, argv);
    MainWindow w(*ctrl);
    w.show();

    return a.exec();
}
