#include <stdio.h>
#include "util.h"  

int main() {
    double r;

    printf("Digite o raio: ");
    scanf("%lf", &r);

    printf("Diâmetro: %.2lf\n", diametro(r));
    printf("Circunferência: %.2lf\n", circunferencia(r));
    printf("Área: %.2lf\n", area(r));

    return 0;
}
