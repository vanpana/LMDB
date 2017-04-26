#ifndef LMDB_WATCHLIST_H
#define LMDB_WATCHLIST_H

#include "../domain/entities.h"
#include "../common/array.h"
#include <string>

using namespace std;

class WatchList
{
protected:
    vector<Movie> movieList;
    vector<Movie> suggestions;
    int currentPos, maximumPos;
    string type;

public:
    WatchList() { }
    //constructor with parameters
    WatchList(string type);

    //Function that adds a movie to the watchlist
    void add();

    //Function that deletes a movie from the watchlist
    int del(string title);

    //Function that gets suggestion by needle (which in this case is a genre
//    vector<Movie> getSuggestions(vector<Movie> repo, string needle);
    void getSuggestions(vector<Movie> repo, string needle);

    //Function that returns the watchlist
    vector<Movie> getArray() { return this->movieList; }

    int getPosition(string name);

    Movie getCurrentMovie();

    void resetPos() { this->suggestions = vector<Movie>(); this->currentPos = 0; this->maximumPos = 0; }

    int getMaximumPos() const { return this->maximumPos; }

    void setCurrentPos(int value) { this->currentPos += value; }

    virtual void saveToFile() = 0;
    virtual void openInApp() = 0;

    string getType() const { return this->type; }
};

class CSVWatchList : public WatchList
{
    void saveToFile();
    void openInApp();
};

class HTMLWatchList : public WatchList
{
    void saveToFile();
    void openInApp();
};
#endif //LMDB_WATCHLIST_H