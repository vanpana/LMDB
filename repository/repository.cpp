#include "repository.h"
#include "../common/util.h"
#include "../domain/validator.h"
#include <fstream>

using namespace std;

// REPO //
Repository::Repository()
{
    this->items = vector<Movie>();
    this->validator_class = Validator();
}


Repository::Repository(const Repository &other)
{
    this->items = other.items;
}

Repository& Repository::operator=(Repository &other)
{
    if (this == &other)
        return *this;

    this->items = other.items;

    return *this;
}

void Repository::add(Movie mov)
{
    try
    {
        validator_class.validate_movie(mov);
        this->items.push_back(mov);
    }
    catch(string err)
    {
        cout << err << endl;
        throw err;
    }
}

int Repository::del(string name)
{
    int pos = getPosition(name);

    if (pos == -1)
        return 0;
    this->items.erase(this->items.begin() + pos);
    return 1;
}

int Repository::update(Movie mov)
{
    int pos = getPosition(mov.getTitle());
    if (pos == -1)
        return 0;

    this->items[pos] = mov;
    return 1;
}

int Repository::getPosition(string name)
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

void FileRepository::saveToFile(string type)
{
    if (type == "csv")
    {
        ofstream f(this->filename);

        for (Movie i: items)
        {
            cout << i <<"\n";
            f << i << "\n";
        }

        f.close();
    }
    if (type == "html")
    {
        cout << "Not now";
    }
}

FileRepository::FileRepository(const FileRepository &other) : Repository(other)
{
    this->filename = other.filename;
}

FileRepository& FileRepository::operator=(FileRepository& other)
{
    if (this == &other)
        return *this;

    Repository::operator=(other);
    this->filename = other.filename;

    return *this;
}