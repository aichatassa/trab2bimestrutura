#ifndef RECEITA_H_INCLUDED
#define RECEITA_H_INCLUDED
#define MAX 10
#define IND 100

typedef struct Receita TReceita;

int navegar_receitas(TReceita* atual, char letra);

void marcar_receitas(TReceita* atual, int marcada);

//void alterar_receitas();

void excluir_receitas(TReceita* atual);

//void inserir_receitas();

//TReceita* nova_receita();

#endif
