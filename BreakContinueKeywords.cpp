#include <iostream>

int main () {

    for(int i = 0; i < 10; i++) {
        
        if(i == 7){
            // break;
            continue;
        }
        std::cout << i <<std::endl;
    }

    return 0;
}