#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4][4], somaDP = 0, somaDS = 0 ,c = 0, l = 0;

    //Popular a matriz
    printf("Digite os valores da matriz A: ");
    printf("\n");
    for(l = 1; l <= 4; l++)
    {
        for(c = 1; c <= 4; c++)
        {
            //Recendo os valores
            printf("\n (%i,%i)",l,c);
            scanf("%i", &A[l][c]);
            if(l == c)
            {
                somaDP += A[l][c];
            }
            else
            {
                if(l + c == 4 + 1)
                    somaDS += A[l][c];
            }
        }
    }
    //Exibindo os resultados
    printf("\nA soma dos Valores da Diagonal Principal é: %i", somaDP);
    printf("\nA soma dos Valores da Diagonal Secundária é: %i", somaDS);

    return 0;
}
