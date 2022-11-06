// abstract_class01.cpp
//

#include<iostream>
using namespace std;

class Abstract_Animal{
public:
    virtual void move() = 0;  // pure virtual
}; // "Abstract_Animal" is an abstract class

class Mammal: public Abstract_Animal{
public:
    void move() { cout << "I'm a moving mammal!\n"; };
    void sleep() { cout << "ZzZzZzZz\n"; };      // non-pure virtual
}; // "Mammal" is a non-abstract class


int main()
{
    //Abstract_Animal a;   // Error: abstract class
    
    Mammal b;      // OK
    Abstract_Animal* a = &b; // OK to reference abstract base
    a->move();           // virtual dispatch to Mammal::move()
    
    // a.sleep();  // error: sleep() is not a member of Abstract_Animal

    return 0;
}
