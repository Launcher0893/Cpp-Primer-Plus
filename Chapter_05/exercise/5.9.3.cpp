#include <iostream>
int main()
{
    using namespace std;
    int num, sum;
    sum = 0;

    cout << "Enter numbers to sum (0 to end):\n";
    while (cin >> num && num != 0)
        sum += num;
    cout << "The sum is " << sum << endl;

    return 0;
}
