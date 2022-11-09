// templates01b.cpp
//

#include <iostream>;
using namespace std;

template <typename M, typename N> void type_something(M x, N y) {
	cout << x << y << endl;
}

int main() {
	
	int a = 1;
	bool b = true;
	char c = '!';
	string d = "Yoloooo";

	type_something<string, char>(d, c);
	type_something<int, char>(b, c);
	type_something<string, bool>(d, b);

	return 0;
}
