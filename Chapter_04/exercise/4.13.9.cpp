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
    CandyBar* snacks = new CandyBar[3];
    
    // 初始化数组元素
    snacks[0] = {"Mocha Munch", 2.3, 350};
    snacks[1] = {"Snickers", 2.1, 250};
    snacks[2] = {"Twix", 1.9, 240};

    for (int i = 0; i < 3; i++)
    {
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << " oz" << endl;
        cout << "Calories: " << snacks[i].calories << " kcal" << endl;
        cout << endl;
    }
    
    delete[] snacks; // 释放动态分配的内存
    
    return 0;
}
