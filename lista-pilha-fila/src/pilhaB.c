/*#include "pilhaB.h"*/

/*void P1ParaP2(Pilha1 *p1, Pilha2 *p2, Item1 auxP1, Item2 auxP2)*/
/*{*/
/*	Block1 *auxB1;*/
/*	*/
/*	auxB1 = p1->top;*/
/*	p1->top = p2->top;*/
/*	p2->top = auxB1;*/
/*	*/
/*	auxB1 = p1->base;*/
/*	p1->base = p2->base;*/
/*	p2->base = auxB1;*/
/*}*/

/*void FPVazia1(Pilha1 *p)*/
/*{*/
/*	p->base = (Block1*) malloc (sizeof(Block1));*/
/*	p->top  = p->base;*/
/*	p->base->prox = NULL;*/
/*}*/

/*void FPVazia2(Pilha2 *p)*/
/*{*/
/*	p->base = (Block2*) malloc (sizeof(Block2));*/
/*	p->top  = p->base;*/
/*	p->base->prox = NULL;*/
/*}*/

/*void Push1(Pilha1 *p, Item1 d)*/
/*{*/
/*	Block1 *aux = (Block1*) malloc (sizeof(Block1));*/
/*	aux->data = d;*/
/*	aux->prox = p->top;*/
/*	p->top = aux;*/
/*}*/

/*void Push2(Pilha2 *p, Item2 d)*/
/*{*/
/*	Block2 *aux = (Block2*) malloc (sizeof(Block2));*/
/*	aux->data = d;*/
/*	aux->prox = p->top;*/
/*	p->top = aux;*/
/*}*/

/*void Pop1(Pilha1 *p, Item1 *d)*/
/*{*/
/*	Block1 *aux;*/

/*	if(p->base == p->top || p == NULL){*/
/*		printf("PILHA VAZIA!\n");*/
/*		return;*/
/*	}*/
/*	*/
/*	aux = p->top;*/
/*	p->top = aux->prox;*/
/*	*d = aux->data;*/
/*}*/

/*void Pop2(Pilha2 *p, Item2 *d)*/
/*{*/
/*	Block2 *aux;*/

/*	if(p->base == p->top || p == NULL){*/
/*		printf("PILHA VAZIA!\n");*/
/*		return;*/
/*	}*/
/*	*/
/*	aux = p->top;*/
/*	p->top = aux->prox;*/
/*	*d = aux->data;*/
/*}*/


/*void PImprime1(Pilha1 *p)*/
/*{*/
/*	Block1 *aux;*/

/*	aux = p->top;*/
/*	printf("Pilha 1:\n");*/
/*	while(aux != p->base){*/
/*		printf("%d\n", aux->data.val);*/
/*		aux = aux->prox;*/
/*	}*/

/*}*/

/*void PImprime2(Pilha2 *p)*/
/*{*/
/*	Block2 *aux;*/

/*	aux = p->top;*/
/*	printf("Pilha 2:\n");*/
/*	while(aux != p->base){*/
/*		printf("%d\n", aux->data.val);*/
/*		aux = aux->prox;*/
/*	}*/

/*}*/
