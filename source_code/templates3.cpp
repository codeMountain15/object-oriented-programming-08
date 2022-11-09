// templates3.cpp
// example: bubble sort

#include <iostream>
using namespace std;

template <typename T> void bubble_sort(T input[], unsigned short int len)
{
    for (int i = 0; i < len - 1; i++)
        for (int j = len - 1; i < j; j--)
            if (input[j] < input[j - 1]) swap(input[j], input[j - 1]);
}


int main()
{
    char collection[5] = { 'a', 'd', 'b', 'e', 'c' };
    //unsigned short int collection[10] = { 5, 10, 30, 25, 15, 20, 50, 40, 45, 35 };

    unsigned short int length = sizeof(collection) / sizeof(collection[0]);

    bubble_sort<char>(collection, length);
    //bubble_sort<unsigned short int>(collection, length);

    cout << "The collection after bubble_sort() is:\n";

    for (int i = 0; i < length; i++)
    cout << collection[i] << endl;

    return 0;
}
