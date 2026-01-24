// string_back.cpp -- a fucntion that returns a pointer to char
#include <iostream>

char * buildstr(char c, int n);

int main()
{
    using namespace std;

    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;

    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;           // free memory
    ps = buildstr('+', 20); // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;           // free memory

    return 0;
}

// builds string made of n c characters
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];

    pstr[n] = '\0';         // terminate string
    for (int i = 0; i < n; i++)
        pstr[i] = c;        // fill rest of string

    return pstr;
}
