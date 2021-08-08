#include "filaA.h"

void binomioNewton(FilaBinomio *f)
{
	char x = f->first->prox->data.x;
	char y = f->first->prox->data.y;
	int k = f->first->prox->data.k;
	char sinal = f->first->prox->data.sinal;
	int expoenteX=k;
	
	printf("(%c %c %c)^%d = ", x, sinal, y, k);
	for(int i=0; i <= k; i++)
	{
		if(i==k)
			printf("(%d%c**%d.%c**%d)", binomial(k, i), x, expoenteX, y, i);
		else{
			printf("(%d%c**%d.%c**%d)%c", binomial(k, i), x, expoenteX, y, i, sinal);
			expoenteX--;
		}
	}
	printf("\n");
}

int binomial(int k, int i)
{
	int factNumerador=1, factDenominador1=1, factDenominador2=1, resultado=0;

	if(k < 0)
		return 0;
	else{
		for(int j=1; j <= k; ++j)
			factNumerador *= j;
		for(int l=1; l <= i; l++)
			factDenominador1 *= l;//denominador 1ª parte
		for(int m=1; m <= (k-i); m++)
			factDenominador2 *= m;//denominador 2ª parte
	}
	resultado = factNumerador / (factDenominador1*factDenominador2);
	
	return resultado;
}

void FFVaziaExpansaoBinomio(FilaExpansaoBinomio *f)
{
	f->first = (BlockExpansaoBinomio*) malloc (sizeof(BlockExpansaoBinomio));
	f->last = f->first;
	f->first->prox = NULL;
}

void FFVaziaBinomio(FilaBinomio *f)
{
	f->first = (BlockBinomio*) malloc (sizeof(BlockBinomio));
	f->last = f->first;
	f->first->prox = NULL;
}

void EnfileiraExpansaoBinomio(FilaExpansaoBinomio *feb, int coefX, char x, int expoenteX, char sinal, char y, int expoenteY)
{//f, binomial(k, i), x, expoenteX, sinal, y, expoenteY
	feb->last->prox = (BlockExpansaoBinomio*) malloc (sizeof(BlockExpansaoBinomio));
	feb->last = feb->last->prox;
	feb->last->data.coefX = coefX;
	feb->last->data.x = x;
	feb->last->data.expoenteX = expoenteX;
	feb->last->data.sinal = sinal;
	feb->last->data.y = y;
	feb->last->data.expoenteY = expoenteY;
	feb->last->prox = NULL;
}

void EnfileiraBinomio(FilaBinomio *f, char x, char y, int k, char s)
{
	f->last->prox = (BlockBinomio*) malloc (sizeof(BlockBinomio));
	f->last = f->last->prox;
	f->last->data.x = x;
	f->last->data.y = y;
	f->last->data.k = k;
	f->last->data.sinal = s;
	f->last->prox = NULL;
}

/*void DesenfileiraExpansaoBinomio(FilaExpansaoBinomio *f, ItemExpansaoBinomio *d)*/
/*{*/
/*	BlockExpansaoBinomio *aux;*/

/*	if(f->first == f->last || f == NULL || f->first->prox == NULL){*/
/*		printf("FILA VAZIA!\n");*/
/*		return;*/
/*	}*/
/*	aux = f->first;*/
/*	f->first = f->first->prox;*/
/*	d->x = f->first->data.x;*/
/*	d->y = f->first->data.y;*/
/*	d->k = f->first->data.k;*/
/*	d->sinal = f->first->data.sinal;*/
/*	free(aux);*/
/*}*/

void DesenfileiraBinomio(FilaBinomio *f, ItemBinomio *d)
{
	BlockBinomio *aux;

	if(f->first == f->last || f == NULL || f->first->prox == NULL){
		printf("FILA VAZIA!\n");
		return;
	}
	aux = f->first;
	f->first = f->first->prox;
	d->x = f->first->data.x;
	d->y = f->first->data.y;
	d->k = f->first->data.k;
	d->sinal = f->first->data.sinal;
	free(aux);
}


void FImprimeExpansaoBinomio(FilaExpansaoBinomio *f)
{
	BlockExpansaoBinomio *aux;

	aux = f->first->prox;
	while(aux != NULL)
	{
		printf("%d\n", aux->data.coefX);
		printf("%c\n", aux->data.x);
		printf("%c\n", aux->data.expoenteX);
		printf("%c\n", aux->data.sinal);
		printf("%c\n", aux->data.y);
		printf("%d\n", aux->data.expoenteY);
		aux = aux->prox;
	}
}

void FImprimeBinomio(FilaBinomio *f)
{
	BlockBinomio *aux;

	aux = f->first->prox;
	while(aux != NULL)
	{
		printf("%c\n", aux->data.x);
		printf("%c\n", aux->data.y);
		printf("%d\n", aux->data.k);
		printf("%c\n", aux->data.sinal);
		aux = aux->prox;
	}
}

void stopFA()
{
	printf("\n\nSTOP");
	getchar();
}
