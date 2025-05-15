#include "igualdade.h"

int sao_iguais(int a, int b) {
    if (a == b) {
        return 1;
    }
    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int menor(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}
