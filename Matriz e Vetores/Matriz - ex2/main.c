#include <stdio.h>
#include <stdlib.h>

int main()
{
   int lin, col;
    int A[3][3],B[3][3];

    for(lin = 0; lin<3; lin++){
        for(col = 0; col< 3; col++){
            printf("Digite o(s) valor(es) da matriz A[%d][%d]:",lin,col);
            scanf("%d",&A[lin][col]);
        }
    }

     printf("\nOs valores contidos na matriz B (dobro de A) sao:");
     for(lin = 0; lin<3; lin++){
        for(col = 0; col< 3; col++){
            B[lin][col] = A[lin][col] * 2;
            printf("\n\nB[%d)[%d]: %d",lin,col,B[lin][col]);
        }
    }

    printf("\n");



    return 0;
}
