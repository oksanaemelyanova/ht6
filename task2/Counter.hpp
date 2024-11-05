#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>

class Counter
{
  private:
    int count;
 
  public:
    Counter();

    Counter(int i);

    void initialize(int i);

    void execute();

    void increase ();
 
    void decrease();

    int current_value();

};

#endif