#include <iostream>
using namespace std;
int main()
 {
    int number, sum = 0;

    cout << "Enter numbers to sum (enter a negative number to stop): ";

    while (true) {
        cin >> number;

        if (number < 0) {
            break;
        }

        sum += number;
    }

    cout << "Total sum of non-negative numbers: " << sum << endl;

    return 0;
}

