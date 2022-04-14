/*
Faça um programa que receba 10 números do usuário e mostre na tela quantos e quais são primos
*/

#include <stdio.h>

int main()
{
    int num[10], i, primos;

    printf("Digite 10 numeros: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    return 0;
}