#include <stdio.h>

int igual(int x, int y) {
    if (x == y) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (igual(x, y)) {
        printf("Os números são iguais.\n");
    } else {
        printf("Os números são diferentes.\n");
    }

    return 0;
}
