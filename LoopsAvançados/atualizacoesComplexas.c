#include <stdio.h>

int main() {

    for (int i = 0; i < 100; i+= (i % 2 == 0) ? 1 : 2) {//Se o resto da divisao de i por 2 for = 0 incrementa 1 senão incrementa 2
        printf("%d ", i);
    }
}