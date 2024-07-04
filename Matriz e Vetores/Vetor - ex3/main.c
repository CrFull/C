#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100],cont = 0;

    printf("Digite os valores do vetor: ");
    printf("\n");
    for(cont = 1; cont<=100; cont++){
        printf("%dº valor: ",cont);
        scanf("%d",&A[cont]);
    }
    system("cls");
    cont = 100;
    printf("Os valores do vetor, de tras para frente, sao: ");
    while(cont>=1){
        printf("\n%d",cont,A[cont]);
        cont--;
    }
    return 0;
}
