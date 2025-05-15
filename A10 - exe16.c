#include <stdio.h>

int recebeimprime() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    return num;
}



int main() {
  int a = recebeimprime();

 printf("Você digitou: %d\n", a);

    return 0;
}
