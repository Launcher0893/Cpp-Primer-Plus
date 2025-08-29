// formore.cpp -- more looping with for
#include <iostream>
#include <array>
const int ArSize = 16;  // example of external declaration
int main()
{
    long double factorials[ArSize];
    factorials[1] = factorials[0] = 1.0L;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;

    return 0;
}
