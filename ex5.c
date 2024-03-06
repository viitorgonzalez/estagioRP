#include <stdio.h>

void inverteString(char s[]) {
    int aux = 4;
    char sReverse[5];

    for(int i = 0; i < 5; i++) {
        sReverse[i] = s[aux];
        aux--;
    }

    for(int i = 0; i < 5; i++) {
        s[i] = sReverse[i];
    }
}

int main() {
    char string[6] = "vitor"; // Tamanho é 6 pois o \0 é contabilizado

    inverteString(string);

    printf("%s\n", string);

    return 0;
}
