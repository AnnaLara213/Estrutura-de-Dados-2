#include <stdio.h>
#define SIZE 10

int hashTable[SIZE] = {0};

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key, int value) {
    int index = hashFunction(key);
    hashTable[index] = value;
    printf("Elemento inserido com sucesso.\n");
}

int search(int key) {
    int index = hashFunction(key);
    return hashTable[index];
}

int main() {
    insert(5, 10);
    insert(15, 20);
    insert(25, 30);

    int value = search(15);
    printf("Valor encontrado: %d\n", value);

    return 0;
}

