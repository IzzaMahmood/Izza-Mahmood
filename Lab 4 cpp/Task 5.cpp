#include <iostream>
using namespace std;
int main() 
{
    int choice;
    cout << "1. Monday\n";
    cout << "2. Tuesday\n";
    cout << "3. Wednesday\n";
    cout << "4. Thursday\n";
    cout << "5. Friday\n";
    cout << "6. Saturday\n";
    cout << "7. Sunday\n";
    cout << "8. Exit\n";
    cout << "Select an option (1-8): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Start of the workweek.\n";
            break;
        case 2:
            cout << "It's Tuesday, stay productive.\n";
            break;
        case 3:
            cout << "Midweek motivation!\n";
            break;
        case 4:
            cout << "Almost the weekend.\n";
            break;
        case 5:
            cout << "TGIF!\n";
            break;
        case 6:
            cout << "Relax, it's Saturday.\n";
            break;
        case 7:
            cout << "Enjoy your Sunday!\n";
            break;
        
        default:
            cout << "Invalid selection. Please run the program again and choose a valid option.\n";
    }

    return 0;
}


