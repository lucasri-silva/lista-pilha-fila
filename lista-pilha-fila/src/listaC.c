#include "listaC.h"

void FLVaziaLProduto(ListaProduto *l)
{
	l->first = (BlockProduto*) malloc(sizeof(BlockProduto));
	l->last = l->first;
	l->first->prox = NULL;
}

void FLVaziaLMercado(ListaMercado *l)
{
	l->first = (BlockMercado*) malloc(sizeof(BlockMercado));
	l->last = l->first;
	l->first->prox = NULL;
}

void FLVaziaLPreco(ListaPreco *l)
{
	l->first = (BlockPreco*) malloc(sizeof(BlockPreco));
	l->last = l->first;
	l->first->prox = NULL;
}

void LInserirLProduto(ListaProduto *l, Produto p, Produto q, Produto i)
{
	l->last->prox = (BlockProduto*) malloc(sizeof(BlockProduto));
	l->last = l->last->prox;
	l->last->data = p;
	l->last->data = q;
	l->last->data = i;
	l->last->data.associado = false;
	l->last->prox = NULL;
}

void LInserirLMercado(ListaMercado *l, Mercado m, Mercado i)
{
	l->last->prox = (BlockMercado*) malloc(sizeof(BlockMercado));
	l->last = l->last->prox;
	l->last->data = m;
	l->last->data = i;
	l->last->prox = NULL;
}

void LInserirLPreco(ListaPreco *l, Preco idp, Preco idm, Preco p)
{
	l->last->prox = (BlockPreco*) malloc(sizeof(BlockPreco));
	l->last = l->last->prox;
	l->last->data = idp;
	l->last->data = idm;
	l->last->data = p;
	l->last->prox = NULL;
}

void cadastrarProduto(ListaProduto *l, Produto auxLProduto)
{
	bool on=true;
	int opcao;
	while(on)
	{
		system("cls||clear");
		printf("CADASTRO PRODUTO:\nEntre o nome do produto: ");
		scanf("%s", auxLProduto.produto);
		auxLProduto.quantidade = 0;
		printf("Entre o identificador do produto: ");
		scanf("%d", &auxLProduto.identificador);
		LInserirLProduto(l, auxLProduto, auxLProduto, auxLProduto);
		printf("Produto cadastrado com sucesso\n");
		printf("\n1. Sim\n2. Não\nDeseja cadastrar mais produtos: ");
		scanf("%d", &opcao);
		while((getchar()) != '\n');
		if(opcao == 2)
			on=false;
	}
}

void cadastrarMercado(ListaMercado *l, Mercado auxLMercado)
{
	bool on=true;
	int opcao;
	while(on)
	{	
		system("cls||clear");
		printf("CADASTRO MERCADO:\nEntre o nome do mercado: ");
		scanf("%s", auxLMercado.mercado);
		printf("Entre o identificador do mercado: ");
		scanf("%d", &auxLMercado.identificador);
		LInserirLMercado(l, auxLMercado, auxLMercado);
		printf("\n1. Sim\n2. Não\nDeseja cadastrar mais mercados: ");
		scanf("%d", &opcao);
		while((getchar()) != '\n');
		if(opcao == 2)
			on=false;
	}
}

int produtoCadastrado(ListaProduto *LProduto, int idProduto, int numItens)
{
	BlockProduto *auxLProduto;
	auxLProduto = LProduto->first->prox;
	while(auxLProduto != NULL)
	{
		if(idProduto == auxLProduto->data.identificador)
		{
			auxLProduto->data.associado=true;
			numItens++;
			return 1;
		}
		auxLProduto = auxLProduto->prox;
	}
	return 0;
}

int mercadoCadastrado(ListaMercado *LMercado, int idMercado)
{
	BlockMercado *auxLMercado;
	auxLMercado = LMercado->first->prox;
	while(auxLMercado != NULL)
	{
		if(idMercado == auxLMercado->data.identificador)
			return 1;
		auxLMercado = auxLMercado->prox;
	}
	return 0;
}

void cadastrarPreco(ListaPreco *LPreco, Preco auxLPreco, ListaMercado *LMercado, ListaProduto *LProduto, int numItens)
{
	bool on=true;
	int opcao, idProduto, idMercado;
	float preco;
	while(on)
	{
		system("cls||clear");
		printf("CADASTRO PREÇO:\nEntre o identificador do mercado: ");
		scanf("%d", &idMercado);
		if(mercadoCadastrado(LMercado, idMercado))
		{
			printf("Entre o identificador do produto: ");
			scanf("%d", &idProduto);
			if(produtoCadastrado(LProduto, idProduto, numItens))
			{
				printf("Entre o preço do produto R$");
				scanf("%f", &preco);
				auxLPreco.idProduto = idProduto;
				auxLPreco.idMercado = idMercado;
				auxLPreco.preco = preco;
				LInserirLPreco(LPreco, auxLPreco, auxLPreco, auxLPreco);
				printf("\nProduto, Mercado e Preço foram associados com sucesso\n");
			}
			else
				printf("\nERRO. Identificador do produto não encontrado no banco de dados\n");	
		}
		else
			printf("\nERRO. Identificador do mercado não encontrado no banco de dados\n");
	printf("\n1. Sim\n2. Não\nDeseja cadastrar mais preços: ");
	scanf("%d", &opcao);
	while((getchar()) != '\n');
	if(opcao == 2)
		on=false;
	}
}

