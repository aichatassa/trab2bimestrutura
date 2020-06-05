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

TReceita* navegar_receitas(TReceita* atual, char letra) {
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
	marcada = 1;
	if(marcada == 1) {
		printf("\nReceita marcada com sucesso!\n");
		atual->vezes++;
	}	
}

void alterar_receitas(TReceita* atual) {
	printf("Titulo da receita:\n");
	gets(atual->titulo);
	fflush(stdin);
	printf("Tempo da receita:\n");
	gets(atual->tempo);
	fflush(stdin);
	printf("Ingredientes da receita:\n");
	gets(atual->ingredientes);
	fflush(stdin);
	printf("Modo da receita:\n");
	gets(atual->modo);
	fflush(stdin);
	printf("Criador da receita:\n");
	gets(atual->criador);
	fflush(stdin);
	/*printf("Quantidade de vezes que fez a receita:\n");
	scanf("%d",&atual->vezes);
	fflush(stdin);*/
}

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

void inserir_receitas(TReceita **primeiro) {
	TReceita* novo;
	TReceita* auxiliar;
	novo = nova_receita();
	auxiliar = (*primeiro);
	
	if(*primeiro == NULL) {
		*primeiro = novo;
	}
	
	else {	
		if(strcmp(novo->titulo, (*primeiro)->titulo) < 0) {//compara com o primeiro
			novo->proximo = *primeiro;
			(*primeiro)->anterior->proximo = novo;
			novo->anterior = (*primeiro)->anterior;
			(*primeiro)->anterior = novo;
			*primeiro = novo;
		}
		else if(strcmp(novo->titulo, (*primeiro)->anterior->titulo) > 0) {//compara com o ultimo
			novo->proximo = *primeiro;
			(*primeiro)->anterior->proximo = novo;
			novo->anterior = (*primeiro)->anterior;
			(*primeiro)->anterior = novo;
		}
		
		auxiliar = (*primeiro)->proximo;
		
		while(strcmp(novo->titulo, auxiliar->titulo) > 0) {
			auxiliar = auxiliar->proximo;	
		}
		if(strcmp(novo->titulo, auxiliar->titulo) < 0) {
		   	TReceita *pos = auxiliar->anterior;
			pos->proximo = novo;
           		 novo->anterior = pos;
          		 novo->proximo = auxiliar;
           		 auxiliar->anterior = novo;
            		printf("funcionou\n");
		}
		printf("mudou\n");
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
	
	/*printf("Quantidade de vezes que fez a receita:\n");
	scanf("%d",&aux->vezes);
	fflush(stdin);
	aux->anterior = aux;
	aux->proximo = aux;*/
	
	return aux;
}
