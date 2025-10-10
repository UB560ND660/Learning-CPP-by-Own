#include <iostream>

// double square (double length); 

std::string concatStrings(std::string s1, std::string s2) {
    return s1 + " " + s2;
}

int main () {

    // double length = 5.0;
    // double area = square(length);
    // double volume = cube (length);
    // std::cout << "Area = " << area << "cm^2\n";
    // std::cout << "Volume = " << volume << "cm^3\n";

    std::string firstName = "Bro";
    std::string lastName = "Code";
    std::string finalString = concatStrings(firstName,lastName);

    std::cout << "Hello " << finalString;

    return 0;
}

// double square (double length) {
//     return length * length;
// }

// double cube (double length) {
//     return length * length * length;
// }