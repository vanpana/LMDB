#pragma once
#include <string>
#include <iostream>
#include "../common/counter.h"

using namespace std;

class Movie : private Counter<Movie>
{
private:
    string title;
    string genre;
    int year;
    int likes;
    string trailer;

public:
    using Counter<Movie>::GetTotal;
    using Counter<Movie>::GetAlive;
    //default constructor
    Movie();

    //constructor with parameters
    //TODO const string&
    Movie(string title, string genre, int year, int likes, string trailer);

    //copy constructor
    Movie(const Movie& mov);

    //destructor
    ~Movie();

    //getters
    string getTitle() const { return this->title; }
    string getGenre() const { return this->genre; }
    int getYear() const { return this->year; }
    int getLikes() const { return this->likes; }
    string getTrailer() const { return this->trailer; }

    friend ostream& operator<<(ostream& os, const Movie& mov)
    {
        os << mov.getTitle()<< "," << mov.getGenre() << "," << mov.getYear()
              << "," << mov.getLikes() << "," << mov.getTrailer();
        return os;
    }

    void str() {cout << "Title: " << this->getTitle() << ", Genre: " << this->getGenre() << ", Year: " << this->getYear()
                     << ", No. of likes: " << this->getLikes() << ", Trailer link: " << this->getTrailer() << "\n"; }

    //TODO Overload operators
    void incLikes() { this->likes++; }
};
