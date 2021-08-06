#ifndef listaA_H
#define listaA_H
#define SIZE 100

//LISTA PAR
typedef struct Par{
	int val;
}Par;

typedef struct ListaPar{
	Par vet[SIZE];
	int primeiro;
	int ultimo;
}ListaPar;

//LISTA IMPAR
typedef struct Impar{
	int val;
}Impar;

typedef struct ListaImpar{
	Impar vet[SIZE];
	int primeiro;
	int ultimo;
}ListaImpar;

void LVaziaPar(ListaPar *l);
void LVaziaImpar(ListaImpar *l);
void gerarListaPar(ListaPar *l, Par aux);
void gerarListaImpar(ListaImpar *l, Impar aux);
void LImprimePar(ListaPar *l);
void LImprimeImpar(ListaImpar *l);
void concatenar(ListaPar *par, ListaImpar *impar);

#endif
