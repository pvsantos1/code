#include <stdio.h>

int main() {
    //multiplas variaveis
    /*
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    */

    //Condições multiplas
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}