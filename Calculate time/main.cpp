#include <iostream>

using namespace std;

char PAnswer;
float PAmount;

void Into()
{
    cout << "Welcome :)\nHere you are going to calculate time.\n";
    cout << "+ Press 1 to calculate seconds\n";
    cout << "+ Press 2 to calculate minutes\n";
    cout << "+ Press 3 to calculate hours\n";
    cout << "+ Press 4 to calculate days\n";
}

void Cal()
{
    cin >> PAnswer;
    switch (PAnswer)
    {
     case '1':
        cout << "\nEnter the amount of seconds\n";
        cin >> PAmount;
        cout << "Minutes: ";
        cout << PAmount/60;
        cout << "\nHours: ";
        cout << PAmount/3600;
        cout << "\nDays: ";
        cout << PAmount/86400;
        break;

     case '2':
        cout << "\nEnter the amount of minutes\n";
        cin >> PAmount;
        cout << "Seconds: ";
        cout << PAmount*60;
        cout << "\nHours: ";
        cout << PAmount/60;
        cout << "\nDays: ";
        cout << PAmount/1440;
        break;    

     case '3':
        cout << "\nEnter the amount of hours\n";
        cin >> PAmount;
        cout << "Seconds: ";
        cout << PAmount*3600;
        cout << "\nMinutes: ";
        cout << PAmount*60;
        cout << "\nDays: ";
        cout << PAmount/24;
        break;

     case '4':
        cout << "\nEnter the amount of days\n";
        cin >> PAmount;
        cout << "Seconds: ";
        cout << PAmount*86400;
        cout << "\nMinutes: ";
        cout << PAmount*1440;
        cout << "\nHours: ";
        cout << PAmount*24;
        break;      
    
     default:
        cout << "\nThe number " << PAnswer;
        cout << " is not used in the tool\n";
        break;
    }
    
    cin.clear();
    cin.ignore();
} 

int main()
{

    bool PlayAgain = true;
    while (PlayAgain)
    {
        Into();
        Cal();
        cout << "\n\nDo you want to use again? (y/n)\n";
        char answer;
        cin >> answer;
        if (answer != 'y')
        {
           PlayAgain = false;
        }
        system("cls");
    }

    return 0;
}