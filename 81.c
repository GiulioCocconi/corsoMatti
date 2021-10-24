#include <stdio.h>
int main() {
	int a = 1;
	printf("Valore della variabile A: %d\n", a);
	printf("Indirizzo di memoria della variabile A: %p\n\n", &a);

	int* ptr = &a;
	printf("Indirizzo puntato da PTR: %p\n", ptr);

	printf("Valore della variabile puntata da PTR: %d\n", *ptr);
	
	return 0;
}


