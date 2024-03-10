#include "math.hpp"

void add(int a, int b)
{
    int result = a + b;
    std::cout << "num1 + num2 = " << result << std::endl;
}

void subs(int a, int b)
{
    int result = a - b;
    std::cout << "num1 - num2 = " << result << std::endl;
}

void mult(int a, int b)
{
    int result = a * b;
    std::cout << "num1 * num2 = " << result << std::endl;
}

void division(int a, int b)
{
    int result = a / b;
    std::cout << "num1 / num2 = " << result << std::endl;
}

void to_power(int a, int b)
{
    int result = a ^ b;
    std::cout << "num1 to the power of num2 = " << result << std::endl;
}