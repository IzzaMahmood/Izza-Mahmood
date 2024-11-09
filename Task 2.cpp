#include<iostream>
using namespace std;
int main() {
    int n= 0;
    int m= 5;

    for (int i = n; i <= m; i++) {
        for (int j = 0; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        
        cout << endl; 
    }

    return 0;
}
