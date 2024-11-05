#ifndef PARALLELOGRAM_HPP
#define PARALLELOGRAM_HPP

#include "Quadrilateral.hpp"

class Parallelogram : public Quadrilateral
{
  public:
    Parallelogram ();
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);

    bool goodOne() const override;
    ~Parallelogram();  
};

#endif