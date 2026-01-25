// fun_ptr.cpp -- pointers to functions
#include <iostream>

double betsy(int);
double pam(int);

// second argument is a pointer to a type double function that takes a type int argument
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;

    int code;

    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);

    return 0;
}

double betsy(int lines_betsy)
{
    return 0.05 * lines_betsy;
}

double pam(int lines_pam)
{
    return 0.03 * lines_pam + 0.0004 * lines_pam * lines_pam;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;

    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hours\n";
}
