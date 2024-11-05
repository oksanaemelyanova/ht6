#include "IsoscelesTriangle.hpp"


    IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C)
        : Triangle(a, b, c, A, B, C) {
        name = "Isosceles Triangle";
    }

    bool IsoscelesTriangle::goodOne() const {
        return (Triangle::goodOne() && a == c && A == C);
    }

    IsoscelesTriangle::~IsoscelesTriangle() {};
