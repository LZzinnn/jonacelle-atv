#include <stdio.h>

int main() {
    float moeda, total = 0;

    do {
        printf("Digite 0.50, 1.00 ou 2.00 (0 para parar): ");
        scanf("%f", &moeda);

        if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00)
            total += moeda;

    } while (moeda != 0);

    printf("Total acumulado: R$ %.2f\n", total);

    return 0;
}