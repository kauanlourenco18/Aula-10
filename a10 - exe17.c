#include <stdio.h>
#include "igualdade.h"

int main() {
    int n1, n2, n3;
    int maior_entre_tres;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    maior_entre_tres = maior(maior(n1, n2), n3);

    printf("Maior: %d\n", maior_entre_tres);

    return 0;
}
