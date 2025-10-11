#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance)
{
    cout << "Your Current Balance is : " << setprecision(2) << fixed << balance << "$" << endl;
}

double deposite()
{
    double amount;
    cout << "Enter Amount to be Desposited : ";
    cin >> amount;

    return amount;
}

double withdrawl(double balance)
{
    double amount = 0;
    cin >> amount;

    return amount;
}

int main()
{

    double balance = 0.00;
    int choice;

    do
    {
        cout << "******************" << endl;
        cout << "Enter your choice : " << endl;
        cout << "******************" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposite Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposite();
            showBalance(balance);
            break;
        case 3:
            balance -= withdrawl(balance);
            showBalance(balance);
            
            
        case 4:
            cout << "Thanks for visiting \n";
            break;
        default:
            cout << "Invalid Choice" << endl;
        }

    } while (choice != 4);

    return 0;
}
