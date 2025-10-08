#include <iostream>
#include <ctime>
int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    std::cout << "******* Number Guessing Game *********\n";

    do
    {
        std::cout << "Enter a guess between (1 - 10): ";
        std::cin >> guess;

        if (guess > 10)
        {
            std::cout << "Please Enter between (1-10)!!\n\n";
            std::cout << "******* Number Guessing Game *********\n";
            continue;
        } else if (guess == 0) {
            break;
        }

        tries++;

        if (guess > num)
        {
            std::cout << "Too high! \n";
        }
        else if (guess < num)
        {
            std::cout << "Too Low! \n";
        }
        else
        {
            std::cout << "Correct! # of tries: " << tries << '\n';
        }
        std::cout << "Press 0 for exit the game\n\n";
    } while (guess != num);

    std::cout << "*********************************\n";

    return 0;
}