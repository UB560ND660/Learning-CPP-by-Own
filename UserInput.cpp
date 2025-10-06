#include <iostream>

int main()
{

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "what's your age? : ";
    std::cin >> age;
    
    // ws => white space, after input in integer it leaves a blank space which directed into next string input, then it skips the string variable input
    std::cout << "what's your full name? : ";
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello" << name << "\n";
    std::cout << "You are " << age << " years old " << std::endl;


    return 0;
}