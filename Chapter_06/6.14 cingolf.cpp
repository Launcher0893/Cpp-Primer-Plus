// cingolf.cpp -- non-numeric input terminates loop
#include <iostream>

const int Max = 5;

int main()
{
    using namespace std;

// get data
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++)
    {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            cin.clear();    // reset input
            while (cin.get() != '\n') // read data in cin line by line and destroy wrong input in buffer until newline
                continue;   // get rid of bad input
            cout << "Please enter a number: ";
        }
    }

// calculate average
    double total = 0.0;
    for (int j = 0; j < Max; j++)
        total += golf[j];

// report results
    cout << total / Max << " = average score "
         << Max << " rounds\n";

    return 0;
}
