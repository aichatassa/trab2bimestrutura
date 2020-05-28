#ifndef RECEITA_H_INCLUDED
#define RECEITA_H_INCLUDED
#define MAX 10
#define IND 100

typedef struct Receita TReceita;

void navegar_receitas(Receita* atual, char letra);

void marcar_receitas();

void alterar_receitas();

void excluir_receitas();

void inserir_receitas();

#endif
