// two_arg.cpp -- a function with two arguments
#include <iostream>

using namespace std;

void n_chars(char, int); 

int main()
{
    int times;
    char ch;

    cout << "Enter a character:";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter a integer:";
        cin >> times;
        n_chars(ch, times); // function with two arguments
        cout << "\nEnter another charater or press the"
                " q-key to quit:";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye!\n";

    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0)     // continue until n is 0
        cout << c;
}
