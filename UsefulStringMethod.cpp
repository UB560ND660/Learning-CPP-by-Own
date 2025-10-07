#include <iostream>


int main() {

    std::string name; 

    std::cout << "Enter Your Name : " ;
    std::getline(std::cin, name);

    // if(name.length() > 12){
    //     std::cout << "Your Name can't be exceed 12 Letters";
    // } else {
    //     std:: cout << "Welcome";
    // }
    // name.append("223@gmail.com");
    
    name.insert(2,"@");
    std::cout << "Your username is now " << name;
    

    return 0;
}