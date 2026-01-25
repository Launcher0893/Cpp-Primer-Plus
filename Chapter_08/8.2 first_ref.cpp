// first_ref.cpp -- defining and using a reference
#include <iostream>

int main()
{
    using namespace std;

    int rats = 101;
    int & rodents = rats; // rodents is a reference to rats, reference must be initialized when created

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

// some implementations require type casting the following address to type unsigned
    cout << "Address of rats: " << &rats << endl;
    cout << "Address of rodents: " << &rodents << endl;

    return 0;
}
