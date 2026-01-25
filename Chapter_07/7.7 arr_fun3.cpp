// arr_fun3.cpp -- array function and const
#include <iostream>

const int Max = 5;

int fill_array(double arr[], int limit);
void show_array(const double arr[], int n); // use const to prevent modification
void revalue(double r, double arr[], int n);

int main()
{
    using namespace std;

    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);

    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))   // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";

    // wait for user to press Enter before closing
    cin.get();  // read and clear newline character left in input buffer
    cin.get();  // wait for Enter key

    return 0;
}

int fill_array(double arr[], int limit)
{
    using namespace std;

    double temp;
    int i;

    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)      // bad input
        {
            cin.clear();    // reset input
            while (cin.get() != '\n')
                continue;   // discard bad input
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)   // signal to terminate
            break;
        arr[i] = temp;
    }

    return i;
}

void show_array(const double arr[], int n)
{
    using namespace std;

    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << arr[i] << "\n";
    }
}

void revalue(double r, double arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] *= r;
}
