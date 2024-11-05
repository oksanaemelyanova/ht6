#include "Square.hpp"

Square::Square(int side) : Parallelogram(side, side, side, side, 90, 90, 90, 90) {
        name = "Square";
    }

    bool Square::goodOne() const {
        return (Parallelogram::goodOne());
    }
    Square::~Square() {}