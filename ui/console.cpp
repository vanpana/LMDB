#include "console.h"
#include "../common/util.h"
#include <string>
#include <cstdlib>
#include <regex>
using namespace std;

Console::Console(Controller ctrl, WatchList wlist)
{
    this->ctrl = ctrl;
    this->wlist = wlist;
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
        cout<<"5. Print all movies sorted by genre.\n";
    }

    else //user
    {
        cout<<"1. Get movie suggestions.\n";
        cout<<"2. Delete watched movie.\n";
        cout<<"3. Print your watchlist.\n";
    }
    cout<<"0. Exit\n";
}

void Console::printSuggestionMenu(Movie mov)
{
    cout<<mov.getTitle()<<"\n";
    cout<<"1. Watch trailer\n";
    cout<<"2. Add to watchlist\n";
    cout<<"3. Skip\n";
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
        //TODO HTTP here
        if (!regex_match(trailer, regex("http://w\{3\}\..*\..*")) && !regex_match(trailer, regex("https://w\{3\}\..*\..*")))
            cout<<"Invalid trailer link\n";
    }while(!regex_match(trailer, regex("http://w\{3\}\..*\..*")) && !regex_match(trailer, regex("https://w\{3\}\..*\..*")));
    this->ctrl.add(title, genre, year, likes, trailer);
}

void Console::uiUpdate()
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
        if (!regex_match(trailer, regex("http://w\{3\}\..*\..*")) && !regex_match(trailer, regex("https://w\{3\}\..*\..*")))
            cout<<"Invalid trailer link\n";
    }while(!regex_match(trailer, regex("http://w\{3\}\..*\..*")) && !regex_match(trailer, regex("https://w\{3\}\..*\..*")));

    if (this->ctrl.update(title, genre, year, likes, trailer) == 0)
        cout<<"Inexistent movie!\n";
    else
        cout<<"Updated movie!\n";
}

void Console::uiDelete()
{
    cout<<"Input title: ";
    string title = getString();

    if (this->ctrl.del(title) == 0)
        cout<<"Inexistent movie!\n";
    else
        cout<<"Deleted movie!\n";
}

void Console::uiPrintAll()
{
    int length = this->ctrl.getLength();

    if (length == 0)
        cout<<"\nThere are no movies yet!\n";
    else
    {
        cout << "\nThe movies are:\n";
        for (int i = 0; i < this->ctrl.getLength(); i++) {
            Movie mov = this->ctrl.getItems()[i];
            mov.str();
        }
    }
}

void Console::uiPrintAllByGenre()
{
    int length = this->ctrl.getLength();

    if (length == 0)
        cout<<"\nThere are no movies yet!\n";
    else
    {
        vector<Movie> sorted = sortByGenre(ctrl.getItems());
        cout << "\nThe movies are:\n";
        for (int i = 0; i < this->ctrl.getLength(); i++)
            sorted[i].str();
    }
}



void Console::uiGetSuggestions()
{
    string needle;
    vector<Movie> suggestions;

    cout<<"Input your genre (type \"all\" for all suggestions:\n";
    needle = getString();
    needle.erase(remove(needle.begin(), needle.end(), '\n'), needle.end());

    suggestions = this->wlist.getSuggestions(this->ctrl.getItems(), needle);
    if (suggestions.size() == 0)
        cout<<"No suggestions for this genre, sorry!";
    else
    {
        for (int i = 0; i < suggestions.size(); i++)
        {
            int option;
            Movie mov = suggestions[i];
            do{
                printSuggestionMenu(mov);
                option = getInteger();
            }while (option<1 && option>3);
            if (option == 1)
            {
                string url = "open ";
                url += mov.getTrailer();
                system(url.c_str());
                i--;
            }
            else if (option == 2)
            {
                this->wlist.add(mov);
                if (i+1 == suggestions.size())
                    i = -1;
                suggestions.erase(suggestions.begin() + i);
            }

            else if (option == 3)
            {
                if (i+1 == suggestions.size())
                    i = -1;
            }
            else if (option == 0)
                i = suggestions.size();
        }
    }
    if (suggestions.size() == 0)
        cout<<"That's all for now!\n";
}

void Console::uiDeleteSuggestion()
{
    //TODO Check why it is deleted from the admin repo
    cout<<"Input title: ";
    string title = getString();

    if (this->wlist.del(title) == 0)
        cout<<"Inexistent movie!\n";
    else
    {
        cout<<"Like the movie?\n";
        string liked;

        do
        {
            liked = getString();
            if (liked != "yes" && liked != "no")
                cout<<"Invalid option\n";
        }while(liked != "yes" && liked != "no");

        if (liked == "yes")
            this->ctrl.getItems()[this->ctrl.getPosition(title)].incLikes();
    }
}

void Console::uiPrintSuggestions()
{
    int length = this->wlist.getArray().size();

    if (length == 0)
        cout<<"\nThere are no movies yet!\n";
    else
    {
        cout << "\nThe movies are:\n";
        for (int i = 0; i < length; i++) {
            Movie mov = this->wlist.getArray()[i];
            mov.str();
        }
    }
}

int Console::getInteger()
{
    string tempS;
    int tempI;
    getline(cin, tempS);
//    cin>>tempS;
//    cin.ignore();

    for (int i = 0; i < tempS.size(); i++)
        if (!isdigit(tempS[i]))
            return -1;
    tempI = stoi(tempS);
    return tempI;
}

string Console::getString()
{
    string tempS;
    getline(cin, tempS);
//    cin>>tempS;
//    cin.ignore();
    return tempS;
}

void Console::loop()
{
    while(1)
    {
        int mode, option;
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
                if ((mode == 1 && (option < 0 || option > 5)) || (mode == 2 && (option < 0 || option > 4)))
                    cout << "Invalid command!\n";
            } while ((mode == 1 && (option < 0 || option > 5)) || (mode == 2 && (option < 0 || option > 4)));
            if (mode == 1)
            {
                if (option == 0)
                    continue;
                else if (option == 1)
                    uiAdd();
                else if (option == 2)
                    uiUpdate();
                else if (option == 3)
                    uiDelete();
                else if (option == 4)
                    uiPrintAll();
                else if (option == 5)
                    uiPrintAllByGenre();
            }

            if (mode == 2)
            {
                if (option == 0)
                    continue;
                if (option == 1)
                    uiGetSuggestions();
                if (option == 2)
                    uiDeleteSuggestion();
                if (option == 3)
                    uiPrintSuggestions();
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