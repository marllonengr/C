#include <stdio.h>

int main() {
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    printf("%d e %d", num-1, num+1);
}