#include <stdio.h>
#include <stdlib.h>
#include "receita.h"



int main() {
	
	TReceita* atual = NULL;
	TReceita* primeiro = NULL;
	char menu;
	
	do{
		
		printf("LIVRO DE RECEITAS\n");
		printf("\nOpcoes:\n");
		printf("< > - Navegar\n");
		printf("* - Marcar como usada\n");
		printf("a - Alterar\n");
		printf("! - Apagar receita\n");
		printf("+ - Inserir receita\n");
		printf("s - Sair do livro de receitas\n");
		scanf("%c", &menu);
		getchar();
	
		switch(menu) {
			case '<':
				atual = navegar_receitas(atual, menu);
				listar(atual);
				break;
				
			case '>':
				atual = navegar_receitas(atual, menu);
				listar(atual);
				break;
				
			case '*':
				marcar_receitas(atual, 0);
				break;
				
			case 'a':
				alterar_receitas(atual);
				break;
				
			case '!':
				excluir_receitas(atual);
				break;
				
			case '+':
				inserir_receitas(&primeiro);
				atual = primeiro;
				break;
				
			case 's':
				break;
				
			default:
				printf("Opcao invalida!\n");
				break;
		}
	}while(menu != 's');
	
	return 0;
}
