#include <iostream>
#include "repository/repository.h"
#include "controller/controller.h"
#include "ui/console.h"
#include <unistd.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    Repository admin_repo = Repository{30};
    WatchList user_repo = WatchList{30};

    Controller admin_ctrl = Controller{admin_repo};;

    Console ui = Console(admin_ctrl, user_repo);

    ui.runApp();
}
