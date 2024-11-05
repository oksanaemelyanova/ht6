#include "Figure.hpp"

Figure::Figure(){}

Figure::~Figure(){}

bool Figure::goodOne() const {
        return sides_count == 0;
}

void Figure::printInfo() const {
        std::cout << name << ":\n";
        std::cout << (goodOne() ? "Correct\n" : "Wrong\n");
        std::cout << "Number of sides: " << sides_count << std::endl;
}