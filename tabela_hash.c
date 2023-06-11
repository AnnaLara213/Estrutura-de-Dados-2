#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int tabela[TAM] = {0};

int funcaoHash(int chave) {
    return chave % TAM;
}

void inserir(int chave, int valor) {
    int index = funcaoHash(chave);
    tabela[index] = valor;
    printf("Elemento inserido com sucesso.\n");
}

int pesquisa(int chave) {
    int index = funcaoHash(chave);
    return tabela[index];
}

int main() {
    inserir(5, 10);
    inserir(15, 20);
    inserir(25, 30);

    int valor = pesquisa(15);
    printf("Valor encontrado: %d\n", valor);

    return 0;
}

