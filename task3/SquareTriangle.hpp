#ifndef SQUARETRIANGLE_HPP
#define SQUARETRIANGLE_HPP

#include "Triangle.hpp"

class SquareTriangle : public Triangle {
public:
    SquareTriangle(int a, int b, int c, int A, int B);
    ~SquareTriangle();

    bool goodOne() const override;    
};

#endif