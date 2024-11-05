#include "Triangle.hpp"

 Triangle::Triangle(int a, int b, int c, int A, int B, int C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
        name = "Triangle";
        sides_count = 3;
    }

    bool Triangle::goodOne() const {
        return (A + B + C == 180);
    }

    void Triangle::printInfo() const {
        Figure::printInfo();
        std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Angles: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    Triangle::~Triangle() {}