#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age.\n";
    } else if (age <= 12) {
        cout << "Child.\n";
    } else if (age >= 13 && age <= 19) {
        if (age == 13)
            cout << "Just a Teen.\n";
        else
            cout << "Teenager.\n";
    } else if (age >= 20 && age <= 60) {
        cout << "Adult.\n";
    } else {
        cout << "Senior Citizen.\n";
    }
    return 0;
}

