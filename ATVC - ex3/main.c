#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    int A[3][3],B[3][3],C[3][3];

    for(lin = 1; lin<=3; lin++){
        for(col = 1; col<=3; col++){
            A[lin][col] = (lin + col) * 2;
        }
    }


     printf("Digite o valor da matriz B[3][3]: ");
      printf("\n");
     for(lin = 1; lin<=3; lin++){
        for(col = 1; col<= 3; col++){
           printf("\nB[%d][%d]:",lin,col);
            scanf("%i",&B[lin][col]);
            if(lin % 2 == 0 && col % 2 ==0)
                C[lin][col] = A[lin][col] + B[lin][col];
            else
                C[lin][col] = A[lin][col] - B[lin][col];
        }
    }

    system("cls");
    printf("O valor da matriz em A e: ");
    printf("\n");
    for(lin = 1; lin<=3; lin++){
        for(col = 1; col<= 3; col++){
           printf("  %i", A[lin][col]);
        }
        printf("\n");
    }
    printf("\n\nO valor da matriz em B e: ");
    printf("\n");
    for(lin = 1; lin<=3; lin++){
        for(col = 1; col<=3; col++){
           printf("  %i", B[lin][col]);
        }
        printf("\n");
    }
    printf("\n\nO valor da matriz em C e: ");
    printf("\n");
    for(lin = 1; lin<=3; lin++){
        for(col = 1; col<= 3; col++){
           printf("  %i", C[lin][col]);
        }
        printf("\n");
    }
    return 0;
}


