#include "pilhaA.h"

void parentizacao(PilhaParenteses *p, Item aux)
{
	char expressao[100];
	int posicaoAnterior=-1;
	
	printf("Entre a expressão aritmética:\n\n");
	scanf("%s", expressao);
	while((getchar() != '\n'));
	for(int i=0; i < ((int)strlen(expressao)); i++)
	{
		if(expressao[i] == '(' || expressao[i] == ')')
		{
			aux.val = expressao[i];
			if(posicaoAnterior >= 0 && aux.val == ')' && p->vet[posicaoAnterior].val == '(')
			{
				POP(p, &aux);
				posicaoAnterior--;
			}
			else{
				PUSH(p, aux);
				posicaoAnterior++;
			}
		}
	}
	if(p->base == p->top)
		printf("Parentização da expressão aritmética CORRETA\n");
	else
		printf("Parentização da expressão aritmética INCORRETA\n");
	//stopPA();
}

void FPVazia(PilhaParenteses *p)
{
	p->top   = 0;
	p->base  = 0;
}


void PUSH(PilhaParenteses *p, Item d)
{
	if(p->top >= MAXTAM){
		printf("PILHA CHEIA!\n");
	}
	else{
		p->vet[p->top] = d;
		p->top ++;
	}
}

void POP(PilhaParenteses *p, Item *d)
{
	if(p->base == p->top)
		printf("PILHA VAZIA!\n");
	else{
		p->top --;
		*d = p->vet[p->top];
	}
}

void PImprime(PilhaParenteses *p){
	for(int i=p->top-1; i>=p->base; i--)
		printf("%c\n", p->vet[i].val);
	printf("\n");
}
