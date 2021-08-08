#include "filaA.h"
//#include "filaB.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int filaA()
{
	system("cls||clear");
	FilaExpansaoBinomio feb;
	FilaBinomio fb;
	//ItemExpansaoBinomio auxEB;
	ItemBinomio auxB;

	FFVaziaBinomio(&fb);
	FFVaziaExpansaoBinomio(&feb);
	
	EnfileiraBinomio(&fb, 'x', 'y', 2, '+');
	EnfileiraBinomio(&fb, 'x', 'y', 3, '+');
	
	binomioNewton(&fb);
	DesenfileiraBinomio(&fb, &auxB);
	
	binomioNewton(&fb);
	DesenfileiraBinomio(&fb, &auxB);

	FImprimeBinomio(&fb);

	return 0;
}
