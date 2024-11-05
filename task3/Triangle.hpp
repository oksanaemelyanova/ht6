#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Figure.hpp"

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;

public:
    Triangle(int a, int b, int c, int A, int B, int C);
    ~Triangle();

    bool goodOne() const override;

    void printInfo() const override;   
};

#endif