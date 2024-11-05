#ifndef QUADRILATERAL_HPP
#define QUADRILATERAL_HPP

#include "Figure.hpp"

class Quadrilateral : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrilateral();
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);

    bool goodOne() const override;

    void printInfo() const override;
    ~Quadrilateral();
};

#endif