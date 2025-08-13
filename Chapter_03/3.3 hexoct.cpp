// hexoct.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
    using namespace std;
    int chest = 42; // decimal
    int waist = 0x42; // hexadecimal
    int inseam = 042; // octal

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42decimal) " << endl;
    cout << "waist = " << waist << " (0x42 in hex) " << endl;
    cout << "inseam = " << inseam << " (042 in octal) " << endl;
    return 0;
}