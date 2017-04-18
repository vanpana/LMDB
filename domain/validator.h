//
// Created by Panaite Dorinel on 17/04/2017.
//

#ifndef LMDB_VALIDATOR_H
#define LMDB_VALIDATOR_H

#include <exception>
#include <iostream>
#include "entities.h"

using namespace std;


class Validator : exception
{
public:
    Validator() {}

    void validate_movie(const Movie& mov);
};


#endif //LMDB_VALIDATOR_H
