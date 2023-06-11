#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 5

int fila[TAM_MAX];
int primeiro = -1;
int ultimo = -1;

void enfileirado(int dado) {
    if (ultimo == TAM_MAX - 1) {
        printf("A fila está cheia.\n");
    } else {
        fila[++ultimo] = dado;
        printf("Elemento %d enfileirado com sucesso.\n", dado);
    }
}

void desenfileirado() {
    if (primeiro == ultimo) {
        printf("A fila está vazia.\n");
    } else {
        printf("Elemento %d desenfileirado com sucesso.\n", fila[++primeiro]);
    }
}

void printFila() {
	int i;
	
    if (primeiro == ultimo) {
        printf("A fila está vazia.\n");
    } else {
        printf("Elementos da fila: ");
        for (i = primeiro + 1; i <= ultimo; i++) {
            printf("%d ", fila[i]);
        }
        printf("\n");
    }
}

int main() {
    enfileirado(1);
    enfileirado(2);
    enfileirado(3);

    printFila();

    desenfileirado();

    printFila();

    return 0;
}

