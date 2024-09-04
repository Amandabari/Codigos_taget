#include <stdio.h>

int main() {
    int numero;
    int n1 = 0, n2 = 1,  sequencia= 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero == 0 || numero == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
        return 0;
    }

    while (sequencia < numero) {
        sequencia = n1 + n2;
        n1 = n2;
        n2 = sequencia;
    }
    if (sequencia == numero) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}