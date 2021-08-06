#include "listaMain.h"
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
				{
					listaB();
					stop();
				}
				else if(opcao == 3)
				{
					listaC();
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default:
				on=false;
		}
	}while(on);
	
	return 0;
}
