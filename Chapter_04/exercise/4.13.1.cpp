#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string firstname;
    string lastname;
    char grade;
    int age;

    cout << "What is your firstname? ";
    getline(cin, firstname);
    cout << "What is your lastname? ";
    getline(cin, lastname);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name:" << lastname << ", " << firstname << endl;
    cout << "Grade: " << static_cast<char>(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
