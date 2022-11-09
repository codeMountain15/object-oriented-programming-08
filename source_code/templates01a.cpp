// templates01a.cpp
// an alternative example

#include <iostream>;
using namespace std;

template <typename M> int mikrotero(M x, M y) {
	return y < x ? y : x;
}

int main() {
	cout << mikrotero<int>(5, 10) << endl;
	cout << mikrotero<float>(5.1, 4.6) << endl;
	cout << mikrotero<char>('v', 'a') << endl;

	return 0;
}
