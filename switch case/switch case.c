#include <stdio.h>

void main(){
    int num;
    // uma estrutura de decis�o; permite que condifique decis�es, baseado em um �nico valor
    printf("Escolha um dia da semana:");
    scanf("%d", &num);

    switch(num) {

        case 1:
            printf("Domingo");
            break; //sair da estrutura do switch, se n�o tiver, ele vai passar por toda a estrutura
        case 2:
            printf("Segunda");
            break;
        case 3:
            printf("Terca");
            break;
        case 4:
            printf("Quarta");
            break;
        case 5:
            printf("Quinta");
            break;
        case 6:
            printf("Sexta");
            break;
        case 7:
            printf("Sabado");
            break;
        default : //se o usu�rio digitar qualquer n�mero fora dos especificados, ele mostrar� a mensagem segunite
            printf("Numero invalido");
        break;
    }
}

