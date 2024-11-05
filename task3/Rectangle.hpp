#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Parallelogram.hpp"

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b);

    bool goodOne() const override;
    ~Rectangle();
};

#endif