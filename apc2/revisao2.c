#include <stdio.h>

int main () {
    float p1, p2, media;

    printf("P1: ");
    scanf("%f", &p1);
    printf("P2: ");
    scanf("%f", &p2);

    media = (p1 + p2)/2.0;

    if (media >= 5)
    {
        printf("Voce passou!");
    }
    if (media < 5)
    {
        printf("Voce reprovou!");
    }

    return 0;
}