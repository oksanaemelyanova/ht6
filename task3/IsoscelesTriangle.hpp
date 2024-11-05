#ifndef ISOSCELESTRIANGLE_HPP
#define ISOSCELESTRIANGLE_HPP

#include "Triangle.hpp"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int c, int A, int B, int C);
    ~IsoscelesTriangle();

    bool goodOne() const override;    
};

#endif