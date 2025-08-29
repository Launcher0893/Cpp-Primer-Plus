// textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main(void)
{
    using namespace std;
    char ch;        // should be int, not char
    int count = 0;

    while ((ch = cin.get()) != EOF)     // test for EOF
    {
        cout << ch;
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}
