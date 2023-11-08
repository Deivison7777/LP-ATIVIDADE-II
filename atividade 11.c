#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char codigoCorreto[]= "7777";
    char codigo[20];  

    while (1) {  
        printf("Digite o código de acesso: ");
        scanf("%s", codigo);

        if (strcmp(codigo, codigoCorreto) == 0) {
            printf("Acesso concedido!\n");
            break;  
        } else {
            printf("Código de acesso incorreto. Tente novamente...\n");
        }
    }

    return 0;
}
