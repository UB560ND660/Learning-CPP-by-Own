#include <iostream>

int main()
{

    char op;
    double num1;
    double num2;
    double num3;
    int result;
    std::cout << "*************CALCULATOR**************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter num 1: ";
    std::cin >> num1;

    std::cout << "Enter num 2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "= " << result;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "= " << result;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "= " << result;
        break;
    case '/':
        result = num1 / num2;
        std::cout << "= " << result;
    default:
        std::cout << "Enter a Valid Operator (+ - * /)";
        break;
    }
}