#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int pesquisa(char str[], char chave) {
    int i = 0;
    
	while (str[i] != '\0') {
        if (str[i] == chave) {
            return i;
        }
        
        i++;
    }
    
    return -1; 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    char str[] = "Hello, World!";
    char chave = 'o';

    int index = pesquisa(str, chave);

    if (index != -1) {
        printf("Caractere '%c' encontrado no índice %d.\n", chave, index);
    } else {
        printf("Caractere '%c' não encontrado.\n", chave);
    }

    return 0;
}

