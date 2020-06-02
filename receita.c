#include <stdio.h>
#include <stdlib.h>
#include "receita.h"

struct Receita {
    char titulo[IND];
    char tempo[IND];
    char ingredientes[IND];
    char modo[IND];
    char criador[IND];
    int nota;
    int vezes;
    struct Receita *proximo;
    struct Receita *anterior;
    int marcada;
    int apagada;
};

int navegar_receitas(TReceita* atual, char letra) {
	if(letra == '<') {
		return atual->anterior;
	}
	
	else if(letra == '>') {
		return atual->proximo;
	}
	else {
		return atual;
	}
}

void listar(TReceita* atual) {
	printf("Titulo da receita: %s\n", atual->titulo);
	printf("Tempo da receita: %s\n", atual->tempo);
	printf("Ingredientes da receita: %s\n", atual->ingredientes);
	printf("Modo da receita: %s\n", atual->modo);
	printf("Criador da receita: %s\n", atual->criador);
	printf("Quantidade de vezes que fez a receita: %d\n", atual->vezes);
}

void marcar_receitas(TReceita* atual, int marcada) {
	TReceita* marcou;
	marcada = 1;
	if(marcada == 1) {
		printf("\nReceita marcada com sucesso!\n");
		atual->vezes++;
	}	
}

//void alterar_receitas() {
	
//}

void excluir_receitas(TReceita* atual){
	int opcao;
	TReceita* excluir;

	do {
		printf("Deseja mesmo excluir a receita?\n");
		printf("1. Sim\n");
		printf("2. Nao\n");
		scanf("%d", &opcao);
	
		if(opcao == 1) {
			excluir->apagada = 1;
			printf("Receita apagada com sucesso!\n");
		}
		
		else if(opcao == 2) {
			excluir->apagada = 0;
			printf("Receita nao foi apagada!\n");
		}
		
		else {
			printf("Selecione uma opcao valida!\n");
		}
	}while(opcao != 1 || opcao != 2);
	
}

void inserir_receitas() {
	TReceita* novo;
	novo = nova_receita();
	if(*primeiro == NULL) {
		*primeiro = novo;
	}
	void inserir_receitas(TReceita **primeiro) {
	TReceita* novo;
	TReceita* auxiliar;
	novo = nova_receita();
	
	auxiliar = *primeiro;
	
	if(*primeiro == NULL) {
		*primeiro = novo;
	}
	
	else {
		
		do{
			if(strcmp(novo->titulo, auxiliar->titulo) > 0){
				auxiliar->proximo;
			}
			else if(strcmp(novo->titulo, auxiliar->titulo) < 0){
				novo->proximo = *primeiro;
				(*primeiro)->anterior->proximo = novo;
				novo->anterior= (*primeiro)->anterior;
				(*primeiro)->anterior = novo;
			}	
		}while(strcmp(novo->titulo, auxiliar->titulo) > 0);
	}
	
}

TReceita* nova_receita() {
	TReceita* aux = malloc(sizeof(TReceita));
	
	printf("Titulo da receita:\n");
	gets(aux->titulo);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;
	
	printf("Tempo da receita:\n");
	gets(aux->tempo);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;
	
	printf("Ingredientes da receita:\n");
	gets(aux->ingredientes);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;
	
	printf("Modo da receita:\n");
	gets(aux->modo);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;
	
	printf("Criador da receita:\n");
	gets(aux->criador);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;
	
	printf("Quantidade de vezes que fez a receita:\n");
	scanf("%d",&aux->vezes);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;
	
	return aux;
}
