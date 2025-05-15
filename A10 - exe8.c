#include <stdio.h>

void area (double r) {
printf("Digite o raio: ");
scanf("%lf", &r);

double a;
a = 3.1416 * (r * r);
printf("A área é: %.2lf\n", a);

}


int main() {
  double r;

  area (r);

    return 0;
}