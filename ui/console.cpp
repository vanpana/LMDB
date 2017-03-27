#include "console.h"
#include <string>
#include <regex>
using namespace std;

Console::Console(Controller ctrl)
{
    this->ctrl = ctrl;
}

void Console::printModes()
{
    cout<<"----------------\n";
    cout<<"Choose your user type:\n";
    cout<<"1. Administrator Mode\n";
    cout<<"2. User Mode\n";
    cout<<"0. EXIT\n";
}

void Console::printMenu(int mode)
{
    cout<<"----------------\n";
    cout<<"Choose option:\n";
    if (mode == 1) //administator
    {
        cout<<"1. Add movie.\n";
        cout<<"2. Update movie.\n";
        cout<<"3. Delete movie.\n";
        cout<<"4. Print all movies.\n";
    }

    else //user
    {
        cout<<"No options yet...\n";
    }
    cout<<"0. Exit\n";
}

void Console::uiAdd()
{
    string title, genre, trailer;
    int year, likes;

    cout<<"Input title: ";
    title = getString();

    cout<<"Input genre: ";
    genre = getString();

    do
    {
        cout<<"Input year: ";
        year = getInteger();
        if (year == -1)
            cout<<"Invalid input!\n";
    }while (year == -1);

    do
    {
        cout<<"Input likes: ";
        likes = getInteger();
        if (likes == -1)
            cout<<"Invalid input!\n";
    }while (likes == -1);


    do
    {
        cout<<"Input trailer: ";
        trailer = getString();
        if (!regex_match(trailer, regex("w\{3\}\..*\..*")))
            cout<<"Invalid trailer link\n";
    }while(!regex_match(trailer, regex("w\{3\}\..*\..*")));
    this->ctrl.add(title, genre, year, likes, trailer);
}

int Console::getInteger()
{
    string tempS;
    int tempI;
    cin>>tempS;
    cin.ignore();

    for (int i = 0; i < tempS.size(); i++)
        if (!isdigit(tempS[i]))
            return -1;
    tempI = stoi(tempS);
    return tempI;
}

string Console::getString()
{
    string tempS;
    cin>>tempS;
    cin.ignore();
    return tempS;
}

void Console::loop()
{
    while(1)
    {
        int mode = -1, option = -1;
        do
        {
            printModes();
            mode = getInteger();
            if (mode == -1 || (mode != 0 && mode != 1 && mode != 2))
                cout<<"Invalid command!\n";
        }while (mode == -1 || (mode != 0 && mode != 1 && mode != 2));
        if (mode == 0)
            break;
        else
        {
            do {
                printMenu(mode);
                option = getInteger();
                if (mode == 1 && (option < 0 || option > 4))
                    cout << "Invalid command!\n";
            } while (mode == 1 && (option < 0 || option > 4));
            if (mode == 1)
            {
                if (option == 0)
                    break;
                else if (option == 1)
                    uiAdd();
            }
        }
    }
}

void Console::runApp()
{
    loop();
}

Console::~Console()
{

}