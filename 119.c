#include <stdio.h>
#include <stdlib.h>

int main() {
	int dimensioneArray = 0;

	printf("Qual'è la dimensione dell'array? ");
	scanf("%d", &dimensioneArray);

	int* arr = malloc(sizeof(int) * dimensioneArray);

	for (int i = 0; i < dimensioneArray; i++) {
		printf("Inserire elemento %d: ", i+1);
		scanf("%d", arr + i);
	}

	for (int i = 0; i < dimensioneArray; i++) {
		printf("Elemento %d: %d\n", i + 1, *(arr + i));
	}

	free(arr); // IMPORTANTE!!!
}
