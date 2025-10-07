#include <iostream>

int main() {

    int age; 

    std::cout << "Enter your age : "<<std::endl;
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Welcome to this site" << std::endl;
    } else if (age < 0) {
        std::cout << "You haven't been born yet" << std::endl;
    } else if (age >= 100) {
        std::cout << "You're too old for this site" << std::endl;
    } else {
        std::cout << "You're not old enough for this site " << std::endl;
    }

    return 0;
}