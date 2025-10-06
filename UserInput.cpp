#include <iostream>

int main()
{

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "what's your full name? : ";
    std::getline(std::cin, name);

    std::cout << "what's your age? : ";
    std::cin >> age;

    std::cout << "Hello" << name << "\n";
    std::cout << "You are " << age << " years old " << std::endl;


    return 0;
}