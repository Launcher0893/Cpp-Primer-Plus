#include <iostream>
const float Principal = 100.0;
const float SimpleInterest = 0.1;
const float CompoundInterest = 0.05;
int main()
{
    using namespace std;
    int year = 0;
    float amount_Daphne = 0.0, amount_Cleo = 0.0;

    while (amount_Daphne >= amount_Cleo)
    {
        year++;
        amount_Daphne += SimpleInterest * Principal;
        amount_Cleo += CompoundInterest * (Principal + amount_Cleo);
    }
    cout << "After " << year << " years, Daphne's investment is worth " << amount_Daphne << " and Cleo's investment is worth " << amount_Cleo << "." << endl;

    return 0;
}
