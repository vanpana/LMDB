#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../repository/repository.h"
#include "../repository/watchlist.h"
#include <string>
using namespace std;

class Controller
{
    FileRepository repo;

public:
    //default constructor
    Controller() {}

    //constructor with parameters
    Controller(const FileRepository& repo) { this->repo = repo; }

    /*
     Function to construct an object of type Movie and send it to repository for adding.
     Input: title, genre, trailer: string; year, likes: int
     */
    void add(const string& title, const string& genre, const int& year, const int& likes, const string& trailer) { this->repo.add(Movie{title, genre, year, likes, trailer});}

    /*
     Function to send title to repository for deleting
     Input: title: string
     Output: 1 if it was deleted, 0 otherwise
     */
    int del(const string& title) { return this->repo.del(title); }

    /*
     Function to construct an object of type Movie and send it to repository for updating.
     Input: title, genre, trailer: string; year, likes: int
     Output: 1 if it was deleted, 0 otherwise
     */
    int update(const string& title, const string& genre, const int& year, const int& likes, const string& trailer) { return this->repo.update(Movie{title, genre, year, likes, trailer}); }

    /*
     Function to get total number of movies
     Output: len - int
     */
    int getLength() { return this->repo.getLength(); }

    /*
     Function to get position of an element with a specific title
     Output: pos - int
     */
    int getPosition(const string& title) { return this->repo.getPosition(title); }

    /*
     Function to get all the items in the array.
     Output: array of Movies
     */
    vector<Movie> getItems() { return this->repo.getItems(); }

    void saveToFile(const string& type) { this->repo.saveToFile("csv"); }

    //destructor
    ~Controller() {}
};

#endif