void LImprimeLProduto(ListaProduto *l)
{
	BlockProduto *aux;
	
	aux = l->first->prox;
	while(aux != NULL)
	{
		printf("%s\n", aux->data.produto);
		printf("%d\n", aux->data.quantidade);
		printf("%d\n", aux->data.identificador);
		aux = aux->prox;
	}
}

void LImprimeLMercado(ListaMercado *l)
{
	BlockMercado *aux;
	
	aux = l->first->prox;
	while(aux != NULL)
	{
		printf("%s\n", aux->data.mercado);
		printf("%d\n", aux->data.identificador);
		aux = aux->prox;
	}
}

void LImprimeLPreco(ListaPreco *l)
{
	BlockPreco *aux;
	
	aux = l->first->prox;
	while(aux != NULL)
	{
		printf("%d\n", aux->data.idProduto);
		printf("%d\n", aux->data.idMercado);
		printf("%.2f\n", aux->data.preco);
		aux = aux->prox;
	}
}

void realizarCompra(ListaProduto *LProduto)
{
	bool on=true, identificadorInvalido;
	int identificador;
	BlockProduto *aux;
	system("cls||clear");
	do{
		itens(LProduto);
		printf("\n\nEntre o n° do identificador do produto para adiciona-lo ao carrinho\n ou o n° zero para finalizar a compra: ");
		scanf("%d", &identificador);
		while((getchar()) != '\n');
		if(identificador == 0)
			on=false;
		aux = LProduto->first->prox;
		while(aux != NULL)
		{
			identificadorInvalido=true;
			if(aux->data.identificador == identificador)
			{
				aux->data.quantidade++;
				system("cls||clear");
				printf("%s foi adicionado ao carrinho\n\n", aux->data.produto);
				identificadorInvalido=false;
				break;
			}
			aux = aux->prox;
		}
		if(identificadorInvalido)
		{
			system("cls||clear");
			printf("N° do produto inválido. Tente novamente\n");
		}
	}while(on);
}

void imprimeCarrinho(ListaProduto *l)
{
	BlockProduto *aux;
	aux = l->first->prox;
	system("cls||clear");
	printf("CARRINHO:\nProduto, Quantidade:\n");
	while(aux != NULL)
	{
		if(aux->data.quantidade > 0)
			printf("%s, %d\n", aux->data.produto, aux->data.quantidade);
		aux = aux->prox;
	}
}

void esvaziarCarrinho(ListaProduto *l)
{
	BlockProduto *aux;
	aux = l->first->prox;
	while(aux != NULL)
	{
		aux->data.quantidade = 0;
		aux = aux->prox;
	}	
}

void itens(ListaProduto *l)
{
	BlockProduto *aux;
	aux = l->first->prox;
	printf("ITENS DISPONÍVEIS: \n");
	while(aux != NULL)
	{
		if(aux->data.associado)
			printf("%d - %s\n", aux->data.identificador, aux->data.produto);
		aux = aux->prox;		
	}
}

void menorCustoTotal(ListaProduto *LProduto, ListaMercado *LMercado, ListaPreco *LPreco)
{
	BlockProduto *auxLProduto;
	BlockMercado *auxLMercado;
	BlockPreco *auxLPreco;
	int idMerc;
	char *mercado;
	char *produto;
	float menorPreco;
	float menorCompra=0;
	int quantidade;
	
	auxLProduto = LProduto->first->prox;
	auxLMercado = LMercado->first->prox;
	auxLPreco = LPreco->first->prox;
	printf("\n");
	while(auxLProduto != NULL)
	{
		if(auxLProduto->data.quantidade > 0)
		{
			quantidade = auxLProduto->data.quantidade;
			menorPreco = 1000;
			produto = auxLProduto->data.produto;
			while(auxLPreco != NULL)
			{
				if(auxLProduto->data.identificador == auxLPreco->data.idProduto)
				{
					if(auxLPreco->data.preco < menorPreco)
					{
						menorPreco = auxLPreco->data.preco;
						idMerc = auxLPreco->data.idMercado;
					}
				}
				auxLPreco = auxLPreco->prox;
			}
			while(auxLMercado != NULL)
			{
				if(idMerc == auxLMercado->data.identificador)
				{
					mercado = auxLMercado->data.mercado;
				}
				auxLMercado = auxLMercado->prox;
			}
			printf("Produto: %s, Menor Preço R$%.2f, Mercado: %s\n", produto, menorPreco, mercado); 
			menorCompra = menorCompra + (quantidade * menorPreco);
		}
		auxLProduto = auxLProduto->prox;
		auxLMercado = LMercado->first->prox;
		auxLPreco = LPreco->first->prox;
	}
	printf("Menor compra R$%.2f\n", menorCompra);
}


void stopLC()
{
	printf("\n\nPressione qualquer tecla para continuar...");
	getchar();
	system("cls||clear");
}
