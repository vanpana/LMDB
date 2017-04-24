#include <vector>
#include "watchlist.h"
#include <vector>
using namespace std;

WatchList::WatchList(int capacity)
{
    this->movieList = vector<Movie>();
    this->currentPos = 0;
    this->maximumPos = 0;
    this->suggestions = vector<Movie>();

}

void WatchList::add()
{
    this->movieList.push_back(this->suggestions[this->currentPos]);
    this->suggestions.erase(this->suggestions.begin() + this->currentPos);
    this->currentPos--;
    this->maximumPos--;
}

int WatchList::getPosition(string name)
{
    int counter = 0;
    for (Movie mov: this->movieList)
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

//vector<Movie> WatchList::getSuggestions(vector<Movie> repo, string needle)
//{
//    if (needle == "")
//        return repo;
//    vector<Movie> suggestions = vector<Movie>();
//    for (int i = 0; i < repo.size(); i++)
//    {
//        Movie mov = repo[i];
//        if (mov.getGenre() == needle)
//            suggestions.push_back(mov);
//    }
//
//    return suggestions;
//}

void WatchList::getSuggestions(vector<Movie> repo, string needle)
{
    if (needle == "")
        this->suggestions = repo;
    else
    {
        vector<Movie> suggestions = vector<Movie>();
        for (int i = 0; i < repo.size(); i++)
        {
            Movie mov = repo[i];
            if (mov.getGenre() == needle)
                suggestions.push_back(mov);
        }
        this->suggestions = suggestions;
    }
    this->currentPos = -1;
    this->maximumPos = suggestions.size();
}

Movie WatchList::getCurrentMovie()
{
    if (this->currentPos == this->maximumPos - 1)
        this->currentPos = -1;
    return this->suggestions[++this->currentPos];
}