#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col;
    int A[5][10];

   for(lin = 0; lin<5; lin++){
        for(col = 0; col< 10; col++){
            A[lin][col] = (lin + col) * 2;
        }
    }
     printf("\n");
     for(lin = 0; lin<3; lin++){
        for(col = 0; col< 3; col++){
            printf("%d",lin,col,A[lin][col]);
        }
    }


}
