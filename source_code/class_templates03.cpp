// templates03.cpp
// with pre-defined value

#include <iostream>
using namespace std;

template <typename A, typename B = bool> class Example {
public:
    A x;
    B y;
    Example() { 
        cout << "the constructor is activated with " 
        << typeid(x).name() << " and " << typeid(y).name() << endl; }
};

int main()
{
    Example<int> example1; // Example<int, bool>
    return 0;
}
