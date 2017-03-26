#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../repository/repository.h"
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
    Movie* getItems() { return this->repo.getItems();  }
    int getLength() { return this->repo.getLength(); }
    ~Controller();
};

#endif