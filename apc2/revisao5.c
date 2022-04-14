/*
Faça um programa que receba do usuário 10 números e mostre na tela o somatório dos números 
pares
*/

#include <stdio.h>

int main()
{
    int num[10], i;
    int pares;

    printf("Digite 10 numeros: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if ((num[i] % 2) == 0)
        {
            pares += num[i];
        }
    }

    printf("Somatorio dos pares: %d", pares);

    return 0;
}