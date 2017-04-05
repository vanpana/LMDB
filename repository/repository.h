#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "../domain/entities.h"
#include "../common/array.h"

class Repository
{
private:
    DynArr<Movie> *items;
    string filename;
    void loadFromFile();

public:
    //default constructor
    Repository();

    //constructor with parameters
    Repository(int capacity, string filename);

    //copy constructor
    Repository(const Repository& other);

    //assigment operator
    Repository& operator=(Repository& other);

    //getters
    Movie* getItems() { return this->items->getItems();  }
    int getLength() { return this->items->getLength(); }

    /*
    Adds a given Movie to the list.
    Input: mov - Movie
    Output: mov is added to the items list
    */
    void add(Movie mov);

    /*
    Deletes a movie by name from the list.
    Input: title - The movie to be deleted
    Output: new list without the movie
    returns: 0 if the movie does not exist, 1 if it was deleted.
    */
    int del(string name);

    /*
    Updates a movie which is found by name.
    Input: name - the movie to be searched
        mov - the new movie
    Output: new list with updated movie
    returns: 0 if the movie does not exist, 1 if it was updated.
    */
    int update(Movie mov);

    /*
    Gets the position of a movie by name.
    Input: name - the movie to be searched
    returns: -1 if the movie does not exist, its position else.
    */
    int getPosition(string name) { return this->items->getPosition(name); }

    DynArr<Movie>* getArray() { return this->items; }

    ~Repository() { /*delete[] this->items;*/ };

};

#endif