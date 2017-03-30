#ifndef LMDB_UTIL_H
#define LMDB_UTIL_H

#include <string>
#include "../domain/entities.h"
#include "../controller/test_controller.h"

using namespace std;

string* splitString(string temp);
Movie* sortByGenre(Movie* list, int length);
void test_functions();

#endif //LMDB_UTIL_H
