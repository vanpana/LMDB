#include "mainwindow.h"
#include "repository/repository.h"
#include "tests/test_controller.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    system("find . -name \"*.gcda\" -print0 | xargs -0 rm");
    Repository *repo = new UndoRepository("/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/data/movie_database.csv");
    Controller *ctrl = new Controller(repo);

    QApplication a(argc, argv);
    MainWindow w(*ctrl);
    w.show();

    return a.exec();
}
