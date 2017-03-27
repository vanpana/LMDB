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

    Repository repo = Repository{30};
    Controller ctrl = Controller{repo};
    Console ui = Console(ctrl);

    ui.runApp();
}
