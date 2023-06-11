#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dado;
    struct Nodo* proximo;
} Nodo;

void imprimirLista(Nodo* primeiro) {
    Nodo* atual = primeiro;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    Nodo* primeiro = NULL;
    Nodo* segundo = NULL;
    Nodo* terceiro = NULL;

    primeiro = (Nodo*)malloc(sizeof(Nodo));
    segundo = (Nodo*)malloc(sizeof(Nodo));
    terceiro = (Nodo*)malloc(sizeof(Nodo));

    primeiro->dado = 10;
    primeiro->proximo = NULL;

    segundo->dado = 20;
    segundo->proximo = NULL;

    terceiro->dado = 30;
    terceiro->proximo = NULL;

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;

    imprimirLista(primeiro);

    free(primeiro);
    free(segundo);
    free(terceiro);

    return 0;
}

