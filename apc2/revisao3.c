/*
Faça um programa que receba do usuário 10 números
e mostre na tela qual foi o maior e o menor número digitado.
*/

#include <stdio.h>

int main ()
{
    int num[10], i;
    int maior, menor;

    printf("Digite 10 numeros: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);

        if (i == 0)
        {
            maior = num[i];
            menor = num[i];
        }
        else {
            if (num[i] > maior)
            {
                maior = num[i];
            }
            if (num[i] < menor)
            {
                menor = num[i];
            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);

    return 0;
}