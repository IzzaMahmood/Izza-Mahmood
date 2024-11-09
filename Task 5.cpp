#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    for (int s = number; s > 0; s /= 10) {
        int digit = s% 10;  

        
        for (int j = 1; j <= 1; j++) {
            sum += digit;  
        }
    }

    cout <<sum << endl;

    return 0;
}
