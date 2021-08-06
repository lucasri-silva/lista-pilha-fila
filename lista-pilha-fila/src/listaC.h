#ifndef listaC_H 
#define listaC_H 

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//LISTA 1 PRODUTO
typedef struct Produto Produto;
typedef struct BlockProduto BlockProduto;
typedef struct ListaProduto ListaProduto;

struct Produto{
	char produto[15];
	int quantidade;
	int identificador;
	bool associado;
};

struct BlockProduto{
	Produto data;
	BlockProduto *prox;
};

struct ListaProduto{
	BlockProduto *first;
	BlockProduto *last;
};

//LISTA 2 MERCADO
typedef struct Mercado Mercado;
typedef struct BlockMercado BlockMercado;
typedef struct ListaMercado ListaMercado;

struct Mercado{
	char mercado[15];
	int identificador;
};

struct BlockMercado{
	Mercado data;
	BlockMercado *prox;
};

struct ListaMercado{
	BlockMercado *first;
	BlockMercado *last;
};

//LISTA 3 PRODUTO MERCADO PREÇO
typedef struct Preco Preco;
typedef struct BlockPreco BlockPreco;
typedef struct ListaPreco ListaPreco;

struct Preco{
	int idProduto;
	int idMercado;
	float preco;
};

struct BlockPreco{
	Preco data;
	BlockPreco *prox;
};

struct ListaPreco{
	BlockPreco *first;
	BlockPreco *last;
};

int numItens;

void FLVaziaLProduto(ListaProduto *l);
void FLVaziaLMercado(ListaMercado *l);
void FLVaziaLPreco(ListaPreco *l);

void LInserirLProduto(ListaProduto *l, Produto p, Produto q, Produto i);
void LInserirLMercado(ListaMercado *l, Mercado m, Mercado i);
void LInserirLPreco(ListaPreco *l, Preco idp, Preco idm, Preco p);

void LImprimeLProduto(ListaProduto *l);
void LImprimeLMercado(ListaMercado *l);
void LImprimeLPreco(ListaPreco *l);

void cadastrarProduto(ListaProduto *l, Produto auxLProduto);
void cadastrarMercado(ListaMercado *l, Mercado auxLMercado);
void cadastrarPreco(ListaPreco *LPreco, Preco auxLPreco, ListaMercado *LM, ListaProduto *LProduto, int numItens);

int produtoCadastrado(ListaProduto *LProduto, int idProduto, int numItens);
int mercadoCadastrado(ListaMercado *LMercado, int idMercado);

void realizarCompra(ListaProduto *LProduto);
void itens(ListaProduto *l);
void imprimeCarrinho(ListaProduto *l);
void esvaziarCarrinho(ListaProduto *l);
void menorCustoTotal(ListaProduto *LProduto, ListaMercado *LMercado, ListaPreco *LPreco);
void stopLC();

#endif
