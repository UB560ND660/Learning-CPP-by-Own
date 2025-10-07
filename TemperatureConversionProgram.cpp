#include <iostream>

using namespace std;

int main()
{
    double temp;
    char unit;
    std::cout << "**************Temperature Converter**************\n";
    std::cout << "F - Farenheit\n";
    std::cout << "C - Celcius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the Temperature in Celcius : ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is : " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the Temperature in Farenheit : ";
        std::cin >> temp;

        temp = (1.8 * temp) / 32.0;
        std::cout << "Temperature is : " << temp << "C\n";
    }
    else
    {
        std::cout << "Please Enter within C or, F";
    }

    return 0;
}