#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    float notas[3], media;
}Aluno;


int main()
{
    int qtdA = 0, qtdN = 0, soma = 0, N[10][5];
    Aluno aluno[10];
    printf("Digite as notas de Cada Aluno: ");

    for(qtdA=1; qtdA<=10;qtdA++){

        printf("\n\n  Aluno %i",qtdA);
        printf("\n     Matricula do Aluno: ");
        scanf("%i", &aluno[qtdA].matricula);

        for(qtdN = 1; qtdN<=3; qtdN++){

            printf("\n      %i Nota: ", qtdN);
            scanf("%f", &aluno[qtdA].notas[qtdN]);
            soma+=aluno[qtdA].notas[qtdN];
        }
        aluno[qtdA].media = soma/qtdN;
    }

    system("cls");

    qtdA = 0;

     for(qtdA=1; qtdA<=10;qtdA++){

        printf("%i     ",aluno[qtdA].matricula);

        for(qtdN = 1; qtdN<=3; qtdN++){

            printf("%f     ", aluno[qtdA].notas[qtdN]);
        }

        printf("%f"aluno[qtdA].media);
        printf("\n");
    }

}
