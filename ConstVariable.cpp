#include<iostream>

int main() {
    // The const keyword make sures that variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read only)

    const double pi = 3.1416;
    // pi = 420.69; 
    // now this "pi" won't be change
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << " cm" << std::endl;
}