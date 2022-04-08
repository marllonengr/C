#include <stdio.h>

int main() {
    float n1, n2;
    float media;
    printf("Nota 1:");
    scanf("%f\n", &n1);
    printf("Nota 2:");
    scanf("%f\n", &n2);
    media = (n1 + n2)/2;
    printf("Sua media eh: %2.f", media);
}