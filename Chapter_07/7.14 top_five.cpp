// top_five.cpp -- handling an array of string objects
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main()
{
    string list[SIZE];

    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);  // read from cin into string array list[i]
    }

    cout << "Your list:\n";
    display(list, SIZE);

    return 0;
}

// display string word by word in a array
void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i + 1 << ": " << sa[i] << endl;
}
