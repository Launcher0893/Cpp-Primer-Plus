#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char firstname[50];
    char lastname[50];

    cout << "Enter your first name: ";
    cin.getline(firstname, 50);
    cout << "Enter your last name: ";
    cin.getline(lastname, 50);

    cout << "Here's the information in a single string: ";
    cout << lastname << ", " << firstname << endl;

    return 0;
}
