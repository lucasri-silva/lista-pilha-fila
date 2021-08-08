#include "pilhaA.h"
//#include "pilhaB.h"
#include "pilhaC.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int pilhaA()//PROBLEMA PILHA A 
{
	system("cls||clear");
	PilhaParenteses p;
	Item aux;
	
	FPVazia(&p);
	parentizacao(&p, aux);
	
	return 0;
}

/*int pilhaB()//PROBLEMA PILHA B*/
/*{*/
/*	Pilha1 p1;*/
/*	Pilha2 p2;*/
/*	Item1 auxP1;*/
/*	Item2 auxP2;*/

/*	FPVazia1(&p1);*/
/*	FPVazia2(&p2);*/
/*	*/
/*	auxP1.val = 10;*/
/*	Push1(&p1, auxP1);*/
/*	auxP1.val = 20;*/
/*	Push1(&p1, auxP1);*/
/*	auxP1.val = 30;*/
/*	Push1(&p1, auxP1);*/
/*	*/
/*	PImprime1(&p1);*/
/*	P1ParaP2(&p1, &p2, auxP1, auxP2);*/
/*	PImprime2(&p2);*/

/*	return 0;*/
/*}*/

int pilhaC()//PROBLEMA PILHA C
{
	system("cls||clear");
	PilhaPC p;
	ItemPC aux;

	FPVaziaPC(&p);
	gerarValoresPC(&p, aux);
	PImprimePC(&p);
	coprimos(&p, aux);
	PImprimePC(&p);

	return 0;
}
