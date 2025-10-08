#include <iostream>
#include <cstdlib>
// for rand() and srand()
#include <ctime>
// for time()

int main()
{

    srand(time(NULL));

    int num = (rand() % 10) + 1;

    std::cout << num;

    return 0;
}