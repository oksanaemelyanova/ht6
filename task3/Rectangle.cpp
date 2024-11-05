#include "Rectangle.hpp"


    Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, a, b, 90, 90, 90, 90) {
        name = "Rectangle";
    }

    bool Rectangle::goodOne() const {
        return (Quadrilateral::goodOne() && a == c && b == d && A == 90);
    }

    Rectangle::~Rectangle() {}
