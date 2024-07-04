#include <stdio.h>
#include <stdlib.h>

int opcao(int op, char str1[20], char str2[20]);

int main()
{
    int op;
    char str1[20];
    char str2[20];

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("\nDigite a segunda string: ");
    scanf("%s", str2);
    system("cls");
    printf("Digite uma opcao: ");
    printf("\n1 - Concatenar");
    printf("\n2 - Maior");
    printf("\n3 - Iguais");
    scanf("%d",&op);

    opcao(op,str1,str2);


    return 0;

}

int opcao(int op, char str1[20], char str2[20]){
     char res[40];
    switch(op){

        case 1:

            res = strcat(str1,str2);
            printf("%s",res);

            break;

        case 2:

            if(strlen(str1) > strlen(str2)){
                printf("A primeira string é maior que a segunda");
            }else{
                 if(strlen(str2) > strlen(str1))
                    printf("A segunda string é maior que a primeira");
            }

            break;

        case 3:
            if(strlen(str1) == strlen(str2))
                printf("As strings são iguais!");
            break;
    }
    return 0;
}
