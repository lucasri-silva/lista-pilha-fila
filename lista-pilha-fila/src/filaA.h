#ifndef FILAA_H 
#define FILAA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

//FILA EXPANSAO BINOMIAL
typedef struct ItemExpansaoBinomio ItemExpansaoBinomio;
typedef struct BlockExpansaoBinomio BlockExpansaoBinomio;
typedef struct FilaExpansaoBinomio FilaExpansaoBinomio;

struct ItemExpansaoBinomio{
	int coefX;
	char x;
	int expoenteX;
	char sinal;
	char y;
	int expoenteY;
};

struct BlockExpansaoBinomio{
	ItemExpansaoBinomio data;
	BlockExpansaoBinomio *prox;
};

struct FilaExpansaoBinomio{
	BlockExpansaoBinomio *first;
	BlockExpansaoBinomio *last;
};

//FILA BINOMIAL
typedef struct ItemBinomio ItemBinomio;
typedef struct BlockBinomio BlockBinomio;
typedef struct FilaBinomio FilaBinomio;

struct ItemBinomio{
	char x;
	char y;
	int k;
	char sinal;
};

struct BlockBinomio{
	ItemBinomio data;
	BlockBinomio *prox;
};

struct FilaBinomio{
	BlockBinomio *first;
	BlockBinomio *last;
};

void FFVaziaExpansaoBinomio(FilaExpansaoBinomio *f);
void EnfileiraExpansaoBinomio(FilaExpansaoBinomio *feb, int coefX, char x, int expoenteX, char sinal, char y, int expoenteY);
void DesenfileiraExpansaoBinomio(FilaExpansaoBinomio *f, ItemExpansaoBinomio *d);
void FImprimeExpansaoBinomio(FilaExpansaoBinomio *f);

void binomioNewton(FilaBinomio *f);
int binomial(int k, int i);
void FFVaziaBinomio(FilaBinomio *f);
void EnfileiraBinomio(FilaBinomio *f, char x, char y, int k, char s);
void DesenfileiraBinomio(FilaBinomio *f, ItemBinomio *d);
void FImprimeBinomio(FilaBinomio *f);

void stopFA();

#endif
