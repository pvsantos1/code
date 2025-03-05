#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("Numero par");
        } else {
            printf("Numero impar");
        }
    } else if (numero == 0) {
        printf("Numero é zero.");
    } else {
        printf("Numero negativo");
    }
}