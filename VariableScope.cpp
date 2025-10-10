#include <iostream>
void Print();
int myNum = 3;
int main()
{
    Print();
    return 0;
}

void Print()
{
    std::cout << "my num : " << myNum;
}