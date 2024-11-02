#include<iostream>
using namespace std;
int main()
{
	int num=32;
	int guess;
	int attempt=0;
	do{
		cout<<"Enter a number"<<endl;
		cin>>guess;
		attempt++;
		if(guess>num)
		cout<<"You have gussed a higher the number"<<endl;
		else if(guess<num)
		cout<<"You have gussed a lower number"<<endl;
		else
        cout<<"Congragulations! You have guessed the right number";
	}
        while(guess!=num);
}
