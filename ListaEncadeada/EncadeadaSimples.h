#ifndef ENCADEADASIMPLES_H_INCLUDED
#define ENCADEADASIMPLES_H_INCLUDED

typedef struct no_Lista
{
    int info;
    struct no_lista *proximo;
}NoLista;

typedef struct lista
{
    struct no_lista *inicio;
    struct no_lista *fim;
}Lista;

Lista *criaLista();
NoLista *criaNoLista(int item, NoLista*proximo);
int inserirInicio(Lista *lista,int item);
int removerInicio(Lista *lista);
int inserirFinal(Lista *lista, int item);
int removerFinal(Lista *lista);
int listaVazia(Lista *lista);
int tamanhoLista(Lista *lista);
void imprirLista(Lista *lista);

#endif // ENCADEADASIMPLES_H_INCLUDED
