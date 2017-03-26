#include "entities.h"
#include <iostream>
#include <string>
using namespace std;

Movie::Movie()
{
    this->title = "";
    this->genre = "";
    this->year = 2017;
    this->likes = 0;
    this->trailer = "";
}

Movie::Movie(string title, string genre, int year, int likes, string trailer)
{
    this->title = new string[title.size()];
    this->title = title;

    this->genre = new string[genre.size()];
    this->genre = genre;

    this->year = year;
    this->likes = likes;

    this->trailer = new string[trailer.size()];
    this->trailer = trailer;
}

Movie::Movie(const Movie& mov)
{
    this->title = mov.title;

    this->genre = mov.genre;

    this->year = mov.year;
    this->likes = mov.likes;

    this->trailer = mov.trailer;
}

Movie::~Movie()
{
    delete[] this->title;
    delete[] this->genre;
    delete[] this->trailer;
}
