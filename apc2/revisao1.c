#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if ((idade % 2) == 0)
    {
        printf("Idade par!\n");
    } else {
        printf("Idade impar!\n");
    }

    return 0;
}