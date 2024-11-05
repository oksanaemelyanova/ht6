#include "Figure.hpp"
#include "Triangle.hpp"
#include "SquareTriangle.hpp"
#include "IsoscelesTriangle.hpp"
#include "EquilateralTriangle.hpp"
#include "Quadrilateral.hpp"
#include "Parallelogram.hpp"

int main(void) {
    Figure* f1 = new Figure();
    f1->printInfo();

    Figure* tr1 = new Triangle(4, 6, 3, 60, 100, 20);
    tr1->printInfo();

    Figure* st1 = new SquareTriangle(4, 6, 3, 45, 45);
    st1->printInfo();

    Figure* it1 = new IsoscelesTriangle(4, 6, 3, 56, 56, 98);
    it1->printInfo();

    Figure* eq1 = new EquilateralTriangle(89);
    eq1->printInfo();

    Figure* qq1 = new Quadrilateral(2, 5, 6, 9, 45, 67, 34, 67);
    qq1->printInfo();

    Figure* p = new Parallelogram(5, 6, 5, 6, 100, 80, 100, 80);
    p->printInfo();

    delete f1;
    delete tr1;
    delete st1, it1, eq1, qq1, p;

    return 0;
}