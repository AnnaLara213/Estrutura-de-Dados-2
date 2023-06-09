#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dado;
    struct Nodo* next;
} Nodo;

void imprimirLista(Nodo* head) {
    Nodo* atual = head;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->next;
    }
    printf("\n");
}

int main() {
    Nodo* head = NULL;
    Nodo* segundo = NULL;
    Nodo* terceiro = NULL;

    head = (Nodo*)malloc(sizeof(Nodo));
    segundo = (Nodo*)malloc(sizeof(Nodo));
    terceiro = (Nodo*)malloc(sizeof(Nodo));

    head->dado = 10;
    head->next = NULL;

    segundo->dado = 20;
    segundo->next = NULL;

    terceiro->dado = 30;
    terceiro->next = NULL;

    head->next = segundo;
    segundo->next = terceiro;

    imprimirLista(head);

    free(head);
    free(segundo);
    free(terceiro);

    return 0;
}

