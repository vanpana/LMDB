#include "repository.h"
#include "../common/util.h"
#include "../domain/validator.h"
#include <fstream>

using namespace std;

// REPO //
MemoryRepository::MemoryRepository()
{   this->items = vector<Movie>();
    this->validator_class = Validator();
}

MemoryRepository& MemoryRepository::operator=(const MemoryRepository &other)
{
    if (this == &other) return *this;

    this->items = other.items;

    return *this;
}

void MemoryRepository::add(const Movie& mov)
{
    validator_class.validate_movie(mov);
    this->items.push_back(mov);

}

int MemoryRepository::del(const string& name)
{
    int pos = getPosition(name);

    if (pos == -1)
        return 0;
    this->items.erase(this->items.begin() + pos);
    return 1;
}

int MemoryRepository::update(const Movie& mov)
{
    int pos = getPosition(mov.getTitle());
    if (pos == -1)
        return 0;

    this->items[pos] = mov;
    return 1;
}

int MemoryRepository::getPosition(const string& name)
{
    int counter = 0;
    for (Movie mov: items)
    {
        if (mov.getTitle() == name)
            return counter;
        counter++;
    }
    return -1;
}

// FILE REPO //
void FileRepository::loadFromFile()
{
    ifstream f(this->filename);
    string temp;
    string* args;

    while(!f.eof())
    {
        getline(f, temp);
        if (f.eof()) break;

        args = splitString(temp);
        add(Movie{args[0], args[1], stoi(args[2]), stoi(args[3]), args[4]});

    }
    f.close();
}

void FileRepository::saveToFile()
{
    ofstream f(this->filename);

    for (Movie i: items)
        f << i << "\n";

    f.close();
}

FileRepository::FileRepository(const FileRepository &other) : MemoryRepository(other)
{
    this->filename = other.filename;
}

FileRepository& FileRepository::operator=(const FileRepository& other)
{
    if (this == &other) return *this;

    MemoryRepository::operator=(other);
    this->filename = other.filename;

    return *this;
}