// hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
    using namespace std;
    int chest = 42; // decimal
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42) " << endl;
    cout << hex; // set output to hexadecimal
    cout << "waist = " << waist << " (hexadecimal for 42) " << endl;
    cout << oct; // set output to octal
    cout << "inseam = " << inseam << " (octal for 42) " << endl;
    return 0;
}