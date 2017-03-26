#pragma once
#include "../domain/entities.h"

template <class T> class Repository
{
private:
    T* items;
    int length;

public:
    //default constructor
    Repository();

    //getters
    T* getItems() { return this->items; }
    T* getLength() { return this->length; }

    /*
    Adds a given Movie to the list.
    Input: mov - Movie
    Output: mov is added to the items list
    */
    void add(T mov);

    /*
    Deletes a movie by name from the list.
    Input: title - The movie to be deleted
    Output: new list without the movie
    returns: 0 if the movie does not exist, 1 if it was deleted.
    */
    int delete(char* name);

    /*
    Updates a movie which is found by name.
    Input: name - the movie to be searched
        mov - the new movie
    Output: new list with updated movie
    returns: 0 if the movie does not exist, 1 if it was updated.
    */
    int update(char* name, T mov);

    /*
    Gets the position of a movie by name.
    Input: name - the movie to be searched
    returns: -1 if the T does not exist, its position else.
    */
    int getPosition(char* name);

};
