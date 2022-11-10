// class_templates04.cpp
// with constructor & destructor

#include <iostream>
using namespace std;

template <typename T> class array_class {
private:
    T* inner_array;
    int sz; // the inner_array size

public:
    array_class(T [], int ); // constructor
    ~array_class(); // destructor
    // ...
};


// the constructor definition
template <typename T> array_class<T>::array_class(T array_input[], int size_input){
    inner_array = new T[size_input]; // dynamic memory allocation
    sz = size_input;
    for (int i = 0; i < sz; i++)
        inner_array[i] = array_input[i];
}

// the destructor definition
template <typename T> array_class<T>::~array_class(){
    cout << "\ndestructor is activated\n";
    delete[] inner_array; // dynamic memory de-allocation
}

int main(){
    string test[3] = { "It", " gets", " complicated" };
    array_class<string> A(test, 3);
    
    return 0;
}
