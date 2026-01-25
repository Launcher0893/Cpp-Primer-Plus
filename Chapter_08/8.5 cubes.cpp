// cubes.cpp -- regular and reference arguments
#include <iostream>

double cube(double a);
double refCube(double & r_a);

int main()
{
    using namespace std;

    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refCube(x);
    cout << " = cube of " << x << endl;

    return 0;
}

double cube(double a)
{
    a = a * a * a;
    return a;
}

double refCube(double & r_a)
{
    r_a = r_a * r_a * r_a;
    return r_a;
}
