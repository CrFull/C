#include <stdio.h>
#include <stdlib.h>
#include "EncadeadaSimples.h"

Lista *criaLista()
{
    Lista *lista;
    lista = (Lista*) malloc(sizeof(Lista));
    if(lista != NULL)
    {
        lista->inicio = NULL;
        lista->fim = NULL;
    }
    return lista;
}

NoLista *criaNoLista(int item, NoLista*proximo)
{
    NoLista *nodo;
    nodo = (NoLista *) malloc(sizeof(NoLista));
    if(nodo != NULL)
    {
        nodo->proximo = proximo;
        nodo->info = item;
    }
    return nodo;

}

int inserirInicio(Lista *lista,int item)
{
    NoLista *novoNo = criarNoLista(item,lista->inicio);
    if(novoNo != NULL)
    {
        lista->inicio = novoNo;
        if(lista->fim ==  NULL)
           lista->fim = novoNo;
           return 1;
    }
    return 0;
}

int removerInicio(Lista *lista)
{
    NoLista *nodo = lista->inicio;
    lista->inicio = nodo->proximo;
    int info = nodo->info;
    if(lista->fim == nodo)
        lista->fim = nodo->proximo;
    liberaNoLista(nodo);
    return info;
}

int inserirFinal(Lista *lista, int item)
{
    NoLista nodo = criaNoLista(item,lista->fim);
    if(nodo != NULL)
    {
        if(listaVazia(lista) == 0)
        {
            lista->inicio = nodo;
            lista->fim = nodo;
            return 1;
        }
        NoLista *aux = lista->fim;
        aux->proximo = nodo;
        lista->fim = nodo;
        return 1;
    }
    return 0;

}

int removerFinal(Lista *lista)
{

}

int listaVazia(Lista *lista)
{
    if(lista->inicio == NULL)
        return 0;

    return 1;
}

void imprirLista(Lista *lista)
{
    if(listaVazia(lista) == 0)
    {
        printf("Lista Vazia.\n");
    }
    else
    {
        NoLista *noAtual;
        noAtua = lista->inicio;
        do
        {
            printf("%d", noAtual->info);
            noAtual = noAtual-> proximo;

        }while(noAtual != NULL);
        printf("/n");
    }

}

int tamanhoLista(Lista *lista)
{
    NoLista *p;
    int tamanho;
    tamanho = 0;
    p = lista->inicio;

    while(p != NULL)
    {
        p = p->proximo;
        tamanho++;
    }
    return tamanho;
}


