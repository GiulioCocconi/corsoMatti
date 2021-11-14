#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int dimensioneArray = 0;
	int* arr;

	cout << "Qual'è la dimensione dell'array? ";
	cin >> dimensioneArray;

	arr = (int*)malloc(sizeof(int) * dimensioneArray);

	for (int i = 0; i < dimensioneArray; i++) {
		cout << "Inserisci elemento N. " << i + 1 << " ";
		cin >> *(arr + i);
	}

	for (int i = 0; i < dimensioneArray; i++) {
		cout << "Elemento n. " << i + 1 << ": " << *(arr + i) << endl;
	}

	free(arr); // IMPORTANTE!!!!!!
}
