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
    //default constructor
    Controller();

    //constructor with parameters
    Controller(Repository repo);

    /*
     Function to construct an object of type Movie and send it to repository for adding.
     Input: title, genre, trailer: string; year, likes: int
     */
    void add(string title, string genre, int year, int likes, string trailer);

    /*
     Function to send title to repository for deleting
     Input: title: string
     Output: 1 if it was deleted, 0 otherwise
     */
    int del(string title);

    /*
     Function to construct an object of type Movie and send it to repository for updating.
     Input: title, genre, trailer: string; year, likes: int
     Output: 1 if it was deleted, 0 otherwise
     */
    int update(string title, string genre, int year, int likes, string trailer);

    /*
     Function to get total number of movies
     Output: len - int
     */
    int getLength() { return this->repo.getArray()->getLength(); }

    /*
     Function to get position of an element with a specific title
     Output: pos - int
     */
    int getPosition(string title) { return this->repo.getPosition(title); }

    /*
     Function to get all the items in the array.
     Output: array of Movies
     */
    Movie * getItems() { return this->repo.getArray()->getItems(); }

    /*
     Function to get the dynamic array.
     */
    DynArr<Movie>* getArray() { return this->repo.getArray(); };

    //destructor
    ~Controller();
};

#endif