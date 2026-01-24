// ruler.cpp -- using recursion to subdivide a ruler
#include <iostream>

const int LEN = 66;
const int DIV = 6;

void subdivide(char arr[], int low, int high, int level);

int main()
{
    char ruler[LEN];
    int i;
    int max = LEN -2;
    int min = 0;

    for (i = 1; i < max; i++)
        ruler[i] = ' ';  // initialize the ruler with spaces
    ruler[LEN - 1] = '\0';
    ruler[0] = ruler[max] = '|';  // set the two end tick marks

    std::cout << ruler << std::endl;

    for (i = 1; i <= DIV; i++)
    {
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < max; j++)
            ruler[j] = ' ';  // reset the ruler to blankfor the next division
    }

    return 0;
}

void subdivide(char arr[], int low, int high, int level)
{
    if (level == 0)
        return;
    
    int mid = (low + high) / 2;
    arr[mid] = '|';  // place a tick mark at the midpoint

    subdivide(arr, low, mid, level - 1);   // subdivide left segment
    subdivide(arr, mid, high, level - 1);  // subdivide right segment
}

