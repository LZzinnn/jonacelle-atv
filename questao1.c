#include <stdio.h>

int main() {
    float consumo, total = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Consumo do morador %d: ", i);
        scanf("%f", &consumo);

        total += consumo;

        if (consumo <= 20)
            printf("Dentro da media\n");
        else
            printf("Acima da media\n");
    }

    printf("Media geral: %.2f m3\n", total / 5);

    return 0;
}