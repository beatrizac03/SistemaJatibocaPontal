#include <stdio.h>
#include <locale.h>

int main(){
	
	int opcao;
	float estoque1, estoque2, valor;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("|                 SISTEMA JATIBOCA-PONTAL                          | \n");
	printf("Entre com o estoque inicial de a��car em kg da empresa 1 - Jatiboca: \n");
	scanf("%f", &estoque1);
	printf("Entre com o estoque inicial de a��car em kg da empresa 2 - Pontal: \n");
	scanf("%f", &estoque2);
	
	do{
		printf("\n---------------------------------------\n");
		printf("\n O que deseja fazer: \n 1 - Entrada de Estoque \n 2 - Sa�da de Estoque \n 3 - Transfer�ncia de Estoque \n 4 - Consulta Estoque \n 5 � Finalizar \n");
		printf("Op��o: ");
		scanf("%i", &opcao);

	
		switch(opcao){
			
			case 1:
				printf("\nQual empresa: \n 1 - Jatiboca \n 2 - Pontal \n");
				printf("Op��o: ");
				scanf("%i", &opcao);
				if (opcao == 1){
					printf("\nQual a quantidade de Entrada de a��car em Jatiboca? ");
					scanf("%f", &valor);
					estoque1 = valor + estoque1;
					printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
				}
				else if(opcao==2){
					printf("\nQual a quantidade de Entrada de a��car em Pontal? ");
					scanf("%f", &valor);
					estoque2 = valor + estoque2;
					printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);		
				}
				else
			   		printf("Op�ao inv�lida, digite o n�mero 1 ou 2 \n "); 
			break;
			
			case 2:
				printf("\nQual empresa: \n 1 - Jatiboca \n 2 - Pontal \n");
				printf("Op��o: ");
				scanf("%i", &opcao);
				
					if(opcao == 1){
						printf("\nQual a quantidade de Sa�da de a��car em Jatiboca? \n");
						scanf("%f", &valor);
						if (valor > estoque1){
							printf("N�o � poss�vel realizar a sa�da, pois o valor � superior ao do estoque \n");
						}
						else{
							estoque1 = estoque1 - valor;
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
						}
					}	
					else if(opcao == 2){
						printf("\nQual a quantidade de Sa�da de a��car em Pontal? \n");
						scanf("%f", &valor);
						if (valor > estoque2){
							printf("N�o � poss�vel realizar a sa�da, pois o valor � superior ao do estoque \n");
						}
						else{
							estoque2 = estoque2 - valor;
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);
						}
					}
					else
			   			printf("Op�ao inv�lida, digite o n�mero 1 ou 2 \n "); 
			break;
			
			case 3:
				printf("\nQual empresa: \n 1 - Jatiboca --> Pontal \n 2 - Pontal --> Jatiboca \n");
				printf("Op��o: ");
				scanf("%i", &opcao);
				
					if(opcao == 1){
						printf("\nQuantidade de transfer�ncia de a��car - Jatiboca para Pontal: \n");
						scanf("%f", &valor);
						if (valor > estoque1){
							printf("\nImposs�vel transferir de Jatiboca para Pontal, estoque insuficiente! \n");
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);	
						}
						else{
							estoque1 = estoque1 - valor;
							estoque2 = estoque2 + valor;
							printf("\nTransfer�ncia realizada!!! \n");
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);	
						}

					}	
					else if(opcao == 2){
						printf("\nQuantidade de transfer�ncia de a��car - Pontal para Jatiboca: \n");
						scanf("%f", &valor);
						
						if (valor > estoque2){
							printf("\nImposs�vel transferir de Pontal para Jatiboca, estoque insuficiente! \n");
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);	
						}
						else{
							estoque2 = estoque2 - valor;
							estoque1 = estoque1 + valor;
							printf("\nTransfer�ncia realizada!!! \n");
							printf("Estoque atualizado em Pontal = %.2f kg \n", estoque2);
							printf("Estoque atualizado em Jatiboca = %.2f kg \n", estoque1);	
						}
					}
					else
			   			printf("Op�ao inv�lida, digite o n�mero 1 ou 2\n "); 
			break;
			
			case 4:
				printf("Estoque em Jatiboca: %.2f kg\n", estoque1);
				printf("Estoque em Pontal: %.2f kg \n", estoque2);
			break;
			
			case 5:
				printf("Finalizado. Bom dia e um bom trabalho!!");
			break;
			
			default:
				printf("Op��o inv�lida, digite um n�mero de 1 a 5!");
		}
	}while(opcao != 5);
		
}
