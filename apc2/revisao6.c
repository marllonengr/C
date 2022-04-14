/*
Construa uma função que receba por parâmetro 2 números e retorne 1 caso o primeiro seja maior
que o segundo e retorne 2 caso o segundo seja maior que o primeiro.
Na sua função principal, leia 2 números e utilizando a função criada, mostre na tela
qual dos 2 números lidos é o maior
*/

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Numero: \n");
    scanf("%d", &n1);
    printf("Numero: \n");
    scanf("%d", &n2);

    printf("%d", maior(n1, n2));
    return 0;
}

int maior(int n1, int n2)
{
    if (n1 > n2)
    {
        return 1;
    }
    else {
        return 2;
    }
}