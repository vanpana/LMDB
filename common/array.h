#ifndef ARRAY_H
#define ARRAY_H

#include <string>


using namespace std;


template <class T>
class DynArr{
    T* array;
    int capacity;
    int length;

public:
    //default constructor
    DynArr();

    //constructor with parameters
    DynArr(int cap);

    //copy constructor
    DynArr(const DynArr<T>& other);

    //assignment operator
    DynArr& operator=(const DynArr<T>& other);

    /*
     Function to get position of a given element.
     Input: name - string: name of the element.
     Output: pos - int: position in the array of the element.
     */
    int getPosition(string name);

    /*
     Function to add an element to the array. If element already exists, it updates.
     Input: T - an element
     Output: a new list with added element
     */
    void push(T obj);

    /*
     Function to delete an element in the array by name.
     Input: name - string: name of the element.
     Output: 1 if element successfully deleted, 0 if element does not exist
     */
    int pop(string name);

    /*
     Function to return the array of the elements.
     Output: The list of elements of type T.
     */
    T* getItems();

    /*
     Function to return the length of the array
     Output: len - int: the length of the array
     */
    int getLength();

    DynArr<T>* operator+(const T v);

    /*
     Function to double the capacity of the array;
     */
    void resize();

    //destructor
    ~DynArr();
};

#endif