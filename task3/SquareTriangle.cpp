#include "SquareTriangle.hpp"


    SquareTriangle::SquareTriangle(int a, int b, int c, int A, int B)
        : Triangle(a, b, c, A, B, 90) {
        name = "Square Triangle";
    }

    bool SquareTriangle::goodOne() const {
        return (Triangle::goodOne() && C == 90);
    }
    SquareTriangle::~SquareTriangle() {}