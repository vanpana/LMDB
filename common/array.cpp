#include "../common/array.h"
#include "../domain/entities.h"

using namespace std;

//default constructor
template <class T>
DynArr<T>::DynArr()
{
    this->capacity = 10;
    this->length = 0;
    this->array = new T[this->capacity];
}

//constructor with parameters
template <class T>
DynArr<T>::DynArr(int cap)
{
    this->capacity = cap;
    this->length = 0;
    this->array = new T[this->capacity];
}

template <class T>
DynArr<T>::DynArr(const DynArr<T>& other)
{
    this->length = other.length;
    this->capacity = other.capacity;

    this->array = new T[this->capacity];
    for (int i = 0; i < this->length; i++)
        this->array[i] = other.array[i];
}

template <class T>
DynArr<T> &DynArr<T>::operator=(const DynArr<T> &other)
{
    if (this == &other)
        return *this;

    this->length = other.length;
    this->capacity = other.capacity;

    delete[] this->array;
    this->array = new T[this->capacity];
    for (int i = 0; i < this->length; i++)
        this->array[i] = other.array[i];

    return *this;
}

template <class T>
int DynArr<T>::getPosition(string title)
{
    for (int i = 0; i < this->length; i++)
        if (this->array[i].getTitle() == title)
            return i;
    return -1;
}

template <class T>
void DynArr<T>::push(T obj)
{
    int i = getPosition(obj.getTitle());
    if (i != -1)
    {
        this->array[i] = obj;
    }
    else
    {
        if (this->length == this->capacity)
            resize();

        this->array[this->length++] = obj;
    }

}

template <class T>
int DynArr<T>::pop(string name)
{
    int i = getPosition(name);
    if (i == -1)
        return 0;

    for (;i < length - 1; i++)
        this->array[i] = this->array[i+1];

    this->length--;
    return 1;
}

template <class T>
T* DynArr<T>::getItems()
{
    return this->array;
}

template <class T>
int DynArr<T>::getLength()
{
    return this->length;
}

template <typename T>
DynArr<T>* DynArr<T>::operator+(const T v)
{
    push(v);

    return this;
}

template <class T>
void DynArr<T>::resize()
{
    this->capacity *= 2;
    array = new T[this->capacity];

    for (int i = 0; i < this->length; i++)
        array[i] = this->array[i];

    delete[]this->array;
    *this->array = *array;
}

//destructor
template <class T>
DynArr<T>::~DynArr()
{
    delete[] this->array;
}

template class DynArr<Movie>;