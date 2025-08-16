#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 3> times;
    double sum = 0.0;
    
    cout << "请输入三次40码跑的成绩（秒）：" << endl;
    
    // 输入三次成绩
    for (int i = 0; i < 3; i++)
    {
        cout << "第" << i + 1 << "次成绩: ";
        cin >> times[i];
        sum += times[i];
    }
    
    // 显示结果
    cout << "\n40码跑成绩统计：" << endl;
    cout << "总次数: " << times.size() << "次" << endl;
    
    cout << "各次成绩: ";
    for (int i = 0; i < 3; i++)
    {
        cout << times[i] << "秒";
        if (i < 2) cout << ", ";
    }
    cout << endl;
    
    cout << "平均成绩: " << sum / times.size() << "秒" << endl;
    
    return 0;
}