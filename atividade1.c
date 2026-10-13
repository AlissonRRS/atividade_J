#include <stdio.h>

int main() {
    float consumo, soma = 0, media;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo de agua do morador %d (m³): ", i);
        scanf("%f", &consumo);

        soma += consumo;

        if (consumo <= 20) {
            printf("Consumo dentro da media.\n\n");
        } else {
            printf("Consumo acima da media.\n\n");
        }
    }

    media = soma / 5;

    printf("Consumo medio geral: %.2f m³\n", media);

    return 0;
}