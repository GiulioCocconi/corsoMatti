#include <iostream>
using namespace std;

int main() {
	int numeri[5];

	for (int i = 0; i<5; i++) {
		cout << "Inserisci un numero: ";
		cin >> numeri[i];
	}

	for (int i = 0; i<5; i++) {
		cout << numeri[i] << ",";
	}
}
