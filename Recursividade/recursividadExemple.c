#include <stdio.h>

void recursiveLoop(int n) {
    if (n > 0) {
        recursiveLoop(n - 1);
        printf("%d\n", n);
    }
}

int main() {
    int number = 10;
    printf("Contagem regressiva... \n");
    recursiveLoop(number);
}