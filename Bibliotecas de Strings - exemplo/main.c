#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char * checaNome(char temp[100], int aux);
static int msgErro(char temp[100]);

int main()
{
    int sair = 0, aux = 0;
    char temp[100], primeiroNome[25],segundoNome[25];

    do{

        printf("Digite o seu primeiro nome: ");
        scanf("%s",temp);
        primeiroNome = checaNome(temp,1);
        printf("\nDigite o seu segundo nome: ");
        segundoNome = checaNome(temp,2);


        sair = 1;
    }while(sair == 0);
    return 0;
}

static char* checaNome(char temp[100], int aux){
    if(strlen(temp) == 25){
            for(int i=0; i<100; i++){
                if(isalpha(temp[i])== 0){
                    msgErro(temp, aux);
                    break;
                }
            }

    }else{
         msgErro(temp);
    }
}

static void msgErro (char temp[100], int aux){
     while(strlen(temp) > 25){
           printf("\n%c Digite com até 25 carateres:    %c ",186,186);
           scanf("%s",temp);
        }
        checaNome(temp[100], aux);
}

