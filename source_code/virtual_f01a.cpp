// virtual_f01a.cpp
// extending base class function

#include<iostream>
using namespace std;

class hyperclass {
public:
    virtual void hello() { cout << "hello() from hyperclass\n"; }

    void yolo() { cout << "yolo() from hyperclass\n"; }
};

class subclass : public hyperclass {
public:
    // is overridden, so it is also considered as virtual
    // without declaring it
    void hello() { cout << "hello() from subclass\n"; }

    void yolo() { // extending hyperclass yolo
        cout << "yolo() from subclass and ...\n";
        //hyperclass::yolo();
    }
};

class subclass2 : public subclass {
public:
    void hello() { cout << "hello() from subclass2\n"; }

    void yolo() { 
        cout << "yolo() from subclass2 and ...\n";
    }
};

int main() {
    hyperclass* hpr;
    subclass2 sb2;
    hpr = &sb2;

    // Virtual function
    // -> binded at runtime
    hpr->hello();

    // Non-virtual function
    // -> binded at compile time
    hpr->yolo();

    return 0;
}
