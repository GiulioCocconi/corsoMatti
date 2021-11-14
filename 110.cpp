#include <iostream>
using namespace std;

int fact(int n);

int main() {
	cout << fact(3) << endl;
}

int fact(int n) {
	if (n==0)
		return 1;
	else 
		return n*fact(n-1);
}

