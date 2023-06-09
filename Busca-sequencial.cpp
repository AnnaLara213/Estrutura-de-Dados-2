#include <stdio.h>

int search(char str[], char key) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == key) {
            return i; o
        }
        i++;
    }
    return -1; 
}

int main() {
    char str[] = "Hello, World!";
    char key = 'o';

    int index = search(str, key);

    if (index != -1) {
        printf("Caractere '%c' encontrado no índice %d.\n", key, index);
    } else {
        printf("Caractere '%c' não encontrado.\n", key);
    }

    return 0;
}


