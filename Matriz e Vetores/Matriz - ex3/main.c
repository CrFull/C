#include <stdio.h>
#include <stdlib.h>

int main()
{
     int lin, col;
      int A[3][4], valorPesquisado = 0;
      int achou = 0;

    for(lin = 0; lin<3; lin++){
        for(col = 0; col< 4; col++){
            printf("Digite o(s) valor(es) da matriz A[%d][%d]:",lin,col);
            scanf("%d",&A[lin][col]);
        }
    }

    printf("\nDigite um valor para pesquisar na matriz A[3][4]: ");
    scanf("%d",&valorPesquisado);

     for(lin = 0; lin<3; lin++){
        for(col = 0; col< 4; col++){
            if(valorPesquisado == A[lin][col]){
                printf("\nValor encontrado na posicao A[%d][%d]",lin,col);
                achou++;
            }

        }
    }

    if(achou == 0){
         printf("\nValor nao encontrado na matriz A[3][4]!");
    }

     printf("\n");
    return 0;

}
