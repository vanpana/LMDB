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
    Movie(const string& title, const string& genre, const int& year, const int& likes, const string& trailer);

    //copy constructor
    Movie(const Movie& mov);

    //destructor
    ~Movie();

    //getters
    /*
     Title getter.
     Input: none
     Return: title - String
     */
    string getTitle() const { return this->title; }

    /*
     Genre getter.
     Input: none
     Return: genre - String
     */
    string getGenre() const { return this->genre; }

    /*
     Year getter.
     Input: none
     Return: year - int
     */
    int getYear() const { return this->year; }

    /*
     Likes getter.
     Input: none
     Return: likes - int
     */
    int getLikes() const { return this->likes; }

    /*
     Trailer getter.
     Input: none
     Return: trailer - String
     */
    string getTrailer() const { return this->trailer; }

    /*
     << operator overload
     Input: none
     Return: entity in csv style for file output.
     */
    friend ostream& operator<<(ostream& os, const Movie& mov)
    {
        os << mov.getTitle()<< "," << mov.getGenre() << "," << mov.getYear()
              << "," << mov.getLikes() << "," << mov.getTrailer();
        return os; }

    /*
     Function that prints the content of the movie to the screen.
     */
    void str() {cout << "Title: " << this->getTitle() << ", Genre: " << this->getGenre() << ", Year: " << this->getYear()
                     << ", No. of likes: " << this->getLikes() << ", Trailer link: " << this->getTrailer() << "\n"; }

    /*
     Function that increments the likes for the movie.
     */
    void incLikes() { this->likes++; }
};
