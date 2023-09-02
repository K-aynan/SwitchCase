#include <stdio.h>

int main() {
    char pratos[5][50] = {
        "Arroz, Feijao, Frango",
        "Arroz, Feijao, Carne",
        "Arroz, Feijao, Peixe",
        "Massa com Molho",
        "Salada Variada"
    };
    
    float precos[5] = {10.0, 12.0, 15.0, 8.0, 6.0};
    
    int codigo, quantidade;
    printf("Cardapio:\n");
    printf("1 - %s - R$%.2f\n", pratos[0], precos[0]);
    printf("2 - %s - R$%.2f\n", pratos[1], precos[1]);
    printf("3 - %s - R$%.2f\n", pratos[2], precos[2]);
    printf("4 - %s - R$%.2f\n", pratos[3], precos[3]);
    printf("5 - %s - R$%.2f\n", pratos[4], precos[4]);
    
    printf("Digite o codigo do prato (1-5): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    
    if (codigo < 1 || codigo > 5) {
        printf("Codigo de prato invalido. Valor total: R$0.00\n");
        return 0;
    }
    
    float valorTotal = precos[codigo - 1] * quantidade;
    float valorAPagar = valorTotal;
    
    int opcao;
    printf("Opcoes de pagamento:\n");
    printf("1 - Cartao de credito (+5%% de taxa)\n");
    printf("2 - Cartao de debito (+3%% de taxa)\n");
    printf("3 - Dinheiro (-5%% de desconto)\n");
    printf("Digite a opcao de pagamento: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            valorAPagar *= 1.05;
            break;
        case 2:
            valorAPagar *= 1.03;
            break;
        case 3:
            valorAPagar *= 0.95;
            break;
        default:
            printf("Opcao de pagamento invalida. ");
    }
    
    printf("Valor total: R$%.2f\n", valorTotal);
    printf("Valor a pagar: R$%.2f\n", valorAPagar);
    
    return 0;
}

