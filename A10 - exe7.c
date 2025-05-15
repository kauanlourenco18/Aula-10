#include <stdio.h>

void circunferencia(double r) {
    double d = (3.1416 * 2) * r;
    printf("A circunferência é: %.2lf\n", d);
    }

int main() {
    double r;

    printf("Digite o raio: ");
    scanf("%lf", &r);

    circunferencia(r);

    return 0;
    }
