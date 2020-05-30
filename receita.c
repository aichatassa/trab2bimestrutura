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

void marcar_receitas(TReceita* atual, int marcada) {
	TReceita* marcou;
	marcada = 1;
	if(marcada == 1) {
		printf("\nReceita marcada com sucesso!\n");
		marcou->vezes++;
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

/*void inserir_receitas() {
	TReceita* novo;
	novo = nova_receita();
	
}

TReceita* nova_receita() {
	TReceita* aux = malloc(sizeof(TReceita));
	
	printf("Titulo da receita:%s\n");
	gets(aux->titulo);
	
	printf("Tempo da receita:%s\n");
	gets(aux->tempo);
	
	printf("Ingredientes da receita:%s\n");
	gets(aux->ingredientes);
	
	printf("Modo da receita:%s\n");
	gets(aux->modo);
	
	printf("Criador da receita:%s\n");
	gets(aux->criador);
	
	printf("Quantidade de vezes que fez a receita: %d\n");
	gets(aux->vezes);
}*/
