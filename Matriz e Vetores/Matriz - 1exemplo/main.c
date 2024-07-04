#include <stdio.h>
#include <stdlib.h>

#define MAX 2
int main()
{
    int lin, col;

    int A[MAX][MAX], B[MAX][MAX];//matriz quadrada

    //lendo a matriz

    for (lin = 0; lin < MAX; lin ++){
        for (col = 0; col < MAX; col ++){
            printf("Digite A(%d,%d): ", lin, col);
            scanf("%d",&A[lin][col]);
        }
    }
    for (lin = 0; lin < MAX; lin ++){
        for (col = 0; col < MAX; col ++){
            if ((A[lin][col]%2) == 0 )
                B[lin][col] = 3 * A[lin][col];
            else
                B[lin][col] = A[lin][col];
        }
    }

    // imprimindo a matriz

        printf("\nA matriz A:\n");
    for (lin = 0; lin < MAX; lin ++){

        printf("|");

        for (col = 0; col < MAX; col ++){
            printf(" %d ", A[lin][col]);
        }

        printf("|");
        printf("\n\n");
    }
    printf("\nA matriz B:\n");

    for (lin = 0; lin < MAX; lin ++){

        printf("|");

        for (col = 0; col < MAX; col ++){

            printf(" %d ", B[lin][col]);
        }

        printf("|");
        printf("\n");
    }

    return 0;
}



