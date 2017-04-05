#include "counter.h"
#include "../domain/entities.h"

template class Counter<Movie>;

template<class T>
int Counter<T>::alive = 0;

template<class T>
int Counter<T>::total = 0;