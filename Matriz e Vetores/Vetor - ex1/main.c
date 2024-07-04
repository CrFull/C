#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[10],B[10],cont = 0,ja=0;

    printf("Digite os valores do vetor A: ");
    printf("\n");
    for(cont = 1; cont<=10; cont++){
        printf("%dº valor: ",cont);
        scanf("%d",&A[cont]);
        if(A[cont]%2 == 0)
            B[cont] = A[cont] * 5;
        else
            B[cont] = A[cont] + 5;

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
