#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int buscaBinaria(int array[], int tam, int chave) {
    int esquerda = 0;
    int direita = tam - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (array[meio] == chave)
            return meio;

        if (array[meio] < chave)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }

    return -1;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tam = sizeof(array) / sizeof(array[0]);
    int chave = 6;

    int index = buscaBinaria(array, tam, chave);

    if (index != -1)
        printf("Elemento %d encontrado no índice %d.\n", chave, index);
    else
        printf("Elemento %d não encontrado.\n", chave);

    return 0;
}

