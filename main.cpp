#include <iostream>
#include <QApplication>
#include <QTextEdit>


#include "repository/repository.h"
#include "controller/controller.h"
#include "ui/console.h"
#include "common/util.h"
#include "ui/gui/gui.h"


using namespace std;

int main(int argc, char **argv)
{
    //testing requirements
    system("find . -name \"*.gcda\" -print0 | xargs -0 rm");
    ::testing::InitGoogleTest(&argc, argv);

    //testing
    RUN_ALL_TESTS();
    cout << "\n";

    //cout << "Created & alive after testing: " << Counter<Movie>::GetTotal() << " " << Counter<Movie>::GetAlive() << "\n";

    //app initialising
    string type = "";
    while (type != "csv" && type != "html")
    {
        cout << "Choose file type (csv or html): ";
        getline(cin, type);
    }

    MemoryRepository *admin_repo = new FileRepository{"../data/movie_database.csv"};

    WatchList *user_repo;
    if (type == "csv")
        user_repo = new CSVWatchList();
    else user_repo = new HTMLWatchList();

    Controller *admin_ctrl = new Controller{admin_repo};
    //Console *ui = new Console(*admin_ctrl, user_repo);

    //QT GUI Initialising
    QApplication app(argc, argv);

    gui *ui = new gui(*admin_ctrl, user_repo);
    ui->show();

    app.exec();

    //cout << "Created & alive after initialising: " << Counter<Movie>::GetTotal() << " " << Counter<Movie>::GetAlive() << "\n";

    //ui->runApp();

    delete ui;
    delete admin_ctrl;
    delete user_repo;
    delete admin_repo;

    //cout << "Created & alive after exiting: " << Counter<Movie>::GetTotal() << " " << Counter<Movie>::GetAlive() << "\n";


}
