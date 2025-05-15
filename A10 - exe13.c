#include <stdio.h>

int menor(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("O menor é: %d\n", menor(x, y));

    return 0;
}
