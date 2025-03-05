#include <stdio.h>

int main () {

    int idade;
    float rendaMensal;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: ");
    scanf("%f", &rendaMensal);

    if (idade <= 18 || idade >= 60) {
        if (rendaMensal < 2000) {
            printf("Você tem direito ao desconto!\n");
        } else {
            printf("Você não tem direito ao desconto devido a renda");
        }
    } else {
        printf("Você não tem direito ao desconto devido a idade");
    }
}