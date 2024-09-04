#include <stdio.h>

#define tamanho 100  

int main() {
    char str[tamanho];
    int i, j;
    char temp;

    printf("Digite uma string: ");
    fgets(str, tamanho, stdin);

    for (i = 0; str[i] != '\0'; i++);

    if (i > 0 && str[i - 1] == '\n') {
        str[i - 1] = '\0';
        i--;
    }

    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}
