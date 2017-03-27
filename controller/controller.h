#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../repository/repository.h"
#include "../repository/watchlist.h"
#include <string>
using namespace std;

class Controller
{
    Repository repo;

public:

    Controller();
    Controller(Repository repo);
    void add(string title, string genre, int year, int likes, string trailer);
    int del(string title);
    int update(string title, string genre, int year, int likes, string trailer);
    int getLength() { return this->repo.getArray()->getLength(); }
    int getPosition(string title) { return this->repo.getPosition(title); }
    Movie * getItems() { return this->repo.getArray()->getItems(); }
    DynArr<Movie>* getArray() { return this->repo.getArray(); };
    ~Controller();
};

#endif