#include <stdio.h>

double diametro(double r) {
    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);

    double d = r * 2;
    printf("O diametro é: %.2f\n", d);

    }

int main() {
    double r;

    diametro(r);

    return 0;
    }