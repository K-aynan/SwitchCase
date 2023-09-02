#include <stdio.h>

int main() {
    float peso, valorTotal;
    char codigo;

    printf("Digite o peso do produto (em kg): ");
    scanf("%f", &peso);

    if (peso < 100) {
        valorTotal = peso * 35.90;
    } else if (peso >= 100 && peso <= 200) {
        valorTotal = peso * 32.99;
    } else {
        valorTotal = peso * 29.99;
    }

    printf("Digite o codigo do usuario (A, B, C): ");
    scanf(" %c", &codigo);

    switch (codigo) {
        case 'A':
            valorTotal *= 0.91; 
            break;
        case 'B':
            valorTotal *= 0.89;
            break;
        case 'C':
            valorTotal -= 100.00;
            break;
        default:
            valorTotal *= 1.05; 
            valorTotal += 59.99;
    }

    printf("Valor total da compra: R$%.2f\n", valorTotal);

    return 0;
}

