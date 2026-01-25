// arr_obj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>

const int SEASONS = 4;
const std::array<std::string, SEASONS> season_name = {"Spring", "Summer", "Fall", "Winter"}; // a array object with string objects in it

void fill(std::array<double, SEASONS> * ptr_arr);
void show(const std::array<double, SEASONS> d_arr);

int main()
{
    std::array<double, SEASONS> expenses;
    fill(&expenses);
    show(expenses);

    return 0;
}

void fill(std::array<double, SEASONS> * ptr_arr)
{
    using namespace std;

    for (int i = 0; i < SEASONS; i++)
    {
        cout << "Enter " << season_name[i] << " expenses: ";
        cin >> (*ptr_arr)[i];
    }
}

void show(const std::array<double, SEASONS> d_arr)
{
    using namespace std;

    double total = 0.0;

    cout << "\nEXPENSES\n";
    for (int i = 0; i < SEASONS; i++)
    {
        cout << season_name[i] << ": $" << d_arr[i] << endl;
        total += d_arr[i];
    }

    cout << "Total Expenses: $" << total << endl;
}
