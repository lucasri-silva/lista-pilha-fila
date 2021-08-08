#ifndef PILHAC_H 
#define PILHAC_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define MAXTAMPC 20

typedef struct ItemPC{
	int val;
}ItemPC;

typedef struct PilhaPC{
	ItemPC vet[MAXTAMPC];
	int fatores[MAXTAMPC];
	int coprimos[99];
	int top;
	int base;
}PilhaPC;

void FPVaziaPC(PilhaPC *p);
void PUSHPC(PilhaPC *p, ItemPC d);
void POPPC(PilhaPC *p, ItemPC *d);
void PImprimePC(PilhaPC *p);
void gerarValoresPC(PilhaPC *p, ItemPC d);

void coprimos(PilhaPC *p, ItemPC d);
void calcularFatores(PilhaPC *p, int numero);
void imprimeCoprimos(PilhaPC *p, int numCoprimos);
void imprimeFatores(PilhaPC *p);

#endif
