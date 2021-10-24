#include <iostream>
using namespace std;

int main() {
	int a = 0;
	cout << "Inserisci un numero: ";
	cin >> a;
	
	if (a % 2 == 0) {
		cout << "Il numero è pari" << endl;
	} else { //if (!(a % 2 == 0))
		cout << "Il numero è dispari" << endl;
	}
	cout << "Fine" << endl;
}

