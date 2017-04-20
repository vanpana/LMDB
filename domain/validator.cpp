//
// Created by Panaite Dorinel on 17/04/2017.
//

#include <regex>
#include "validator.h"

void Validator::validate_movie(const Movie &mov)
{
    if (mov.getTitle().size() == 0)
        throw "Length can't be zero.";

    if (mov.getGenre().size() == 0)
        throw "Length can't be zero.";

    if (mov.getYear() < 1900)
        throw "Year must be greater than 1900!";

    if (mov.getLikes() < 0)
        throw "Likes can't be negative!";

    if (!regex_match(mov.getTrailer(), regex("http://w\{3\}\..*\..*")) && !regex_match(mov.getTrailer(), regex("https://w\{3\}\..*\..*")))
        throw "Link is invalid!";
}
