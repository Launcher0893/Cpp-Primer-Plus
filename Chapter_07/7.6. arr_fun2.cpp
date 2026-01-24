// arr_fun2.cpp -- functions with an array argument, modified from arr_fun1.cpp
#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);

// use std:: instead of using namespace std in function definition
int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";

    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << "\n";

    sum = sum_arr(cookies, 3);     // a lie
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4); // another lie
    std::cout << "Last four eaters ate " << sum << " cookies.\n";

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = sizeof arr\n";   // sizeof arr is size of pointer, not size of entire array

    for (int i = 0; i < n; i++)
        total += arr[i];
    
    return total;
}
