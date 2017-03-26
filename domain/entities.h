#pragma once
#include <string>
using namespace std;

class Movie
{
private:
    string title;
    string genre;
    int year;
    int likes;
    string trailer;

public:
    //default constructor
    Movie();

    //constructor with parameters
    Movie(string title, string genre, int year, int likes, string trailer);

    //copy constructor
    Movie(const Movie& mov);

    //destructor
    ~Movie();

    //getters
    string getTitle() { return this->title; }
    string getGenre() { return this->genre; }
    int getYear() { return this->year; }
    int getLikes() { return this->likes; }
    string getTrailer() { return this->trailer; }
};
