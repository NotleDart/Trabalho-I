#ifndef LISTA_H
#define LISTA_H

typedef struct No
{
    char info[100];
    struct No *prox;
} No;

void inserirInicio(No **lista, char texto[]);
void inserirFim(No **lista, char texto[]);
void inserirPosicao(No **lista, char texto[], int pos);
 
void removerItem(No **lista, char texto[]);

void mostrarLista(No *lista);

void liberarLista(No **lista);

#endif
