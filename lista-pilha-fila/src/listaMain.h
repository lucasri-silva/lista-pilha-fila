#include "listaA.h"
#include "listaB.h"
#include "listaC.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int listaA()//PROBLEMA LISTA A
{
	system("cls||clear");
	ListaPar par;
	ListaImpar impar;
	Par auxPar;
	Impar auxImpar;
	
	LVaziaPar(&par);
	LVaziaImpar(&impar);
	gerarListaPar(&par, auxPar);
	gerarListaImpar(&impar, auxImpar);
	LImprimePar(&par);
	LImprimeImpar(&impar);
	concatenar(&par, &impar);
	
	return 0;
}

int listaB()//PROBLEMA LISTA B
{
	system("cls||clear");
	ListaA LA;
	ListaB LB;
	
	tamanhoLista();
	LAVazia(&LA);
	LBVazia(&LB);
	LAInserir(&LA);
	LBInserir(&LB);
	gerarValorAleatorio();
	LAImprime(&LA);
	LBImprime(&LB);
	concatenarLALB(&LA, &LB);
	subtrairValorAleatorio(&LA, &LB);
	printf("\nListas subtraídas do valor aleatório: \n");
	LAImprime(&LA);
	LBImprime(&LB);
	somaElementos(&LA, &LB);
	stopLB();

	return 0;
}

int listaC()//PROBLEMA LISTA C
{	
	system("cls||clear");
	bool on=true;
	int opcao;
	
	ListaProduto LProduto;
	ListaMercado LMercado;
	ListaPreco LPreco;
	Produto auxLProduto;
	Mercado auxLMercado;
	Preco auxLPreco;
	
	FLVaziaLProduto(&LProduto);
	FLVaziaLMercado(&LMercado);
	FLVaziaLPreco(&LPreco);
	
	do{
		system("cls||clear");	
		printf("1. Cadastar produto\n2. Cadastrar mercado\n3. Cadastrar preço\n4. Realizar compra\n5. Sair\n\nEntre uma opção: ");
		scanf("%d", &opcao);
		while((getchar()) != '\n');
		switch(opcao)
		{
			case 1://LISTA PRODUTOS
				cadastrarProduto(&LProduto, auxLProduto);
				break;
			case 2://LISTA MERCADOS
				cadastrarMercado(&LMercado, auxLMercado);
				break;
			case 3://LISTA PREÇOS
				cadastrarPreco(&LPreco, auxLPreco, &LMercado, &LProduto, numItens);
				break;
			case 4:
				realizarCompra(&LProduto);
				imprimeCarrinho(&LProduto);
				menorCustoTotal(&LProduto, &LMercado, &LPreco);
				esvaziarCarrinho(&LProduto);
				stopLC();
				break;
			default:
				on=false;
		}
	}while(on);
	
	return 0;
}

void stop()
{
	printf("\n\nPressione qualquer tecla para continuar...");
	getchar();
	system("cls||clear");
}
