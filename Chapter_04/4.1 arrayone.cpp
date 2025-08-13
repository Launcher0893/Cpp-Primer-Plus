// arrayone.cpp -- small arrays of integers
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];    // creates array with three elements
    yams[0] = 7;    // assign value to first element
    yams[1] = 8;    
    yams[2] = 6;

    int yamcost[3] = {20, 30, 5};   // create, initialize array
    // NOTE: If your C++ compiler or translator can't initialize array
    // this array, use static int yamcost[3] instead of 
    // int yamcosts[3]

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcost[1] << " cents per package.\n";
    int total = yams[0] * yamcost[0] + yams[1] * yamcost[1];
    total = total + yams[2] * yamcost[2];
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    return 0;
}