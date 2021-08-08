#ifndef PILHAA_H 
#define PILHAA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAXTAM 50

typedef struct Item{
	char val;
}Item;

typedef struct PilhaParenteses{
	Item vet[MAXTAM];
	int top;
	int base;
}PilhaParenteses;

void FPVazia(PilhaParenteses *p);
void PUSH(PilhaParenteses *p, Item d);
void POP(PilhaParenteses *p, Item *d);
void PImprime(PilhaParenteses *p);
void parentizacao(PilhaParenteses *p, Item aux);
void stopPA();

#endif
