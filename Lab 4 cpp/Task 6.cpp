#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your exam score (0-100): ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A\n";
    } else if (score >= 80) {
        if (score >= 85)
            cout << "Grade: B+\n";
        else
            cout << "Grade: B\n";
    } else if (score >= 70) {
        if (score >= 75)
            cout << "Grade: C+\n";
        else
            cout << "Grade: C\n";
    } else if (score >= 60) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: F\n";
    }
    return 0;
}

