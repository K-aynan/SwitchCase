#include <stdio.h>

int main() {
	float pesoDoPrato, valorRefeicao, taxa, valorTotal;
	int opcao;
	
	printf("Digite o peso do prato montado (em quilos): ");
	scanf("%f", &pesoDoPrato);
	
	printf("\nEscolha uma opcao:\n");
	printf("1 - comer no local (taxa R$ 0,00)\n");
	printf("2 - levar para viagem (taxa R$ 7,00)\n");
	printf("Digite o numero da opcao: ");
	scanf("%d", &opcao);
	
	valorRefeicao = pesoDoPrato * 12.0;
	
	switch(opcao){
		case 1:
			taxa = 0.0;
			break;
		case 2:
			taxa = 7.0;
			break;
		default:
			printf("Opcao invalida. Taxa considerada: R$ 0,00\n");
			taxa = 0.0;
	}
	
	valorTotal = valorRefeicao + taxa;
	
	printf("\nValor da refeicao: R$%.2f\n", valorRefeicao);
	printf("Taxa: R$%.2f\n", taxa);
	printf("Valor total a pagar: R$%.2f\n", valorTotal);
	
	return 0;
}









