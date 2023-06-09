#include <stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX_SIZE - 1;
}

void push(int data) {
    if (isFull()) {
        printf("A pilha está cheia.\n");
    } else {
        stack[++top] = data;
        printf("Elemento %d empilhado com sucesso.\n", data);
    }
}

void pop() {
    if (isEmpty()) {
        printf("A pilha está vazia.\n");
    } else {
        printf("Elemento %d desempilhado com sucesso.\n", stack[top--]);
    }
}

int main() {
    push(1);
    push(2);
    push(3);

    pop();

    return 0;
}

