#include "listaMain.h"
#include "pilhaMain.h"
#include "filaMain.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{	
	system("cls||clear");
	int opcao;
	bool on=true;
	
	do{
		system("cls||clear");
		printf("1. Problema 1: Listas\n2. Problema 2: Pilhas\n3. Problema 3: Filas\n4. Sair\n\nEscolha uma opção: ");
		scanf("%d", &opcao);
		while((getchar() != '\n'));
		switch(opcao)
		{
			case 1:
				system("cls||clear");
				printf("PROBLEMAS LISTA:\n1. Problema A\n2. Problema B\n3. Problema C\n\nEscolha uma opção: ");
				scanf("%d", &opcao);
				while((getchar() != '\n'));
				if(opcao == 1)
				{
					listaA();
					stop();
				}
				else if(opcao == 2)
					listaB();
				else if(opcao == 3)
					listaC();
				break;
			case 2:
				system("cls||clear");
				printf("PROBLEMAS PILHA:\n1. Problema A\n2. Problema B\n3. Problema C\n\nEscolha uma opção: ");
				scanf("%d", &opcao);
				while((getchar() != '\n'));
				if(opcao == 1)
				{
					pilhaA();
					stop();
				}
/*				else if(opcao == 2)*/
/*				{*/
/*					pilhaB();*/
/*					stop();*/
/*				}*/
				else if(opcao == 3)
				{
					pilhaC();
					stop();
				}
				break;
			case 3:
				system("cls||clear");
				printf("PROBLEMAS FILA:\n1. Problema A\n2. Problema B\n\nEscolha uma opção: ");
				scanf("%d", &opcao);
				while((getchar() != '\n'));
				if(opcao == 1)
				{
					filaA();
					stop();
				}
/*				else if(opcao == 2)*/
/*				{*/
/*					//pilhaB();*/
/*					//stop();*/
/*				}*/
				break;
			default:
				on=false;
		}
	}while(on);
	
	return 0;
}
