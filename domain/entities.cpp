#include "entities.h"

using namespace std;

Movie::Movie()
{
    this->title = "";
    this->genre = "";
    this->year = 2017;
    this->likes = 0;
    this->trailer = "";
}

Movie::Movie(const string& title, const string& genre, const int& year, const int& likes, const string& trailer)
{
    this->title = title;

    this->genre = genre;

    this->year = year;
    this->likes = likes;

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

}
