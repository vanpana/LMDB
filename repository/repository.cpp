#include "repository.h"
#include "../common/util.h"
#include <fstream>

using namespace std;

void Repository::loadFromFile()
{
    ifstream f(this->filename);
    string temp;
    string* args;

    getline(f, temp);
    while(!f.eof())
    {
        args = splitString(temp);
        add(Movie{args[0], args[1], stoi(args[2]), stoi(args[3]), args[4]});
        getline(f, temp);
    }
    f.close();
}

void Repository::saveToFile(string type = "csv")
{
    if (type == "csv")
    {
        ofstream f(this->filename);

        for (Movie i: items)
            //donothing

        f.close();
    }
    if (type == "html")
    {
        cout << "Not now";
    }
}

Repository::Repository(int capacity, string filename)
{
    this->items = vector<Movie>();
    this->filename = filename;
    loadFromFile();
}


Repository::Repository(const Repository &other)
{
    this->filename = other.filename;
    this->items = other.items;
}

Repository& Repository::operator=(Repository &other)
{
    if (this == &other)
        return *this;

    this->filename = other.filename;

    this->items = other.items;

    return *this;
}

void Repository::add(Movie mov)
{
    //TODO Validate here!
    this->items.push_back(mov);
}

int Repository::del(string name)
{
    int pos = getPosition(name);

    if (pos == -1)
        return 0;
    this->items.erase(this->items.begin() + pos);
    return 1;
}

int Repository::update(Movie mov)
{
    int pos = getPosition(mov.getTitle());
    if (pos == -1)
        return 0;

    this->items[pos] = mov;
    return 1;
}

int Repository::getPosition(string name)
{
    int counter = 0;
    for (Movie mov: items)
    {
        if (mov.getTitle() == name)
            return counter;
        counter++;
    }
    return -1;
}