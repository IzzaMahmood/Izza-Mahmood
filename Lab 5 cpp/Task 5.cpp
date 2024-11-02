#include <iostream>
using namespace std;

int main() {
    float temperature, sum = 0.0;

    cout << "Enter the temperatures for the past 7 days:\n";

    for (int i = 1; i <= 7; i++) {
        cout << "Day " << i << ": ";
        cin >> temperature;
        sum += temperature;
    }

    float average = sum / 7;
    cout << "The average temperature for the week is: " << average;

    return 0;
}


