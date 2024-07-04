#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    int A[2][3];

    for(lin = 0; lin<2; lin++){
        for(col = 0; col< 3; col++){
            printf("Digite o(s) valor(es) da matriz A[%d][%d]:",lin,col);
            scanf("%d",&A[lin][col]);
        }
    }
     printf("\nOs valores contidos na matriz sao:");
     for(lin = 0; lin<2; lin++){
        for(col = 0; col< 3; col++){
            printf("\n\nA[%d)[%d]: %d",lin,col,A[lin][col]);
        }
    }

    printf("\n");




    return 0;
}
