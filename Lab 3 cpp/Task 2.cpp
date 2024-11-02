#include <iostream>
using namespace std;
int main() 
{
    double temp, fahrenheit;
    cout<<"Enter temperature in Celsius: ";
    cin>>temp;
    fahrenheit = (temp * 9.0 / 5.0) + 32;
    cout << "temperature in Fahrenheit: " << fahrenheit<< endl;
	return 0;
}

