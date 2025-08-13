// getinfo.cpp -- input and output
#include <iostream>

int main()
{
    using namespace std;

    int carrots; // declare an integer variable

    cout << "How many carrots do you have? " << endl;
    cin >> carrots; // input the value of carrots
    cout << "Here are two more. ";
    carrots = carrots + 2;
// the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}
