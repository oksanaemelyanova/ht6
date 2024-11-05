#include "Figure.hpp"
#include "Triangle.hpp"
#include "SquareTriangle.hpp"
#include "IsoscelesTriangle.hpp"
#include "EquilateralTriangle.hpp"
#include "Quadrilateral.hpp"
#include "Parallelogram.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Rhombus.hpp"

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

    Figure* r1 = new Rectangle(99, 77);
    r1->printInfo();

    Figure* sq = new Square(87);
    sq->printInfo();

    Figure* rm = new Rhombus(66, 100, 80);
    rm->printInfo();

    delete f1;
    delete tr1;
    delete st1, it1, eq1, qq1, p, r1, sq, rm;

    return 0;
}