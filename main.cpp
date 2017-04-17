#include <iostream>
#include "repository/repository.h"
#include "controller/controller.h"
#include "ui/console.h"
#include "common/util.h"

using namespace std;

int main(int argc, char **argv)
{
    //testing requirements
    system("find . -name \"*.gcda\" -print0 | xargs -0 rm");
    ::testing::InitGoogleTest(&argc, argv);

    //testing
    RUN_ALL_TESTS();
    cout << "\n";

    cout << "Created & alive after testing: " << Counter<Movie>::GetTotal() << " " << Counter<Movie>::GetAlive() << "\n";

    //app initialising
    FileRepository *admin_repo = new FileRepository{"/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/data/movies.csv"};
    WatchList *user_repo = new WatchList{30};
    Controller *admin_ctrl = new Controller{*admin_repo};
    Console *ui = new Console(*admin_ctrl, *user_repo);

    cout << "Created & alive after initialising: " << Counter<Movie>::GetTotal() << " " << Counter<Movie>::GetAlive() << "\n";

    ui->runApp();

    delete ui;
    delete admin_ctrl;
    delete user_repo;
    delete admin_repo;

    cout << "Created & alive after exiting: " << Counter<Movie>::GetTotal() << " " << Counter<Movie>::GetAlive() << "\n";

}
