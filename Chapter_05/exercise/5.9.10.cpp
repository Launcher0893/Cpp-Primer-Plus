#include <iostream>
int main()
{
    using namespace std;
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        // 打印句点
        for (int dots = 0; dots < rows - i; dots++)
            cout << ".";
        
        // 打印星号
        for (int stars = 0; stars < i; stars++)
            cout << "*";
        
        // 换行
        cout << endl;
    }

    return 0;
}
