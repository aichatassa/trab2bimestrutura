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
};

void navegar_receitas(Receita* atual, char letra) {
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

void marcar_receitas() {
	
}

void alterar_receitas() {
	
}

void excluir_receitas() {
	
}

void inserir_receitas() {
	
}

TReceita* nova_receita() { //?
	TReceita* aux = malloc(sizeof(TReceita));
	
	printf("Titulo da receita:%s\n");
	//fgets(vetor[tam].titulo, IND-1, stdin);
	gets(aux->nome);
	
	printf("Tempo da receita:%s\n");
	//fgets(vetor[tam].tempo, IND-1, stdin);
	gets(aux->tempo);
	
	printf("Ingredientes da receita:%s\n");
	//fgets(vetor[tam].ingredientes, IND-1, stdin);
	gets(aux->ingredientes);
	
	printf("Modo da receita:%s\n");
	//fgets(vetor[tam].modo, IND-1, stdin);
	gets(aux->modo);
	
	printf("Criador da receita:%s\n");
	//fgets(vetor[tam].criador, IND-1, stdin);
	gets(aux->criador);
	
	printf("Quantidade de vezes que fez a receita: %d\n");
	//scanf("%d", &vetor[tam].vezes);
	gets(aux->vezes);
}
