#include <iostream>
using namespace std;

int abs(int);

int main() {
	int a = -5;
	int b = abs(a);
	cout << b << endl;
}

int abs(int x) {
	if (x >= 0) {
		return x;
	} else {
		return -1 * x;
	}
}


