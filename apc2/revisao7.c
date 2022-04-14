/*
Construa uma função que receba por parâmetro um vetor e seu tamanho. Essa função deve alterar
para zero todos os valores que forem par do vetor.
Na sua função principal, leia do usuário 10 números e utilizando a função criada, zere todos os
valores par do vetor e ao final, mostre o vetor resultade
*/

#include <stdio.h>

void mudarZero(int *num[10]);

int main()
{
    int num[10];

    printf("Digite 10 valores: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("%d", mudarZero);

    return 0;
}

void mudarZero(int *num[10])
{
    for (int i = 0; i < 10; i++)
    {
        if((*num[i] % 2) == 0)
        {
            *num[i] = 0;
        }
    }
}