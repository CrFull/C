#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],C[10],cont = 0;
   for(cont = 1; cont<=10; cont++){
        A[cont] = cont * 2;
        B[cont] = A[cont] + 2;
        C[cont] = A[cont] + B[cont];
    }
    cont = 1;
    printf("Os valores do 1� vetor: ");
    while(cont<=10){
        printf("\n %d � valor: %d",cont,A[cont]);
        cont++;
    }
    cont = 1;
    printf("\n \nOs valores do 2� vetor B: ");
    while(cont<=10){
        printf("\n %d� valor: %d",cont,B[cont]);
        cont++;
    }
    cont = 1;
    printf("\n \nOs valores do 3� vetor C: ");
    while(cont<=10){
        printf("\n %d� valor: %d",cont,C[cont]);
        cont++;
    }
    printf("\n");
}
