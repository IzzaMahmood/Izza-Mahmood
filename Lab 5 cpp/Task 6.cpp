#include <iostream>
using namespace std;
int main() 
{
    float balance, withdrawal;

    cout << "Enter your initial balance: Rs";
    cin >> balance;

    while (true) {
        cout << "Enter amount to withdraw (or 0 to exit): Rs";
        cin >> withdrawal;

        if (withdrawal == 0) {
            break;
        }

        if (withdrawal > balance) {
            cout << "Insufficient balance. Your current balance is Rs" << balance << endl;
        } else {
            balance -= withdrawal;
            cout << "Withdrawal successful! New balance: Rs" << balance << endl;
        }
    }

    cout << "Thank you for using our ATM. Your final balance is Rs" << balance << endl;

    return 0;
}

