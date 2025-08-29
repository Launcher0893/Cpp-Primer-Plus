#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    float SalesVolume[3][12];
    int year_sum[3] = {0, 0, 0};
    int total_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter sales volume for year " << (i + 1) << ":" << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << "  " << months[j] << ": ";
            cin >> SalesVolume[i][j];
            year_sum[i] += SalesVolume[i][j];
            total_sum += SalesVolume[i][j];
        }
    }
    cout << "Yearly sales volume:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "  Year " << (i + 1) << ": " << year_sum[i] << endl;
    }
    cout << "Total sales volume: " << total_sum << endl;

    return 0;
}
