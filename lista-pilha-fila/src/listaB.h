#ifndef listaB_H
#define listaB_H

typedef struct ListaA{
	int *ptr;
	int primeiro;
	int ultimo;
}ListaA;

typedef struct ListaB{
	int *ptr;
	int primeiro;
	int ultimo;
}ListaB;

int sizeVet;
int valorAleatorio;
void tamanhoLista();
void LAVazia(ListaA *l);
void LBVazia(ListaB *l);
void LAInserir(ListaA *l);
void LBInserir(ListaB *l);
void concatenarLALB(ListaA *LA, ListaB *LB);
void gerarValorAleatorio();
void subtrairValorAleatorio(ListaA *LA, ListaB *LB);
void LAImprime(ListaA *l);
void LBImprime(ListaB *l);
void somaElementos(ListaA *LA, ListaB *LB);

#endif
