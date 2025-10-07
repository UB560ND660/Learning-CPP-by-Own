#include <iostream>

int main()
{
    char Grade;
    std::cout << "Grade ? : ";
    std::cin >> Grade;
    switch (Grade)
    {
    case 'A':
    case 'a':
        std::cout << "Excellent! You got an A." << std::endl;
        break;
    case 'B':
    case 'b':
        std::cout << "Great job! You got a B." << std::endl;
        break;
    case 'C':
    case 'c':
        std::cout << "Good effort! You got a C." << std::endl;
        break;
    case 'D':
    case 'd':
        std::cout << "You passed with a D." << std::endl;
        break;
    case 'E':
    case 'e':
        std::cout << "You barely made it with an E." << std::endl;
        break;
    case 'F':
    case 'f':
        std::cout << "Sorry, you failed." << std::endl;
        break;
    default:
        std::cout << "Invalid grade entered!" << std::endl;
        break;
    }
}