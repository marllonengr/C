#include<stdio.h>

int main()
{
    int x, y, primo, contagem = 0;

    printf("Numero: ");
    scanf("%d", &x);
    printf("Numero: ");
    scanf("%d", &y);

    for (x;x<=y;x++)
    {
        // Chamar função que checa se é primo.
        primo = primos(x);
        if (primo == 1)
        {
            contagem++;
        }
    }
    printf("%d", contagem);

    return 0;
}

int primos(int x)
{
    int i;
    for (i=2; i<x; i++)
    {
        if ((x % i) == 0)
        {
            return 0; // return 0 indica que não é primo
        }
    }
    return 1; // return 1 indica que é primo
}