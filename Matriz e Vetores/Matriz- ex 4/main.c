#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    int A[3][3],B[3][3],C[3][3];

    for(lin = 0; lin<3; lin++){
        for(col = 0; col< 3; col++){
            A[lin][col] = (lin + col) * 2;
        }
    }

    printf("\n");

     for(lin = 0; lin<3; lin++){
        for(col = 0; col< 3; col++){
            printf("\nDigite o valor da matriz em B[%d][%d]:",lin,col);
            scanf("%d",&B[lin][col]);
            C[lin][col] = A[lin][col] + B[lin][col];
        }
    }
    for(lin = 0; lin<3; lin++){
        for(col = 0; col< 3; col++){
            printf("\n\nO valor da matriz em C[%d][%d] e: %d",lin,col,C[lin][col]);
        }
    }

    printf("\n");
    return 0;
}
