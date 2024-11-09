#include <iostream>
using namespace std;

int main() {
    int number, factorial = 1;

   
    cout << "Enter a positive integer: ";
    cin >> number;

       for (int i = 1; i <= number; i++) {
        int n = 1; 
        for (int j = 1; j <= i; j++) {
            n*= j;
        }
        
        factorial =n; 
    }

    cout<< factorial << endl;

    return 0;
}
