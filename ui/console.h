#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include "../controller/controller.h"

using namespace std;

class Console
{
    Controller ctrl;
    WatchList wlist;

public:
    Console();
    Console(Controller ctrl, WatchList wlist);
    int getInteger();
    string getString();
    void printModes();
    void printMenu(int mode);
    void printSuggestionMenu(Movie mov);

    //Admin functions
    void uiAdd();
    void uiUpdate();
    void uiDelete();
    void uiPrintAll();
    void uiPrintAllByGenre();

    //User functions
    void uiGetSuggestions();
    void uiDeleteSuggestion();
    void uiPrintSuggestions();

    void loop();
    void runApp();
    ~Console();
};

#endif