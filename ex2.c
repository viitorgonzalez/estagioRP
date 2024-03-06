#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;

    if(n == 0 || n == 1) return 1;

    while(b < n) {
        c = a + b;

        if(c == n) return 1;

        a = b;
        b = c;
    }
    return 0;
}

int main() {
    int n = 17; // Definição do número (17 não pertence)

    (fibonacci(n)) ? printf("%d pertence a sequência\n", n) : printf("%d não pertence a sequência\n", n);

    return 0;
}
