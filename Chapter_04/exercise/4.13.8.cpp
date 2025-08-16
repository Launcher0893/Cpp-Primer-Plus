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
    Pizza* pizzas = new Pizza[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for pizza " << i + 1 << ":" << endl;
        cout << "Diameter: ";
        cin >> pizzas[i].diameter;
        cout << "Brand: ";
        cin.ignore(); // 清除输入缓冲区中的换行符
        getline(cin, pizzas[i].brand);
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

    delete[] pizzas; // 释放动态分配的内存

    return 0;
}
