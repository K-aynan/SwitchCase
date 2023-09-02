#include <stdio.h>

int main() {
    int quantidade;
    char id;
    float preco, desconto, valorTotal, valorAPagar;

    float tabelaPrecos[] = {100.0, 150.0, 200.0, 250.0};
    float tabelaDescontos[] = {0.15, 0.19, 0.22, 0.25};

    printf("Digite a quantidade de produtos: ");
    scanf("%d", &quantidade);

    printf("Digite a identificacao do produto (A, B, C, D): ");
    scanf(" %c", &id);
    
    switch (id) {
        case 'A':
        case 'a':
            preco = tabelaPrecos[0];
            desconto = tabelaDescontos[0];
            break;
        case 'B':
        case 'b':
            preco = tabelaPrecos[1];
            desconto = tabelaDescontos[1];
            break;
        case 'C':
        case 'c':
            preco = tabelaPrecos[2];
            desconto = tabelaDescontos[2];
            break;
        case 'D':
        case 'd':
            preco = tabelaPrecos[3];
            desconto = tabelaDescontos[3];
            break;
        default:
            printf("Identificacao invalida. Preco considerado: R$0,00\n");
            preco = 0.0;
            desconto = 0.0;
    }

    valorTotal = preco * quantidade;
    valorAPagar = valorTotal - (valorTotal * desconto);

    printf("\nValor total: R$%.2f\n", valorTotal);
    printf("Valor a pagar: R$%.2f\n", valorAPagar);

    return 0;
}

