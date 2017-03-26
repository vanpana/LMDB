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
    DynArr();
    DynArr(int cap);
    int getPosition(string name);
    void push(T obj);
    int pop(string name);
    T* getItems();
    int getLength();
    ~DynArr();
};

#endif