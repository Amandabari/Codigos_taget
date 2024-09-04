#include <stdio.h>

int INDICE = 13;
int soma = 0;
int K = 0;

int main()
{
    do 
    {
        K++;
        soma = soma + K;
        
    }  while (K < INDICE);
    printf("Soma: %d", soma);
    return 0;
}