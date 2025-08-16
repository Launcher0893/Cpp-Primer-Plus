#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string firstname;
    string lastname;

    cout << "Enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);

    cout << "Here's the information in a single string: ";
    cout << lastname << ", " << firstname << endl;

    return 0;
}
