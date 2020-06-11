//
// Created by robin on 11.06.20.
//

#ifndef GEN_CPP_REFACTORING_MOVIESTATE_HPP
#define GEN_CPP_REFACTORING_MOVIESTATE_HPP

#include "Rental.h"

class MovieState {
public:
    virtual double getPrice(int daysRented) = 0;
};

#endif //GEN_CPP_REFACTORING_MOVIESTATE_HPP
