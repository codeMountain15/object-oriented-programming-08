// virtual_f02.cpp
//

#include<iostream>
using namespace std;

class hyperclass {
public:
	void test_1() { cout << "hyperclass test_1()\n"; }
	virtual void test_2() { cout << "hyperclass test_2()\n"; }
	virtual void test_3() { cout << "hyperclass test_3()\n"; }
	virtual void test_4() { cout << "hyperclass test_4()\n"; }
};

class subclass : public hyperclass {
public:
	void test_1() { cout << "subclass test_1()\n"; }
	void test_2() { cout << "subclass test_2()\n"; }
	void test_4(int a) { cout << a << " from subclass test_4()\n"; }
};

int main()
{
	hyperclass* hpr;
	subclass sb;
	hpr = &sb;

	hpr->test_1(); // Early binding
	hpr->test_2(); // Late binding
	hpr->test_3(); // Late binding
	hpr->test_4(); // Late binding

	// Early binding but this function call is
	// illegal (produces error) because pointer
	// is of base type and function is of
	// derived class
	// hpr->test_4(1); // error!

	return 0;
}
