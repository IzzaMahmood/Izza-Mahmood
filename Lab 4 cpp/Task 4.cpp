#include <iostream>
using namespace std;
int main() 
{
    char choice;
    double balance, amount, charges, newBalance;
    cout << "Enter your initial balance: Rs";
    cin >> balance;
    cout << "Menu:\n";
    cout << "D = Deposit\n";
    cout << "W = Withdraw\n";
    cout << "T = Transfer\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 'D':
        case 'd':
            cout << "Enter the amount to deposit: Rs";
            cin >> amount;
            charges = 0.005 * amount;
            newBalance = balance + amount - charges;
            break;

        case 'W':
        case 'w':
            cout << "Enter the amount to withdraw: Rs";
            cin >> amount;
            charges = 0.015 * amount;
            newBalance = balance - amount - charges;
            break;

        case 'T':
        case 't':
            cout << "Enter the amount to transfer: Rs";
            cin >> amount;
            charges = 0.025 * amount;
            newBalance = balance - amount - charges;
            break;

        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

   
    cout << "Charges: Rs" << charges << endl;
    cout << "New Balance: Rs" << newBalance << endl;

    return 0;
}


