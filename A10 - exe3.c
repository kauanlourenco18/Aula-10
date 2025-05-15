#include <stdio.h>

void recebeimprime() {
    int num;
      printf("Digite um número inteiro: ");
      scanf("%d", &num);
      printf("O número digitado foi %d\n", num);
}
int main(void) {

recebeimprime();

    return 0;
}