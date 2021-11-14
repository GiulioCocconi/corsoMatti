#include <iostream>
using namespace std;

void stampaArray(int* array, int length);

int main() {
	int a[] = { 1, 2, 3 };
	stampaArray(a, 3);
}

void stampaArray(int* array, int length) {
	for (int i = 0; i<length; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}


