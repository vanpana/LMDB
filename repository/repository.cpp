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

Repository::Repository()
{
    this->items = new DynArr<Movie>();
}

Repository::Repository(int capacity, string filename)
{
    this->items = new DynArr<Movie>{capacity};
    this->filename = filename;
    loadFromFile();
}


Repository::Repository(const Repository &other)
{
    this->filename = other.filename;
    this->items = new DynArr<Movie>{10};
    *this->items = *other.items;
}

Repository& Repository::operator=(Repository &other)
{
    if (this == &other)
        return *this;

    this->filename = other.filename;
    //int capacity = other.getLength();
    //delete[] this->items;

    this->items = new DynArr<Movie>{10};
    *this->items = *other.getArray();

    return *this;
}

void Repository::add(Movie mov)
{
    //TODO Validate here!
    //this->items->push(mov);
    this->items = *this->items + mov;
}

int Repository::del(string name)
{
    return this->items->pop(name);
}

int Repository::update(Movie mov)
{
    if (items->getPosition(mov.getTitle()) == -1)
        return 0;
    this->items->push(mov);
    return 1;
}