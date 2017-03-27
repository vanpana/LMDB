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
    int getInteger();
    string getString();
    void printModes();
    void printMenu(int mode);

    void uiAdd();
    void uiUpdate();
    void uiDelete();
    void uiPrintAll();

    void loop();
    void runApp();
    ~Console();
};

#endif