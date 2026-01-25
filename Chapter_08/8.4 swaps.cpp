// swaps.cpp -- swapping with references and with pointers
#include <iostream>

void refSwap(int & a, int & b);     // a, b are aliases for int
void ptrSwap(int * p, int * q);   // p, q are addresses of int
void valSwap(int a, int b);         // a, b are new variables

int main()
{
    using namespace std;

    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << ", wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    refSwap(wallet1, wallet2);  // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << ", wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    ptrSwap(&wallet1, &wallet2);  // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << ", wallet2 = $" << wallet2 << endl;

    cout << "Trying to use passing by value:\n";
    valSwap(wallet1, wallet2);  // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << ", wallet2 = $" << wallet2 << endl;

    return 0;
}

void refSwap(int & a, int & b)  // use references
{
    int temp;

    temp = a;    // use a, b for values of variables
    a = b;
    b = temp;
}

void ptrSwap(int * p, int * q)  // use pointers
{
    int temp;

    temp = *p;    // use p, q for values of variables
    *p = *q;
    *q = temp;
}

void valSwap(int a, int b)      // use values
{
    int temp;

    temp = a;    // use a, b for values of variables
    a = b;
    b = temp;
}
