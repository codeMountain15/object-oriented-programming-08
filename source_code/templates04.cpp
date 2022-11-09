// templates04.cpp
// pass const (non type) parameter

#include <iostream>
using namespace std;

// get the minimum integer under a limit within the array
// minimum_limit has to be const
template <typename T, int minimum> int array_example(T input[], int n)
{
    int min = minimum;
    for (int i = 0; i < n; i++)
        if (input[i] < min) 
            min = input[i];

    return min;
}

int main()
{
    int array1[] = { 300, 500, 200 };
    int sz = sizeof(array1) / sizeof(array1[0]);

    cout << array_example<int, 400>(array1, sz) << endl;
   
    return 0;
}
