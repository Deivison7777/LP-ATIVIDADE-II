#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int i;
    int numero1 = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Numero nao primo\n");
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                numero1= 1;
                
            }
        }

        if (numero1 == 0) {
            printf("Numero primo\n");
        } else {
            printf("Numero nao primo\n");
        }
    }

    return 0;
}

