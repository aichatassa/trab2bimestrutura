#ifndef RECEITA_H_INCLUDED
#define RECEITA_H_INCLUDED
#define MAX 10
#define IND 100

typedef struct Receita TReceita;

void navegar_receitas(TReceita* atual, char letra);

void marcar_receitas(TReceita* atual, bool marcada);

void alterar_receitas();

void excluir_receitas(TReceita* atual);

void inserir_receitas();

#endif
