#ifndef LMDB_WATCHLIST_H
#define LMDB_WATCHLIST_H

#include "../domain/entities.h"
#include "../common/array.h"
#include <string>
using namespace std;

class WatchList
{
    vector<Movie> movieList;

public:
    WatchList(int capacity = 10);
    void add(Movie mov);
    int del(string title);
    vector<Movie> getSuggestions(vector<Movie> repo, string needle);
    vector<Movie> getArray() { return this->movieList; }

    int getPosition(string name);
};

#endif //LMDB_WATCHLIST_H