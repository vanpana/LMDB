#ifndef LMDB_WATCHLIST_H
#define LMDB_WATCHLIST_H

#include "../domain/entities.h"
#include "../common/array.h"
#include <string>
using namespace std;

class WatchList
{
    DynArr<Movie>* movieList;

public:
    WatchList(int capacity = 10);
    void add(Movie mov);
    int del(string title);
    DynArr<Movie>* getSuggestions(DynArr<Movie>* repo, string needle);
    DynArr<Movie>* getArray() { return this->movieList; }

};

#endif //LMDB_WATCHLIST_H

/*
 * Suggested movies:
 *
 * Title etc
 * 1. Watch trailer
 * 2. Add to watch list
 * 3. Skip
 * 0. Exit
 */