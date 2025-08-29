#include <iostream>
int main()
{
    using namespace std;

    int minor_num, major_num, sum;
    cout << "Enter the minor number:\n";
    cin >> minor_num;
    cout << "Enter the major number:\n";
    cin >> major_num;

    for (int i = minor_num; i <= major_num; i++)
        sum += i;
    cout << "The sum of numbers between the minor and major number is " << sum << endl;

    return 0;
}
