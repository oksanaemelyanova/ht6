#include "Quadrilateral.hpp"

    Quadrilateral::Quadrilateral(){}
    Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
        name = "Quadrilateral";
        sides_count = 4;
    }

    bool Quadrilateral::goodOne() const {
        return (A + B + C + D == 360);
    }

    void Quadrilateral::printInfo() const {
        Figure::printInfo();
        std::cout << "Sides: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Angles: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }

    Quadrilateral::~Quadrilateral(){}