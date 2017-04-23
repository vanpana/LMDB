#ifndef LMDB_UTIL_H
#define LMDB_UTIL_H

#include <string>
#include "../domain/entities.h"
#include "../tests/test_controller.h"

using namespace std;

/*
 Function that simulates strip and split by commas.
 */
string* splitString(string temp);

/*
 Compare function between two movie entity genres.
 */
bool genreBool(Movie a, Movie b);

/*
 Function that gets a list of movies and returns a sorted one by genre.
 */
vector<Movie> sortByGenre(vector<Movie> items);

#endif //LMDB_UTIL_H
