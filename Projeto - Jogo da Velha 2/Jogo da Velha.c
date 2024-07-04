#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função para exibir a matriz tabuleiro com os seus respectivos valores.
void exibirTabuleiro(char a[3][3]){
    system ("cls");
    printf("\t %c | %c | %c\n", a[0][0], a[0][1], a[0][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c\n", a[1][0], a[1][1], a[1][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c\n", a[2][0], a[2][1], a[2][2]);

}
//Struct que resume e guarda os comandos do jogo.
struct comandos{
    int fazer;
    char certeza[25];
    int vez;
} com;

//Função principal
int main(){
    //Seta o idioma local como Português.
    setlocale(LC_ALL, "Portuguese");
    //Cria a matriz de posições; é representada no jogo como o Tabuleiro.
    char posicao[3][3]={ {' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '}, };

    //Cria as variáveis inteiras necessárias para a aplicação.
    /*
        numerodejogadas: controla o número de jogadas total em um jogo da velha.
        lin: controla a quantidade de linhas da matriz.
        col: controla a quantidade de colunas da matriz.
        sair: controla se o usuário quer sair da aplicação ou não(0 = não, 1 = sim).
    */
    int numerodejogadas = 0 ,lin =  0, col = 0,sair = 0;

    //Laço de repetição responsável pela execução do jogo. Repete até sair for diferente de 0.
    do{

        system("cls");
    //Exibie o menu de opções

        printf("1.Jogar\n");
        printf("2.Instruções\n");
        printf("3.Ranking\n");
        printf("4.Sair\n");
        printf("Escolha a sua opção: ");
        scanf("%d", &com.fazer);

        //Trata a opção e executa a respectiva função.
        switch(com.fazer){
        //Começa um jogo.
        case 1:
            for(numerodejogadas = 1; numerodejogadas <= 9; numerodejogadas++){
                exibirTabuleiro(posicao); //Exibi a matriz atualizada com as posições
                printf("Linha:"); //Pede uma linha para ser jogada.
                scanf("%d", &lin);
                printf("Coluna:"); //Pede uma coluna para ser jogada.
                scanf("%d", &col);
                if(lin<1 || col<1 || lin>3 || col>3){ //Verifica se os valores digitados são válidos.
                    printf("\n\nPosição inválida!!!\n");
                    lin=0;
                    col=0;
                    printf("\n\n");
                    system("pause");
                }
                else{
                    if(posicao[lin-1][col-1]!=' '){ //Verfica se os valores já foram digitados.
                        printf("\n\nPosição já utilizada!!!\n");
                        lin=0; //Reseta as variáveis
                        col=0;
                        printf("\n\n");
                        system("pause");
                    }
                    else{
                        if(com.vez%2==0){ //Controla o marcador de cada jogador( X ou O ) com base no número de vezes.
                            posicao[lin-1][col-1]='X'; //Par para X.
                        }
                        else{
                            posicao[lin-1][col-1]='O'; //Impar para O.
                        }

                    }
                }

                //Verficar se há um ganhador, com as possíveis posições vitoriosas(horizontal ou vertical)
                if((posicao[0][0]=='X' && posicao[0][1]=='X' && posicao[0][2]=='X')||
                   (posicao[1][0]=='X' && posicao[1][1]=='X' && posicao[1][2]=='X')||
                   (posicao[2][0]=='X' && posicao[2][1]=='X' && posicao[2][2]=='X')||
                   (posicao[0][0]=='X' && posicao[1][0]=='X' && posicao[2][0]=='X')||
                   (posicao[0][1]=='X' && posicao[1][1]=='X' && posicao[1][2]=='X')||
                   (posicao[0][2]=='X' && posicao[1][2]=='X' && posicao[2][2]=='X')||
                   (posicao[0][0]=='X' && posicao[1][1]=='X' && posicao[2][2]=='X')||
                   (posicao[0][2]=='X' && posicao[1][1]=='X' && posicao[2][0]=='X'))
                   {
                        printf("\n\n Jogador X venceu!!!\n");
                        system("pause");
                        printf("\n\n");
                        break;
                   }
                 else{

                   if((posicao[0][0]=='O' && posicao[0][1]=='O' && posicao[0][2]=='O')||
                   (posicao[1][0]=='O' && posicao[1][1]=='O' && posicao[1][2]=='O')||
                   (posicao[2][0]=='O' && posicao[2][1]=='O' && posicao[2][2]=='O')||
                   (posicao[0][0]=='O' && posicao[1][0]=='O' && posicao[2][0]=='O')||
                   (posicao[0][1]=='O' && posicao[1][1]=='O' && posicao[1][2]=='O')||
                   (posicao[0][2]=='O' && posicao[1][2]=='O' && posicao[2][2]=='O')||
                   (posicao[0][0]=='O' && posicao[1][1]=='O' && posicao[2][2]=='O')||
                   (posicao[0][2]=='O' && posicao[1][1]=='O' && posicao[2][0]=='O'))
                   {
                        printf("\n\n Jogador O venceu!!!\n");
                        system("pause");
                        printf("\n\n");
                        break;
                   }
                   //Caso não haja ganhador, será necessário verificar a possibilidade de ser "velha"(empate).
                   else{

                       if((posicao[0][0]=='X'||posicao[0][0]=='O') &&
                       (posicao[0][1]=='X'||posicao[0][1]=='O') &&
                       (posicao[0][2]=='X'||posicao[0][2]=='O') &&
                       (posicao[1][0]=='X'||posicao[1][0]=='O') &&
                       (posicao[1][1]=='X'||posicao[1][1]=='O') &&
                       (posicao[1][2]=='X'||posicao[1][2]=='O') &&
                       (posicao[2][0]=='X'||posicao[2][0]=='O') &&
                       (posicao[2][1]=='X'||posicao[2][1]=='O') &&
                       (posicao[2][2]=='X'||posicao[2][2]=='O'))
                       {
                            printf("\n\nVELHA!!!\n");
                            printf("\n\n");
                            system("pause");
                            break;
                       }

                   }
                 }
                //Adiciona a contagem de vezes de cada jogador para controlar as rodadas ou turnos no jogo.
                com.vez += 1;
             }

            //Resetar as posições do tabuleiro depois que o jogo acaba!
             for(lin = 0; lin < 3 ; lin++){
                for(col = 0; col < 3 ; col++){
                    posicao[lin][col] = ' ';
                }
             }

             //Atualizar o Ranking



        break;

        case 2:
            printf("\n--------------------------------------------------------------------\n");
            printf("EM BREVE");
            printf("\n--------------------------------------------------------------------\n");
        break;

        case 3:
            printf("\n--------------------------------------------------------------------\n");
            printf("EM BREVE");
            printf("\n--------------------------------------------------------------------\n");
        break;

        case 4:
            //Pede para o usuário confirmar se deseja realmente sair, se sim sai, se não, permanece na aplicação
            printf("\n\nVocê tem certeza( Digite sem acentos )?");
            scanf("%s", com.certeza);
            if(stricmp(com.certeza, "Sim")==0){
                sair = 1;
                printf("\n\nPrograma Encerrado pelo usuário!");
                printf("\nObrigado por JOGAR!");
                printf("\n\n");
            }
            else{
                if(stricmp(com.certeza, "Nao")==0){
                    continue;
                }
                else{
                    printf("\n\nVocê digitou um caractere inválido!!!\n");
                    printf("\n\n");
                    system("pause");
                }
            }
        break;


        default:
            //Ação padrão, executada se nenhuma caso for verdadeiro.
            printf("\n\nVocê digitou um caractere inválido!!!");
            printf("\n\n");
            system("pause");
        break;
        }
        //Limpa o scanf para evitar possíveis erros.
        fflush(stdin);
    }while(sair == 0);
}
