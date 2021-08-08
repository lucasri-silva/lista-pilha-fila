#include "pilhaC.h"

void gerarValoresPC(PilhaPC *p, ItemPC d)
{
	time_t t;
	srand((unsigned) time(&t));
	
	while(p->top < MAXTAMPC)
	{
		d.val = rand() % 99 + 1;
		PUSHPC(p, d);
	}
}

void calcularFatores(PilhaPC *p, int numero)
{
	int indice=-1, i=2;
	int valorInicial = numero;
	while(numero != 1 || numero == valorInicial)
	{
		if(numero % i == 0)
		{
			numero = numero / i;
			indice++;
			p->fatores[indice] = i;
		}
		else
			i++;
	}
	indice++;
	p->fatores[indice] = -1;
}

void coprimos(PilhaPC *p, ItemPC d)
{
	int z, numero, numCoprimos;
	bool Ecoprimo;
	for(int i=p->top-1; i>=p->base; i--)
	{
		numero = p->vet[i].val;
		calcularFatores(p, numero);
		numCoprimos=0;
		if(p->fatores[1] != -1)//se p->fatores[1] != -1 entao o numero é primo, logo os coprimos serao todos os numeros que o antecede
		{
			for(int j=2; j <= p->vet[i].val-1; j++)
			{	
				z=0;
				Ecoprimo=true;
				while(p->fatores[z] != -1)
				{
					if(j % p->fatores[z] == 0)
					{
						Ecoprimo=false;
						break;
					}
					else
						z++;
				}
				if(Ecoprimo)
				{
					p->coprimos[numCoprimos] = j;
					numCoprimos++;
				}
			}
			imprimeFatores(p);
			imprimeCoprimos(p, numCoprimos);
		}
		else{
			imprimeFatores(p);
			printf("\nCoprimos de %d: 1 ", p->vet[p->top-1].val);
			for(int i=2; i < p->vet[p->top-1].val; i++)
				printf("%d ", i);
		}
		POPPC(p, &d);
	}
	printf("\n");
}

void imprimeCoprimos(PilhaPC *p, int numCoprimos)
{
	printf("\nCoprimos de %d: 1 ", p->vet[p->top-1].val);
	for(int i=0; i < numCoprimos; i++)
	{
		printf("%d ", p->coprimos[i]);
	}
}

void imprimeFatores(PilhaPC *p)
{
	printf("\n\nFatores de %d: ", p->vet[p->top-1].val);
	for(int i=0; p->fatores[i] != -1; i++)
		printf("%d ", p->fatores[i]);
}

void POPPC(PilhaPC *p, ItemPC *d)
{
	if(p->base == p->top)
		printf("PILHA VAZIA!\n");
	else{
		p->top --;
		*d = p->vet[p->top];
	}
}

void FPVaziaPC(PilhaPC *p)
{
	p->top   = 0;
	p->base  = 0;
}


void PUSHPC(PilhaPC *p, ItemPC d)
{
	if (p->top >= MAXTAMPC)
	{
		printf("PilhaPC CHEIA!\n");
	}else{
		p->vet[p->top] = d;
		p->top ++;
	}
}

void PImprimePC(PilhaPC *p)
{
	for(int i=p->top-1; i>=p->base; i--)
		printf("%d\n", p->vet[i].val);
	printf("\n");
}
