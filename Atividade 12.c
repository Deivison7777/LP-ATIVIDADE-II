#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int quantidadeNota;
    float nota;
    float soma = 0.0;
    float media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNota);

    for ( i = 1; i <= quantidadeNota; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidadeNota;

    printf("A media e: %.2f\n", media);

    return 0;
}
