#include <stdio.h>

int main() {
    char produtos[4][50] = {
        "Smartphone",
        "Notebook",
        "TV",
        "Fones de Ouvido"
    };

    float precos[4] = {1000.0, 1500.0, 800.0, 100.0};

    int codigo, quantidade;
    printf("Modelos de Produtos Eletronicos:\n");
    printf("1 - %s - R$%.2f\n", produtos[0], precos[0]);
    printf("2 - %s - R$%.2f\n", produtos[1], precos[1]);
    printf("3 - %s - R$%.2f\n", produtos[2], precos[2]);
    printf("4 - %s - R$%.2f\n", produtos[3], precos[3]);

    printf("Digite o codigo do produto (1-4): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo < 1 || codigo > 4) {
        printf("Codigo de produto invalido. Valor total: R$0.00\n");
        return 0;
    }

    float valorTotal = precos[codigo - 1] * quantidade;
    float valorAPagar = valorTotal;

    int opcao;
    printf("Opcoes de pagamento:\n");
    printf("1 - Parcelado em 3x sem juros\n");
    printf("2 - Parcelado em 6x sem juros\n");
    printf("3 - Parcelado em 9x com juros de 17%%\n");
    printf("Digite a opcao de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            valorAPagar *= 1.17; 
            break;
        default:
            printf("Opcao de pagamento invalida. ");
    }

    printf("Valor total: R$%.2f\n", valorTotal);
    printf("Valor a pagar: R$%.2f\n", valorAPagar);

    return 0;
}

