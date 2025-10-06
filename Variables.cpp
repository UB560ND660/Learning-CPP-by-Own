#include <iostream>

int main() {

    // integer (Whole number)
    int age = 21;
    int year = 2024;
    int days = 7.5;


    // Double (Number including Decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1; 
    
    // Char (Single character)
    char grade = 'A';
    char initial = 'B';

    // Boolean(true or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    // String (Object that represents a squence of text)
    std::string name = "Joy";
    std::string day = "Sunday";
    std::string food = "pizza";
    std::string adress = "Ishow Speed Burger King";


    // displaying 
    std::cout << days << std::endl;
    std::cout << price << std::endl;
    std::cout << initial << std::endl;
    std::cout << name << std::endl;
    std::cout << "Hello " << name << " go to this adress -> " << adress << "<- to get free burgers " << std::endl;

    return 0;
}