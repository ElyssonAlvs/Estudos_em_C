#include <stdio.h>

void main(){
    int num;
    // uma estrutura de decisão; permite que condifique decisões, baseado em um único valor
    printf("Escolha um dia da semana:");
    scanf("%d", &num);

    switch(num) {

        case 1:
            printf("Domingo");
            break; //sair da estrutura do switch, se não tiver, ele vai passar por toda a estrutura
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
        default : //se o usuário digitar qualquer número fora dos especificados, ele mostrará a mensagem segunite
            printf("Numero invalido");
        break;
    }
}

