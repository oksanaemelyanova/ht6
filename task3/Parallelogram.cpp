#include "Parallelogram.hpp"


    Parallelogram::Parallelogram () {}

    Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) 
    : Quadrilateral(a, b, c, d, A, B, C, D) {
      name = "Parallelogram";    
    }

    bool Parallelogram::goodOne() const {
      return(Quadrilateral::goodOne() && a == c && b == d && A == C && B == D);
    }    

    Parallelogram::~Parallelogram() {} 
