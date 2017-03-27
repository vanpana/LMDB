#include "watchlist.h"

WatchList::WatchList(int capacity)
{
    this->movieList = new DynArr<Movie>{capacity};
}

void WatchList::add(Movie mov)
{
    //TODO Validate here!
    this->movieList->push(mov);
}

int WatchList::del(string title)
{
    return this->movieList->pop(title);
}

DynArr<Movie>* WatchList::getSuggestions(DynArr<Movie>* repo, string needle)
{
    if (needle == "")
        return repo;
    DynArr<Movie>* suggestions = new DynArr<Movie>{10};
    for (int i = 0; i < repo->getLength(); i++)
    {
        Movie mov = repo->getItems()[i];
        if (mov.getGenre() == needle)
            suggestions->push(mov);
    }

    return suggestions;
}