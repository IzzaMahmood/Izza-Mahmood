#include <iostream>
using namespace std;
int main() 
{
    int number;
    cout << "Enter a number to count down from: ";
    cin >> number;

    while (number >= 1) {
        cout << number << endl;
        number--;  
    }

    cout << "Countdown finished!" << endl;

    return 0;
}

