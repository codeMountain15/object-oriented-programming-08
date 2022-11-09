// class_templates01.cpp
//

#include <iostream>
using namespace std;

// template <class T> class example {
template <typename T> class example {
  public:
    example(T variable){  // the constructor
        cout << endl << "variable " << variable
            << " is: " << sizeof(variable) << " bytes\n";
    }
};

int main()
{
    // calling the constructor
    example<char> ex1('x');

    // calling the constructor
    example<int> ex2(22);

    // calling the constructor
    example<string> ex3("hi there!");

    return 0;
}
