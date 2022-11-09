// class_templates02.cpp
// multi-parameter template

#include<iostream>
using namespace std;

// template <class Ta, class Tb, class Tc>
template <typename Ta, typename Tb, typename Tc>
class example2{
    Ta a;
    Tb b;
    Tc c;

public:
    example2(Ta x, Tb y, Tc z){ // constructor
        a = x;
        b = y;
        c = z;
    }

    void print(){
        cout << a << " - " << b << " - " << c << endl;
    }
};


int main()
{
    example2 <int, bool, char> show(23, true, '&');
    show.print();

    return 0;
}
