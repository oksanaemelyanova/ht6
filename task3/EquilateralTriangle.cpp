#include "EquilateralTriangle.hpp"

EquilateralTriangle::EquilateralTriangle(int side) : Triangle(side, side, side, 60, 60, 60) {
    name = "Equilateral Triangle";
}

bool EquilateralTriangle::goodOne() const {
    return (Triangle::goodOne() && a == b && b == c && A == 60 && B == 60 && C == 60);
}

EquilateralTriangle::~EquilateralTriangle() {}
