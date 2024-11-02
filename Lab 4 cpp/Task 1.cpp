#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num > 100)
            cout << "The number is large.\n";
        else
            cout << "The number is small.\n";
    } else if (num < 0) {
        if (num < 100)
            cout << "The number is very small.\n";
        else
            cout << "The number is small and negative.\n";
    } else {
        cout << "The number is zero.\n";
    }
    return 0;
}

