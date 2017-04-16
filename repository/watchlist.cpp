#include <vector>
#include "watchlist.h"
#include <vector>
using namespace std;

WatchList::WatchList(int capacity)
{
    vector<Movie> suggestions = vector<Movie>(10);
}

void WatchList::add(Movie mov)
{
    //TODO Validate here!
    this->movieList.push_back(mov);
}

int WatchList::getPosition(string name)
{
    int counter = 0;
    for (Movie mov: movieList)
    {
        if (mov.getTitle() == name)
            return counter;
        counter++;
    }
    return -1;
}

int WatchList::del(string title)
{
    int pos = getPosition(title);

    if (pos == -1)
        return 0;
    this->movieList.erase(this->movieList.begin() + pos);
    return 1;
}

vector<Movie> WatchList::getSuggestions(vector<Movie> repo, string needle)
{
    if (needle == "")
        return repo;
    vector<Movie> suggestions = vector<Movie>(10);
    for (int i = 0; i < repo.size(); i++)
    {
        Movie mov = repo[i];
        if (mov.getGenre() == needle)
            suggestions.push_back(mov);
    }

    return suggestions;
}