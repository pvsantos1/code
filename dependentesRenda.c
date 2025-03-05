#include <stdio.h>

int main() {

    int idade, dependentes;
    float renda;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Renda mensal: ");
    scanf("%f", &renda);

    printf("Dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65) {
        if (renda < 3000) {
            if (dependentes > 2) {
                printf("Você atende a todos os criterios");
            } else {
                printf("Você não atende ao criterio dependentes");
            }
        } else {
            printf("Você não atende aos criterios de renda");
        }
    } else {
        printf("Você não atende aos criterios de idade");
    }
}