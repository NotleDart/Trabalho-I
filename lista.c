#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void inserirInicio(No **lista, char texto[])
{
    No *novo;

    novo = (No*) malloc(sizeof(No));

    strcpy(novo->info, texto);

    novo->prox = *lista;

    *lista = novo;
}

void inserirFim(No **lista, char texto[])
{
    No *novo;
    No *aux;

    novo = (No*) malloc(sizeof(No));

    strcpy(novo->info, texto);

    novo->prox = NULL;

    if(*lista == NULL)
    {
        *lista = novo;
    }
    else
    {
        aux = *lista;

        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }

        aux->prox = novo;
    }
}

void removerItem(No **lista, char texto[])
{
    No *aux;
    No *anterior;

    if(*lista == NULL)
    {
        return;
    }

    aux = *lista;
    anterior = NULL;

    while(aux != NULL)
    {
        if(strcmp(aux->info, texto) == 0)
        {
            if(anterior == NULL)
            {
                *lista = aux->prox;
            }
            else
            {
                anterior->prox = aux->prox;
            }

            free(aux);
            return;
        }

        anterior = aux;
        aux = aux->prox;
    }
}

void mostrarLista(No *lista)
{
    No *aux;

    aux = lista;

    while(aux != NULL)
    {
        printf("%s\n", aux->info);
        aux = aux->prox;
    }
}

void liberarLista(No **lista)
{
    No *aux;

    while(*lista != NULL)
    {
        aux = *lista;

        *lista = (*lista)->prox;

        free(aux);
    }
} 

void inserirPosicao(No **lista, char texto[], int pos)
{
    if(pos <= 1)
    {
        inserirInicio(lista, texto);
        return;
    }

    No *novo = (No*) malloc(sizeof(No));
    strcpy(novo->info, texto);

    No *aux = *lista;
    int contador = 1;

    while(aux != NULL && contador < pos - 1)
    {
        aux = aux->prox;
        contador++;
    }

    if(aux == NULL)
    {
        inserirFim(lista, texto);
        free(novo); 
    }
    else
    {
        novo->prox = aux->prox;
        aux->prox = novo;
    }
}
