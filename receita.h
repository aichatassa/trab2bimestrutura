#ifndef RECEITA_H_INCLUDED
#define RECEITA_H_INCLUDED
#define MAX 10
#define IND 100

typedef struct Receita TReceita;

TReceita* navegar_receitas(TReceita* atual, char letra);

void listar(TReceita* atual);

void marcar_receitas(TReceita* atual, int marcada);

void alterar_receitas(TReceita* atual);

void excluir_receitas(TReceita* atual);

void inserir_receitas(TReceita **primeiro);

TReceita* nova_receita();

#endif
