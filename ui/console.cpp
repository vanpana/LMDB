#include "console.h"

Console::Console(Controller ctrl)
{
    this->ctrl = ctrl;
}

void Console::printMenu()
{
    cout<<"----------------\n";
    cout<<"1. Administrator Mode\n";
    cout<<"2. User Mode\n";
}

void Console::loop()
{
    while(1)
    {
        printMenu();
        break;
    }
}

void Console::runApp()
{
    loop();
}

Console::~Console()
{

}