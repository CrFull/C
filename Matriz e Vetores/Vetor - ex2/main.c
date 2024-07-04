#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],cont = 0;

    printf("Digite os valores do vetor A: ");
    printf("\n");
    for(cont = 1; cont<=10; cont++){
        printf("%dº valor: ",cont);
        scanf("%d",&A[cont]);
        B[cont] = A[cont] * 3;
    }

    system("cls");
    cont = 1;
    printf("Os valores do vetor A: ");
    while(cont<=10){
        printf("\n %dº valor: %d",cont,A[cont]);
        cont++;
    }
    cont = 1;
    printf("\n \nOs valores do vetor B: ");
    while(cont<=10){
        printf("\n %dº valor: %d",cont,B[cont]);
        cont++;
    }
    printf("\n");

    return 0;
}
