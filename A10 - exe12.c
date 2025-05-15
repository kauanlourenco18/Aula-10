#include <stdio.h>

int maior(int x, int y) {
    if (x > y) {
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

    printf("O maior é: %d\n", maior(x, y));

    return 0;
}
