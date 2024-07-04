#include <stdio.h>
#include <stdlib.h>

void mostraConceito(float media);

int main()
{
    float media = 0;
    printf("Digite a media do Aluno: ");
    scanf("%f", &media);
    mostraConceito(media);

    return 0;
}

void mostraConceito(float media){
    char exibir;
    if(media>= 0.0 && media <= 4.9){
        exibir = 'D';
    }else{
        if(media<=6.9){
            exibir = 'C';
        }
        else{
            if(media<=8.9){
                exibir = 'B';
            }
            else{
                if(media<=10)
                    exibir = 'A';
                else
                    exibir = 'N'; // exibe 'N' se a nota não obedecer o intervalo 0.0 - 10.
            }
        }
    }
    printf("%c", exibir);
}
