// switch.cpp -- using the switch statement
#include <iostream>
using namespace std;
void show_menu(); // function prototypes
void report();  // test remote changes again
void comfort();

int main()
{
    show_menu();
    int choice;
    cin >> choice;

    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "\a\n";
            break;
        
        case 2:
            report();
            break;
        
        case 3:
            cout << "The boss was in all day.\n";
            break;
        case 4:
            comfort();
            break;
        
        default:
            cout << "That's not a choice.\n";
            break;
        }
        show_menu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void show_menu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
            "1) alarm     2) report\n"
            "3) alibi     4) comfort\n"
            "5) quit\n";
}

void report()
{
    cout << "It's been an excellent week for business.\n"
            "Sales ar up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
            "in the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";
}
