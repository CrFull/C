#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[15],cont = 0,soma=0,qtdI=0;
    printf("Digite os valores do vetor A: ");
    printf("\n");
    for(cont = 1; cont<=15; cont++){
        printf("%dº valor: ",cont);
        scanf("%d",&A[cont]);
        if(A[cont]%2 != 0){
            soma += A[cont];
            qtdI++;
        }
    }

    printf("\nA soma dos %d valores ímpares é: %d",qtdI,soma);

    return 0;
}
