#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    float weight;
    int calories;
};

int main()
{
    CandyBar snacks[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Snickers", 2.1, 250},
        {"Twix", 1.9, 240}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << " oz" << endl;
        cout << "Calories: " << snacks[i].calories << " kcal" << endl;
        cout << endl;
    }
    
    return 0;
}
