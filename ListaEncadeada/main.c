#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "EncadeadaSimples.h"

Lista *criaLista();

int main()
{

    int op, tamanho;
    Lista *lista;
    lista = criaLista();
    int item;
    do
    {
        printf("DIGITE O QUE VOCE GOSTARIA DE FAZER: ");
        printf("\n1 - INSERIR NO INICIO: ");
        printf("2 - INSERIR NO FIM: ");
        printf("3 - REMOVER DO INICIO");
        printf("4 - VERIFICAR TAMANHO DA LISTA ");
        printf("5 - IMPRIRMIR LISTA ");
        printf("6 - SAIR");
        switch(op)
        {

            case 1:
                printf("Digite um item para inserir(int): ");
                scanf("%d", &item);

                if(inserirInicio(lista,item) == 0)
                {
                    printf("NAO FOI POSSIVEL INSERIR NA LISTA");
                    Beep(1000,1500);

                }
                break;

            case 2:
                printf("Digite um item para inserir(int): ");
                scanf("%d", &item);

                if(inserirFim(lista,item) == 0)
                {
                    printf("NAO FOI POSSIVEL INSERIR NA LISTA");
                    Beep(1000,1500);

                }
                break;

            case 3:
                if(removerInicio(lista) == 0)
                {
                    printf("NAO FOI POSSIVEL REMOVER DO INCIO DA LISTA");
                    Beep(1000,1500);
                }
                break;

            case 4:
                tamanho = tamanhoLista(lista);
                if(tamanho == 0)
                {
                    printf("Lista vazia!");
                }
                else
                {
                    printf("Tamanho da lista: %d ", tamanho);
                }

                break;

            case 5:
                imprirLista(lista);
                break;

            case 6:
                printf("\n\nPrograma encerrado!");
                break;


        }



    }while(op!=6);
}
