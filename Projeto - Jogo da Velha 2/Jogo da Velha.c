#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o para exibir a matriz tabuleiro com os seus respectivos valores.
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

//Fun��o principal
int main(){
    //Seta o idioma local como Portugu�s.
    setlocale(LC_ALL, "Portuguese");
    //Cria a matriz de posi��es; � representada no jogo como o Tabuleiro.
    char posicao[3][3]={ {' ', ' ', ' '},
                         {' ', ' ', ' '},
                         {' ', ' ', ' '}, };

    //Cria as vari�veis inteiras necess�rias para a aplica��o.
    /*
        numerodejogadas: controla o n�mero de jogadas total em um jogo da velha.
        lin: controla a quantidade de linhas da matriz.
        col: controla a quantidade de colunas da matriz.
        sair: controla se o usu�rio quer sair da aplica��o ou n�o(0 = n�o, 1 = sim).
    */
    int numerodejogadas = 0 ,lin =  0, col = 0,sair = 0;

    //La�o de repeti��o respons�vel pela execu��o do jogo. Repete at� sair for diferente de 0.
    do{

        system("cls");
    //Exibie o menu de op��es

        printf("1.Jogar\n");
        printf("2.Instru��es\n");
        printf("3.Ranking\n");
        printf("4.Sair\n");
        printf("Escolha a sua op��o: ");
        scanf("%d", &com.fazer);

        //Trata a op��o e executa a respectiva fun��o.
        switch(com.fazer){
        //Come�a um jogo.
        case 1:
            for(numerodejogadas = 1; numerodejogadas <= 9; numerodejogadas++){
                exibirTabuleiro(posicao); //Exibi a matriz atualizada com as posi��es
                printf("Linha:"); //Pede uma linha para ser jogada.
                scanf("%d", &lin);
                printf("Coluna:"); //Pede uma coluna para ser jogada.
                scanf("%d", &col);
                if(lin<1 || col<1 || lin>3 || col>3){ //Verifica se os valores digitados s�o v�lidos.
                    printf("\n\nPosi��o inv�lida!!!\n");
                    lin=0;
                    col=0;
                    printf("\n\n");
                    system("pause");
                }
                else{
                    if(posicao[lin-1][col-1]!=' '){ //Verfica se os valores j� foram digitados.
                        printf("\n\nPosi��o j� utilizada!!!\n");
                        lin=0; //Reseta as vari�veis
                        col=0;
                        printf("\n\n");
                        system("pause");
                    }
                    else{
                        if(com.vez%2==0){ //Controla o marcador de cada jogador( X ou O ) com base no n�mero de vezes.
                            posicao[lin-1][col-1]='X'; //Par para X.
                        }
                        else{
                            posicao[lin-1][col-1]='O'; //Impar para O.
                        }

                    }
                }

                //Verficar se h� um ganhador, com as poss�veis posi��es vitoriosas(horizontal ou vertical)
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
                   //Caso n�o haja ganhador, ser� necess�rio verificar a possibilidade de ser "velha"(empate).
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

            //Resetar as posi��es do tabuleiro depois que o jogo acaba!
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
            //Pede para o usu�rio confirmar se deseja realmente sair, se sim sai, se n�o, permanece na aplica��o
            printf("\n\nVoc� tem certeza( Digite sem acentos )?");
            scanf("%s", com.certeza);
            if(stricmp(com.certeza, "Sim")==0){
                sair = 1;
                printf("\n\nPrograma Encerrado pelo usu�rio!");
                printf("\nObrigado por JOGAR!");
                printf("\n\n");
            }
            else{
                if(stricmp(com.certeza, "Nao")==0){
                    continue;
                }
                else{
                    printf("\n\nVoc� digitou um caractere inv�lido!!!\n");
                    printf("\n\n");
                    system("pause");
                }
            }
        break;


        default:
            //A��o padr�o, executada se nenhuma caso for verdadeiro.
            printf("\n\nVoc� digitou um caractere inv�lido!!!");
            printf("\n\n");
            system("pause");
        break;
        }
        //Limpa o scanf para evitar poss�veis erros.
        fflush(stdin);
    }while(sair == 0);
}
