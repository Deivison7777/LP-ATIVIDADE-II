#include <stdio.h>
#include <stdlib.h>

int main () {
    int loja;

    printf ("\n 1110 - camiseta ");
    printf ("\n 2110 - calça ");
    printf ("\n 3110 - sapato\n");
    printf("informe o codigo do item que deseja: ");
    scanf ("%d",&loja);

    switch (loja)
    {
    case 1110:
        printf("Item selecionado -> camiseta \n");
        printf ("O item custa:R$ 60 ");
        break;
    case 2110:
        printf("Item selecionado -> calça \n");
        printf ("O item custa:R$ 100 ");
        break;
    case 3110:
        printf("Item selecionado -> sapato \n");
        printf ("O item custa:R$ 90 ");
        break;
    default:
        printf("Invalido! \n");
        break;
    }


    return 0;
}
