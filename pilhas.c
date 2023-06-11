#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 5

int empilhar[TAM_MAX];
int superior = -1;

int vazio() {
    return superior == -1;
}

int cheio() {
    return superior == TAM_MAX - 1;
}

void push(int dado) {
    if (cheio()) {
        printf("A pilha está cheia.\n");
    } else {
        empilhar[++superior] = dado;
        printf("Elemento %d empilhado com sucesso.\n", dado);
    }
}

void pop() {
    if (vazio()) {
        printf("A pilha está vazia.\n");
    } else {
        printf("Elemento %d desempilhado com sucesso.\n", empilhar[superior--]);
    }
}

int main() {
    push(1);
    push(2);
    push(3);

    pop();

    return 0;
}

