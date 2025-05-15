#include <stdio.h>

void recebesoma() {
    int n1, n2, soma = 0;
      printf("Digite o primeiro inteiro: ");
        scanf("%d", &n1);
      printf("Digite o segundo inteiro: ");
        scanf("%d", &n2);
     soma = n1 + n2;
        printf("Resultado: %d\n", soma);
}
int main(void) {

recebesoma();

    return 0;
}