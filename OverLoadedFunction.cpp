#include <iostream>

void bakePizza() {
    std::cout << "Here's your pizza \n";
}
void bakePizza(std::string topping1) {
    std::cout << "Here's your "<< topping1 << " pizza \n";
}
void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here's your "<< topping1 << " and " << topping2 << " pizza \n";
}

int main () {

    bakePizza();
    bakePizza("Peperoni");
    bakePizza("Peperoni", "Mushrooms");
    return 0;
}
