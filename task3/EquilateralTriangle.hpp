#ifndef EQUILATERALTRIANGLE_HPP
#define EQUILATERALTRIANGLE_HPP

#include "Triangle.hpp"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side);
    ~EquilateralTriangle();

    bool goodOne() const override;    
};

#endif
