#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("A fila está cheia.\n");
    } else {
        queue[++rear] = data;
        printf("Elemento %d enfileirado com sucesso.\n", data);
    }
}

void dequeue() {
    if (front == rear) {
        printf("A fila está vazia.\n");
    } else {
        printf("Elemento %d desenfileirado com sucesso.\n", queue[++front]);
    }
}

void printQueue() {
    if (front == rear) {
        printf("A fila está vazia.\n");
    } else {
        printf("Elementos da fila: ");
        for (int i = front + 1; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printQueue();

    dequeue();

    printQueue();

    return 0;
}

