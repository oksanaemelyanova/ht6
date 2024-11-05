#include "Counter.hpp"
#include <iostream>

int main() {
  Counter* c = nullptr;
  int i;
  std::string answer;
  
  std::cout << "would you like to enter the initial value? (enter y / n): " << std::endl;
  std::cin >> answer;
  if (answer == "y")
  {
    std::cout << "enter the initial value: " << std::endl;
    std::cin >> i;
    c = new Counter(i);
  }
  else{
    c = new Counter();
  }

  c->execute();

  delete c;

  return (0);
}