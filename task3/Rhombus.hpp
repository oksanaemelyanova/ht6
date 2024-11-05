#ifndef RHOMBUS_HPP 
#define RHOMBUS_HPP

#include "Parallelogram.hpp"

class Rhombus : public Parallelogram {
public:
    Rhombus(int side, int A, int B);

    bool goodOne() const override;

    ~Rhombus();
};

#endif