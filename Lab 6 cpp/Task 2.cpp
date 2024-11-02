#include<iostream>
using namespace std;
int main()
{
	const string Password="Izza";
	const int maxattempt=3;
	int attempt=0;
	string password;
	do{
		cout<<"Enter password"<<endl;
		cin>>password;
		attempt++;     
		if(password=="Izza") 
		cout<<"Correct Password"<<endl;
		else
        cout<<"Incorrect Password"<<endl;
}
while(password!=Password&&attempt<maxattempt);
if(attempt==maxattempt)
cout<<"Your have reached maximum try limit";
}
