#include <vector>
#include <fstream>
#include "watchlist.h"

using namespace std;

WatchList::WatchList(string type)
{
    this->movieList = vector<Movie>();
    this->currentPos = 0;
    this->maximumPos = 0;
    this->suggestions = vector<Movie>();
    this->type = type;
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

void CSVWatchList::saveToFile()
{
    ofstream f("../data/watchlist.csv");
    for (Movie mov: this->movieList)
        f << mov << endl;

    f.close();
}

void CSVWatchList::openInApp()
{
    system("open ../data/watchlist.csv");
}

void HTMLWatchList::saveToFile()
{
    ofstream f("../data/watchlist.html");
    f << "<!DOCTYPE html>" << endl;
    f << "<html>" << endl;

    f << "<head>" << endl;
    f << "<title>Playlist</title>" << endl;
    f << "</head>" << endl;

    f << "<body>" << endl;

    f << "<table border=\"1\">" << endl;
    //header
    f << "<tr>" << endl;
    f << "<td>Title</td>" << endl; f << "<td>Genre</td>" << endl; f << "<td>Year</td>" << endl; f << "<td>Likes</td>" << endl; f << "<td>Trailer</td>" << endl;
    f << "</tr>" << endl;

    for (Movie mov: this->movieList)
    {
        f << "<tr>" << endl;

        f << "<td>" << mov.getTitle() << "</td>" << endl;
        f << "<td>" << mov.getGenre() << "</td>" << endl;
        f << "<td>" << mov.getYear() << "</td>" << endl;
        f << "<td>" << mov.getLikes() << "</td>" << endl;
        f << "<td><a href =" << mov.getTrailer() << ">Link</a></td>";

        f << "</tr>" << endl;
    }

    f << "</table>" << endl;

    f << "</body>" << endl;


    f << "</html>" << endl;
    f.close();
}

void HTMLWatchList::openInApp()
{
    system("open ../data/watchlist.html");
}