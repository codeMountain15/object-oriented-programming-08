// templates02a.cpp
//

#include <iostream>;
using namespace std;

template <typename M> void type_something(M x, char y) {
	cout << x << y << endl;
}

int main() {
	
	//int a = 1;
	//bool b = true;
	char c = '!';
	string d = "Yoloooo";

	type_something<string>(d, c);

	return 0;
}
