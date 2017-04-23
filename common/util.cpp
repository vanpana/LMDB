#include "util.h"

using namespace std;

string *splitString(string temp)
{
    string* args = new string[5];
    istringstream ss(temp);
    string token;
    int i = 0;

    while(getline(ss, token, ','))
        args[i++] = token;

    return args;
}

bool genreBool(Movie a, Movie b) { return a.getGenre() > b.getGenre(); }

vector<Movie> sortByGenre(vector<Movie> items)
{
    sort(items.begin(), items.end(), genreBool);
    return items;
}