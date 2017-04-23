#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "../domain/entities.h"
#include "../common/array.h"
#include "../domain/validator.h"
#include <vector>
using namespace std;

class Repository
{
protected:
    vector<Movie> items;
    Validator validator_class;

public:
    //default constructor
    Repository();

    //copy constructor
    Repository(const Repository& other) { this->items = other.items; }

    //assigment operator
    Repository& operator=(const Repository& other);

    //getters
    vector<Movie> getItems() { return this->items; }
    int getLength() { return this->items.size(); }

    /*
    Adds a given Movie to the list.
    Input: mov - Movie
    Output: mov is added to the items list
    */
    void add(const Movie& mov);

    /*
    Deletes a movie by name from the list.
    Input: title - The movie to be deleted
    Output: new list without the movie
    returns: 0 if the movie does not exist, 1 if it was deleted.
    */
    int del(const string& name);

    /*
    Updates a movie which is found by name.
    Input: name - the movie to be searched
        mov - the new movie
    Output: new list with updated movie
    returns: 0 if the movie does not exist, 1 if it was updated.
    */
    int update(const Movie& mov);

    /*
    Gets the position of a movie by name.
    Input: name - the movie to be searched
    returns: -1 if the movie does not exist, its position else.
    */
    int getPosition(const string& name);

    void incLikes(string title) { this->items[getPosition(title)].incLikes(); }

    ~Repository() { };



};

class FileRepository : public Repository
{
private:
    string filename;
    void loadFromFile();

public:
    FileRepository() { }
    FileRepository(const string& filename) : Repository() { this->filename = filename; loadFromFile(); };

    FileRepository(const FileRepository& other);
    FileRepository& operator=(const FileRepository& other);

    void saveToFile(string type);

//    vector<Movie> getItems() { return Repository::items; }
//    int getLength() { return Repository::getLength(); }
//    void add(Movie mov) { Repository::add(mov); }
//    int del(string name) { return Repository::del(name); }
//    int update(Movie mov) { return Repository::update(mov); }
//    int getPosition(string name) { return Repository::getPosition(name); }

    ~FileRepository() { }
};

#endif