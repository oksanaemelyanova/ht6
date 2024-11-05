#include "Rhombus.hpp"

Rhombus::Rhombus(int side, int A, int B) : Parallelogram(side, side, side, side, A, B, A, B) {
        name = "Rhombus";
    }

    bool Rhombus::goodOne() const {
        return (Parallelogram::goodOne() && a == b && A == C && B == D);
    }

    Rhombus::~Rhombus() {}