#include "controller.h"
#include "../domain/entities.h"
#include <string>
using namespace std;

Controller::Controller()
{

}

Controller::Controller(Repository repo)
{
    this->repo = repo;
}

void Controller::add(string title, string genre, int year, int likes, string trailer)
{
    this->repo.add(Movie{title, genre, year, likes, trailer});
}

int Controller::update(string title, string genre, int year, int likes, string trailer)
{
    return this->repo.update(Movie{title, genre, year, likes, trailer});
}

int Controller::del(string title)
{
    return this->repo.del(title);
}

Controller::~Controller()
{

}