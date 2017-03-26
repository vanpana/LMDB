#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include "../controller/controller.h"

using namespace std;

class Console
{
    Controller ctrl;

public:
    Console();
    Console(Controller ctrl);
    string getCommand();
    void printMenu();
    void loop();
    void runApp();
    ~Console();
};

#endif