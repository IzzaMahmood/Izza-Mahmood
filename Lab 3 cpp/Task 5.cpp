#include <iostream>
using namespace std;
int main() 
{
    int  marks1, marks2, marks3, average;
    char grade;
    cout << "Enter marks for Subject 1: ";
    cin >> marks1;
    cout << "Enter marks for Subject 2: ";
    cin >> marks2;
    cout << "Enter marks for Subject 3: ";
    cin >> marks3;
    average = (marks1 + marks2 + marks3) / 3;
	 if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
     cout << "\nAverage Marks: " << average ;
	 return 0;
}
     
     
     
     
     
     
     

