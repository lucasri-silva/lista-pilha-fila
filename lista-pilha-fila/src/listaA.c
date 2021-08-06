#include "listaA.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void LVaziaPar(ListaPar *l)
{
	l->primeiro = 0;
	l->ultimo = 0;
}

void LVaziaImpar(ListaImpar *l)
{
	l->primeiro = 0;
	l->ultimo = 0;
}

void gerarListaImpar(ListaImpar *l, Impar aux)
{
	time_t t;
	srand((unsigned) time(&t));
	
	while(l->ultimo < SIZE)
	{	
		aux.val = rand() % 100;
		if(aux.val % 2 != 0)
		{
			l->vet[l->ultimo] = aux;
			l->ultimo++;
		}
	}
}

void gerarListaPar(ListaPar *l, Par aux)
{
	time_t t;
	srand((unsigned) time(&t));
	
	while(l->ultimo < SIZE)
	{	
		aux.val = rand() % 100;
		if(aux.val % 2 == 0)
		{
			l->vet[l->ultimo] = aux;
			l->ultimo++;
		}
	}
}

void concatenar(ListaPar *par, ListaImpar *impar)
{
	printf("{");
	for(int i=0; i<SIZE; i++)
	{
		if(i == SIZE-1)
			printf("{%d,%d}", par->vet[i].val, impar->vet[i].val);
		else
			printf("{%d,%d},", par->vet[i].val, impar->vet[i].val);
	}
	printf("}\n");
}

void LImprimePar(ListaPar *l)
{
	printf("{");
	for(int i=l->primeiro; i<l->ultimo; i++)
	{
		if(i == l->ultimo-1)
			printf("%d", l->vet[i].val);
		else
			printf("%d,", l->vet[i].val);
	}
	printf("}\n\n");
}

void LImprimeImpar(ListaImpar *l)
{
	printf("{");
	for(int i=l->primeiro; i<l->ultimo; i++)
	{
		if(i == l->ultimo-1)
			printf("%d", l->vet[i].val);
		else
			printf("%d,", l->vet[i].val);
	}
	printf("}\n\n");
}
