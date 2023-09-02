#include <stdio.h>

int main() {
    int codigo, quantidade;
    float valorTotal, valorAPagar;

    printf("Menu de Opcoes:\n");
    printf("1 - Produto A - R$10.00\n");
    printf("2 - Produto B - R$15.00\n");
    printf("3 - Produto C - R$20.00\n");
    
    printf("Digite o codigo do produto (1-3): ");
    scanf("%d", &codigo);

    if (codigo < 1 || codigo > 3) {
        printf("Codigo de produto invalido.\n");
        return 0;
    }

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 1:
            valorTotal = 10.00 * quantidade;
            break;
        case 2:
            valorTotal = 15.00 * quantidade;
            break;
        case 3:
            valorTotal = 20.00 * quantidade;
            break;
    }

    int opcao;
    printf("Opcoes de pagamento:\n");
    printf("1 - Parcelado em 3x sem juros\n");
    printf("2 - Parcelado em 6x sem juros\n");
    printf("3 - Parcelado em 9x com juros de 17%%\n");
    printf("Digite a opcao de pagamento: ");
    scanf("%d", &opcao);

    if (opcao == 1 || opcao == 2 || opcao == 3) {
        valorAPagar = valorTotal;
        if (opcao == 3) {
            valorAPagar *= 1.17;
        }
    } else {
        printf("Opcao de pagamento invalida.\n");
        return 0;
    }

    printf("Valor total: R$%.2f\n", valorTotal);
    printf("Valor a pagar: R$%.2f\n", valorAPagar);

    return 0;
}

