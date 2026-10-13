#include <stdio.h>

int main() {
    float moeda, total = 0;
    char continuar;

    do {
        printf("Digite o valor da moeda (0.50, 1.00 ou 2.00): ");
        scanf("%f", &moeda);

        if (moeda == 0.5 || moeda == 1.0 || moeda == 2.0) {
            total += moeda;
        } else {
            printf("Moeda invalida!\n");
        }

        printf("Deseja adicionar outra moeda? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\nTotal acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}