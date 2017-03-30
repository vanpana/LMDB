#include "util.h"
#include <iostream>
#include <sstream>
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

Movie *sortByGenre(Movie *list, int length)
{
    for (int i = 0; i < length - 1; i++)
        for (int j = i + 1; j < length; j++)
            if (list[i].getGenre() > list[j].getGenre())
            {
                Movie aux = list[i];
                list[i] = list[j];
                list[j] = aux;
            }
    return list;
}

void test_functions()
{
    test_ctrl_all();
}