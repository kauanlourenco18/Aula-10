#include <stdio.h>

void imprimeSoma(int soma) {
    printf("O resultado da soma é: %d\n", soma);
}

int main() {
    int a = 10;
    int b = 5;
    int resultado = a + b;

    imprimeSoma(resultado);

    return 0;
}
