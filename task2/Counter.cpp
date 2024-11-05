#include "Counter.hpp"

    Counter::Counter() {
      count = 1;
    }

    Counter::Counter(int i) {
      initialize(i);
      execute();
    }

    void Counter::initialize(int i){       
      count = i;
    }

    void Counter::execute()
    {
      std::string cmd;
      
      do
      {
        std::cout << "enter a command ('+', '-', '=' or 'q') " << std::endl;
        std::cin >> cmd;
        if (cmd == "+")
          increase();
        else if (cmd == "-")
          decrease();
        else if (cmd == "=")
          std::cout << "current value is: " << current_value() << std::endl;
        else
          std::cout << "invalid command" << std::endl;
      } while (cmd !="q");
      std::cout << "good bye" << std::endl;
      return ;
    }

    void Counter::increase ()
    {
      count++;
    }
    void Counter::decrease()
    {
      count--;
    }

    int Counter::current_value()
    {
      return(count);
    }