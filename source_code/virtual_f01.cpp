// virtual_f01.cpp
//

#include<iostream>
using namespace std;

class hyperclass {
public:
    virtual void hello(){ cout << "hello() from hyperclass\n"; }

    void yolo(){ cout << "yolo() from hyperclass\n"; }
};

class subclass : public hyperclass {
public:
    // is overridden, so it is also considered as virtual
    // without declaring it
    void hello(){ cout << "hello() from subclass\n"; }

    void yolo(){ cout << "yolo() from subclass\n"; }
};

int main(){
    hyperclass* hpr;
    subclass sb;
    hpr = &sb;

    // Virtual function
    // -> binded at runtime
    hpr->hello();

    // Non-virtual function
    // -> binded at compile time
    hpr->yolo();

    return 0;
}
