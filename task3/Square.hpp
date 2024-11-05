#ifndef SQUARE_HPP 
#define SQUARE_HPP

#include "Parallelogram.hpp"

class Square : public Parallelogram {
public:
    Square(int side);

    bool goodOne() const override;
    ~Square();
};

#endif