#include <iostream>
using namespace std;

int main() {
    int rows = 10;  
    int b = 10;  
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= b; j++) {
            cout << "*";
        }
        cout << endl;  
    }

    return 0;
}
