#include <stdio.h>
#include <stdlib.h>
int main()
{
    int lin, col,A[3][4], valorPesquisado = 0,achou = 0, valor = 0;

    //Popular Matriz
    for(lin = 1; lin<=3; lin++){
        for(col = 1; col<= 4; col++){
           A[lin][col] = (valor++) *2;
        }
         A[lin][1] = 10;
    }

    //Requisita o valor a ser encontrado
    printf("\nDigite um valor para pesquisar na matriz A[3][4]: ");
    scanf("%i",&valorPesquisado);

    system("cls"); //Apaga as coisas no console

    //Mostra as coisinhas
    printf("A matriz em questao e: ");
    printf("\n");
     for(lin = 1; lin<=3; lin++){
        for(col = 1; col<= 4; col++){
            printf("  %i", A[lin][col]);
            if(valorPesquisado == A[lin][col])
                achou++;
        }
        printf("\n");
    }
    if(achou != 0)
         printf("\nValor %i foi encontrado %i vezes na mariz A[3][4]:", valorPesquisado, achou);
    else
        printf("\nValor %i não foi encontrado na mariz A[3][4].", valorPesquisado);

    return 0;
}
