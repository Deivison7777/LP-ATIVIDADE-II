#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorCompra;
    char diaSemana;
    float desconto = 0.0;
    float valorTotal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o dia da semana (1 para dia de semana, 2 para fim de semana): ");
    scanf(" %c", &diaSemana);



    if (valorCompra > 100.00) {
        if (diaSemana == '1' ) {
            desconto = valorCompra * 0.10;
        }
        if (diaSemana == '2' ) {
            desconto = valorCompra * 0.15;
        }
    }

    valorTotal = valorCompra - desconto;

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}
