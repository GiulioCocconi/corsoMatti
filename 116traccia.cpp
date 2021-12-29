#include <iostream>
#include <climits>

#define LUNGHEZZA_VETT 5

using namespace std;

// ISTRUZIONI: per prima cosa scrivi tutti i parametri, sia nelle dichiarazioni che nelle funzioni, poi implementa nell'ordine
// 	1) swap
// 	2) minimo
// 	3) bubble_sort
// 	4) selection_sort

void swap(....); // Scambia due variabili TODO: Scrivere parametri
void stampa_vettore(const int* vett, const int length);
void bubble_sort(...); //TODO: Scrivere parametri; 
void selection_sort(int* vett, const int from, const int to);
int minimo(...); //Trova l'indice del valore minimo del sottovettore di vett da indice from a indice to, TODO: Scrivere parametri

int main() {
	int vett_1[LUNGHEZZA_VETT] = { 2, 4, 1, 9, 0 };
	int vett_2[LUNGHEZZA_VETT] = { 3, 5, 1, 10, 2 };
	cout << "Implementazione algoritmi di ordinamento" << endl;
	cout << "Vettore 1: ";
	stampa_vettore(vett_1, LUNGHEZZA_VETT);
	cout << "Vettore 2: ";
	stampa_vettore(vett_2, LUNGHEZZA_VETT);
	cout << endl;
	
	cout << "Test funzione swap: ";
	int a = 1;
	int b = 2;
	swap(a, b);
	if (a == 2 && b == 1) {
		cout << "Tutto ok!" << endl;
	} else {
		cout << "NO!!!!" << endl;
		cout << "A [2]: " << a << endl;
		cout << "B [1]: " << b << endl;
	}
	cout << endl;

	cout << "Test funzione minimo: ";
	int minimo_1 = minimo(vett_1, 0, LUNGHEZZA_VETT);
	int minimo_2 = minimo(vett_2, 0, LUNGHEZZA_VETT);
	if (minimo_1 == 4 && minimo_2 == 2) {
		cout << "Tutto ok!" << endl;
	} else {
		cout << "NO!!!!" << endl;
		cout << "Indice minimo vett. 1 [4]: " << minimo(vett_1, 0, LUNGHEZZA_VETT) << endl;
		cout << "Indice minimo vett. 2 [2]: " << minimo(vett_2, 0, LUNGHEZZA_VETT) << endl;
	}
	cout << endl;

	cout << "Test BUBBLESORT: ";
	bubble_sort(vett_1, LUNGHEZZA_VETT);
	stampa_vettore(vett_1, LUNGHEZZA_VETT);
	
	cout << "Test SELECTIONSORT: ";
	selection_sort(vett_2, 0, LUNGHEZZA_VETT-1); // L'indice massimo è la lunghezza del vettore diminuita di 1
	stampa_vettore(vett_2, LUNGHEZZA_VETT);


}

void swap(...) { //TODO: SCRIVERE PARAMETRI + IMPLEMENTAZIONE
	//...
}

void stampa_vettore(const int* vett, const int length) {
	cout << "[ ";
	for (int i = 0; i < length; i++) {
		cout << vett[i] << " ";
	}
	cout << "]" << endl;
}

int minimo(...) { //TODO: SCRIVERE PARAMETRI + TERMINARE IMPLEMENTAZIONE
	int minimo = INT_MAX; // Definito in <climits> (https://docs.microsoft.com/it-it/cpp/c-language/cpp-integer-limits)
	int indice_minimo = -1;
	//...
	return indice_minimo;
}


void bubble_sort(...) { //TODO: SCRIVERE PARAMETRI + TERMINARE IMPLEMENTAZIONE
	bool ordinato = false;
	//while (!ordinato) {
		//... 
	//}
}

void selection_sort(int* vett, const int from, const int to) { //TODO: TERMINARE IMPLEMENTAZIONE ( se vuoi ti aiuto :-) )
	if (from == to)
		return;
	//...
}
