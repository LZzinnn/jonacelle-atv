#include <stdio.h>

int main() {
    float nota, soma = 0, media;

    for (int i = 1; i <= 10; i++) {
        printf("Nota do cliente %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 10;

    printf("Media: %.2f\n", media);

    if (media < 7)
        printf("ALERTA!\n");

    return 0;
}