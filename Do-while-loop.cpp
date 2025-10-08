#include <iostream>

int main () {

    int number;
    
    std::cout << "Enter a number : ";
    std::cin >> number;

    do {
        std::cout << "Enter a positive number : ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "This # is : " << number; 

    return 0;
}