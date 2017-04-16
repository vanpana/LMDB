#ifndef LMDB_UTIL_H
#define LMDB_UTIL_H

#include <string>
#include "../domain/entities.h"
#include "../tests/test_controller.h"

using namespace std;

string* splitString(string temp);
vector<Movie> sortByGenre(vector<Movie> items);
void test_functions();

#endif //LMDB_UTIL_H
