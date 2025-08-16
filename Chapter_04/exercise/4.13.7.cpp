#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string brand;
    float diameter;
    float weight;
};

int main()
{
    Pizza pizzas[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for pizza " << i + 1 << ":" << endl;
        cout << "Brand: ";
        cin >> pizzas[i].brand;
        cout << "Diameter: ";
        cin >> pizzas[i].diameter;
        cout << "Weight: ";
        cin >> pizzas[i].weight;
    }

    cout << "\nPizza Details:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Pizza " << i + 1 << ":" << endl;
        cout << "Brand: " << pizzas[i].brand << endl;
        cout << "Diameter: " << pizzas[i].diameter << " inches" << endl;
        cout << "Weight: " << pizzas[i].weight << " lbs" << endl;
    }

    return 0;
}
