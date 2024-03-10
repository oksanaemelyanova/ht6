#include "math.hpp"

int main ()
{
    int num1;
    int num2;
    int cmd;

    std::cout << "enter first number: " << std::endl;
    std::cin >> num1;

    std::cout << "enter second number: " << std::endl;
    std::cin >> num2;

    if (num2 == 0)
    {
        std::cout << "error, invalid number";
    }

    std::cout << "enter command: 1 for addition, 2 for num1 - num2, 3 for multiplication, 4 for num1/num2, 5 for num1 to power num2 " << std::endl;
    std::cin >> cmd;

    if (cmd == 1)
        add(num1, num2);
    else if (cmd == 2)
        subs(num1, num2);
    else if (cmd == 3)
        mult(num1, num2);
    else if (cmd == 4)
        division(num1, num2);
    else if (cmd == 5)
        to_power(num1, num2);
    else
        std::cout << "command not found" << std::endl;

    return (0);
}