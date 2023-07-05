#include <stdio.h>
#include <locale.h>

int main(){
	
	int opcao;
	float estoque1, estoque2, valor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("|                 SISTEMA JATIBOCA-PONTAL                          | \n");
	printf("Entre com o estoque inicial de açúcar em kg da empresa 1 - Jatiboca: \n");
	scanf("%f", &estoque1);
	printf("Entre com o estoque inicial de açúcar em kg da empresa 2 - Pontal: \n");
	scanf("%f", &estoque2);
	
	do{
		printf("\n---------------------------------------\n");
		printf("\n O que deseja fazer: \n 1 - Entrada de Estoque \n 2 - Saída de Estoque \n 3 - Transferência de Estoque \n 4 - Consulta Estoque \n 5 – Finalizar \n");
		printf("Opção: ");
		scanf("%i", &opcao);

	
		switch(opcao){
			
			case 1:
				printf("\nQual empresa: \n 1 - Jatiboca \n 2 - Pontal \n");
				printf("Opção: ");
				scanf("%i", &opcao);
				if (opcao == 1){
					printf("\nQual a quantidade de Entrada de açúcar em Jatiboca? ");
					scanf("%f", &valor);
					estoque1 = valor + estoque1;
					printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
				}
				else if(opcao==2){
					printf("\nQual a quantidade de Entrada de açúcar em Pontal? ");
					scanf("%f", &valor);
					estoque2 = valor + estoque2;
					printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);		
				}
				else
			   		printf("Opçao inválida, digite o número 1 ou 2 \n "); 
			break;
			
			case 2:
				printf("\nQual empresa: \n 1 - Jatiboca \n 2 - Pontal \n");
				printf("Opção: ");
				scanf("%i", &opcao);
				
					if(opcao == 1){
						printf("\nQual a quantidade de Saída de açúcar em Jatiboca? \n");
						scanf("%f", &valor);
						if (valor > estoque1){
							printf("Não é possível realizar a saída, pois o valor é superior ao do estoque \n");
						}
						else{
							estoque1 = estoque1 - valor;
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
						}
					}	
					else if(opcao == 2){
						printf("\nQual a quantidade de Saída de açúcar em Pontal? \n");
						scanf("%f", &valor);
						if (valor > estoque2){
							printf("Não é possível realizar a saída, pois o valor é superior ao do estoque \n");
						}
						else{
							estoque2 = estoque2 - valor;
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);
						}
					}
					else
			   			printf("Opçao inválida, digite o número 1 ou 2 \n "); 
			break;
			
			case 3:
				printf("\nQual empresa: \n 1 - Jatiboca --> Pontal \n 2 - Pontal --> Jatiboca \n");
				printf("Opção: ");
				scanf("%i", &opcao);
				
					if(opcao == 1){
						printf("\nQuantidade de transferência de açúcar - Jatiboca para Pontal: \n");
						scanf("%f", &valor);
						if (valor > estoque1){
							printf("\nImpossível transferir de Jatiboca para Pontal, estoque insuficiente! \n");
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);	
						}
						else{
							estoque1 = estoque1 - valor;
							estoque2 = estoque2 + valor;
							printf("\nTransferência realizada!!! \n");
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);	
						}

					}	
					else if(opcao == 2){
						printf("\nQuantidade de transferência de açúcar - Pontal para Jatiboca: \n");
						scanf("%f", &valor);
						
						if (valor > estoque2){
							printf("\nImpossível transferir de Pontal para Jatiboca, estoque insuficiente! \n");
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);	
						}
						else{
							estoque2 = estoque2 - valor;
							estoque1 = estoque1 + valor;
							printf("\nTransferência realizada!!! \n");
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);	
						}
					}
					else
			   			printf("Opçao inválida, digite o número 1 ou 2\n "); 
			break;
			
			case 4:
				printf("Estoque em Jatiboca: %.2f kg\n", estoque1);
				printf("Estoque em Pontal: %.2f kg \n", estoque2);
			break;
			
			case 5:
				printf("Finalizado. Bom dia e um bom trabalho!!");
			break;
			
			default:
				printf("Opção inválida, digite um número de 1 a 5!");
		}
	}while(opcao != 5);
		
}
