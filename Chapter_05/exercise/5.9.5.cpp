#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    float SalesVolume[12];
    int sum = 0;

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter sales volume for " << months[i] << ": ";
        cin >> SalesVolume[i];
        sum += SalesVolume[i];
    }
    cout << "This year's sales volume is: " << sum << endl;

    return 0;
}
