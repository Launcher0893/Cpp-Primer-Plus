// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int); // function prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone; // input the value of stone
    int pounds = stonetolb(stone); // call the function
    cout << stone << " stone = " << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}