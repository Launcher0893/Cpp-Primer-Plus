#include <iostream>
#include <string>
struct car
{
    std::string manufacturer;
    int year;
};

int main()
{
    using namespace std;
    int car_count;

    cout << "How many cars do you wish to catalog? ";
    cin >> car_count;
    cin.ignore();
    car *cars = new car[car_count];

    for (int i = 0; i < car_count; i++)
    {
        cout << "Car #" << i + 1 << " :" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.ignore();
    }

    cout << "Here is your collection:\n";
    for (int i = 0; i < car_count; i++)
    {
        cout << cars[i].year << " " << cars[i].manufacturer << endl;
    }

    delete[] cars;
    return 0;
}
