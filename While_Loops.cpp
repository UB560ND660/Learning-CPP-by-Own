#include <iostream>

int main() {

    std::string name;

    while(name.empty()){
        std::cout << "Enter Your Name : " ;
        std::getline(std::cin, name);
    }

    std::cout << "Name : " << name;

    return 0;
}