#include <stdio.h>


int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while(K < INDICE) {
        K++;

        SOMA += K;
    }

    // Ao final do processamento o resultado de soma será 91
    printf("Valor de soma: %d", SOMA);

    return 0;
}
