// class_templates03.cpp
// with pre-defined value

#include <iostream>
using namespace std;

template <typename A, typename B = char> class Example {
public:
    A x;
    B y;
    Example() { cout << "the constructor is activated" << endl; }
};

int main()
{
    Example<int> example1; // Example<int, char>
    return 0;
}
