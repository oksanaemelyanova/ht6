#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <iostream>

class Figure {
protected:
    std::string name = "Figure";
    int sides_count = 0;

public:
    Figure();
    virtual ~Figure();

    virtual bool goodOne() const;

    virtual void printInfo() const;
};

#endif