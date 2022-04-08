#include <stdio.h>
#include <math.h>

int main() {
    int num;
    float raiz;
    printf("Numero: ");
    scanf("%d", &num);

    raiz = sqrt(num);
    printf("Dobro: %d, Tripo: %d, Raiz: %2.f", num * 2, num * 3, raiz);
}