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
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << " oz" << endl;
    cout << "Calories: " << snack.calories << " kcal" << endl;

    return 0;
}
