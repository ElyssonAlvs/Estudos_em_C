#include <stdio.h>

void main(){
    /*FOR
    //exemplo do Bart escrevendo seu nome na lousa
    vecê poder declarar a variável dentro do laço ex.: for(int i = 0; i<10; i++)
    int num;
    //Bart, escreva seu nome 20 vezes
    for(num = 0; num < 20; num = num + 1 )
    //atribuição da variável(inicialização); condição de saída do loop;como será feita a repetição
    // "num + 1" é a mesma coisa que "num++"
    {
        printf("My name is Bart simpson \n");
    }
    */

    /*WHILE
    a inicialização deve acontecer antes de entrar no loop e alguma das declarações vai afetar a condição
    para que o loop saia

    int num;

    num = 0; //inicialização

    while(num < 10) //condição de saída, condição para executar
    {
        printf("My name is Bart Simpson \n");
        num++; // num = num + 1 / como será feita a repetição
    }
    */

    //DO WHILE - FAZER ENQUANTO
    // sempre é executado pelo menos uma vez um determinado código, independente da condição que for
    int num;

    num = 0;
    //Fazer algo enquanto
    do
    {
        printf("My name is Bart Simpson \n");
        num++;
    }
    //a condição for essa
    while(num < 10      );

}
