#include <stdio.h>

int main() {
    int passosHora;
    int totalPassos = 0;
    int horas = 0;

    while (totalPassos < 10000) {
        horas++;

        printf("Passos dados na hora %d: ", horas);
        scanf("%d", &passosHora);

        totalPassos += passosHora;

        printf("Total acumulado: %d passos\n\n", totalPassos);
    }

    printf("Meta atingida!\n");
    printf("Total de passos: %d\n", totalPassos);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}