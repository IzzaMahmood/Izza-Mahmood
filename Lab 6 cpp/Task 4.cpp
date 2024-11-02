#include<iostream>
using namespace std;
int main()
{
	int choice;
	do{
		cout << "/nMenu:"<<endl;
        cout << "1. Print Hello"<<endl; 
        cout << "2. Print World"<<endl; 
        cout << "3. Exit"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
    	case 1:
    		cout<<"Hello";
    		break;
    		case 2:
    			cout<<"World";
    			break;
    			case 3:
    				cout<<"Exit";
    				break;
    				default:
    					cout<<"INVALID CHOICE ";
	}}
	while(choice!=3);	
}
