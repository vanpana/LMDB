#include "repository.h"
#include <iostream>
#include <string>
using namespace std;

Repository::Repository()
{
    this->items = new DynArr<Movie>();
    this->capacity = 0;
}

Repository::Repository(int capacity)
{
    this->items = new DynArr<Movie>{capacity};
    this->capacity = capacity;
};

void Repository::add(Movie mov)
{
    this->items->push(mov);
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