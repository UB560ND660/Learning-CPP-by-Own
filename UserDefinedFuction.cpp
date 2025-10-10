#include <iostream>

void HappyBirthday(std::string name, int age);

int main () {
    int age = 21;
    std::string name = "Bro";
    HappyBirthday(name,age);

    return 0;
}   

void HappyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old\n";
}