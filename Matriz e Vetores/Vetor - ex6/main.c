#include <stdio.h>
#include <stdlib.h>

int main()
{
     int A[5],B[5],C[10],cont = 0,aux=,temp=0;
     printf("Digite os valores do vetor A: ");
     printf("\n");
     for(cont = 1; cont<=5; cont++){
        printf("%dº valor: ",cont);
        scanf("%d",&A[cont]);
        C[cont] = A[cont];
    }
    cont=1;
    printf("Digite os valores do vetor B: ");
    printf("\n");
    for(cont = 1; cont<=5; cont++){
        printf("%dº valor: ",cont);
        scanf("%d",&B[cont]);
        C[aux] = B[cont];
        aux++;
    }
    aux=2;
    for(cont = 1; cont<=10; cont++){
        if(C[cont]>C[aux]){
           temp = C[cont];
           C[cont]=
        }
    }
    //QuickSort - Ordenação mais rápida

    /*void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
            ch = vet[j];
            while(j > pivo){
                vet[j] = vet[j-1];
                j--;
            }
            vet[j] = ch;
            pivo++;
        }
    }
    if(pivo-1 >= esq){
        quick(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir){
        quick(vet,pivo+1,dir);
    }
 }

*/
    return 0;
}
