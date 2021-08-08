#include "listaB.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void LAVazia(ListaA *l)
{
	l->primeiro = 0;
	l->ultimo = 0;
}

void LBVazia(ListaB *l)
{
	l->primeiro = 0;
	l->ultimo = 0;
}

void tamanhoLista()
{
	srand(time(NULL));
	int n=0;
	do{
		printf("Entre o tamanho da lista (1-3): ");
		scanf("%d", &n);
		while ((getchar()) != '\n');
		sizeVet = n;
	}while(n < 1 || n > 3);
}

void LAInserir(ListaA *l)
{	
	l->ptr = (int*)calloc(sizeVet, sizeof(int));
	
	for(int i=0; i<sizeVet; i++)	
	{
		l->ptr[i] = rand() % 13 + 1;
		l->ultimo++;
	}
}

void LBInserir(ListaB *l)
{	
	l->ptr = (int*)calloc(sizeVet, sizeof(int));
	
	for(int i=0; i<sizeVet; i++)	
	{
		l->ptr[i] = rand() % 13 + 1;
		l->ultimo++;
	}
}

void concatenarLALB(ListaA *LA, ListaB *LB)
{
	printf("Lista concatenada: {");
	for(int i=0; i<sizeVet; i++)
	{
		if(i == sizeVet-1)
			printf("{%d,%d}", LA->ptr[i], LB->ptr[i]);
		else
			printf("{%d,%d},", LA->ptr[i], LB->ptr[i]);
	}
	printf("}\n");
}

void subtrairValorAleatorio(ListaA *LA, ListaB *LB)
{
	for(int i=0; i<sizeVet; i++)
	{
		LA->ptr[i] = LA->ptr[i] - valorAleatorio;
		LB->ptr[i] = LB->ptr[i] - valorAleatorio;
	}
}

void gerarValorAleatorio()
{
	valorAleatorio = rand() % 13 + 1;
	printf("Valor Aleatório: %d\n", valorAleatorio);
}

void LAImprime(ListaA *l)
{
	printf("Lista A: {");
	for(int i=l->primeiro; i<l->ultimo; i++)
	{
		if(i == l->ultimo-1)
			printf("%d", l->ptr[i]);
		else
			printf("%d,", l->ptr[i]);
	}
	printf("}\n");
}

void LBImprime(ListaB *l)
{
	printf("Lista B: {");
	for(int i=l->primeiro; i<l->ultimo; i++)
	{
		if(i == l->ultimo-1)
			printf("%d", l->ptr[i]);
		else
			printf("%d,", l->ptr[i]);
	}
	printf("}\n");
}

void somaElementos(ListaA *LA, ListaB *LB)
{
	int somaLA=0, somaLB=0;
	for(int i=0; i<sizeVet; i++)
	{
		somaLA = somaLA + LA->ptr[i];
		somaLB = somaLB + LB->ptr[i];
	}
	if(somaLA > somaLB)
		printf("\nLista 1 é a vencedora!\nSoma final = %d\n", somaLA);
	else if(somaLA == somaLB)
		printf("\nEmpate! Lista 1 e Lista 2 tem a mesma soma final. Soma = %d\n", somaLB);
	else
		printf("\nLista 2 é a vencedora!\nSoma final = %d\n", somaLB);
}

void stopLB()
{
	printf("\n\nPressione qualquer tecla para continuar...");
	getchar();
	system("cls||clear");
}
