#include <stdio.h>

void main(){
    /*FOR
    //exemplo do Bart escrevendo seu nome na lousa
    vec� poder declarar a vari�vel dentro do la�o ex.: for(int i = 0; i<10; i++)
    int num;
    //Bart, escreva seu nome 20 vezes
    for(num = 0; num < 20; num = num + 1 )
    //atribui��o da vari�vel(inicializa��o); condi��o de sa�da do loop;como ser� feita a repeti��o
    // "num + 1" � a mesma coisa que "num++"
    {
        printf("My name is Bart simpson \n");
    }
    */

    /*WHILE
    a inicializa��o deve acontecer antes de entrar no loop e alguma das declara��es vai afetar a condi��o
    para que o loop saia

    int num;

    num = 0; //inicializa��o

    while(num < 10) //condi��o de sa�da, condi��o para executar
    {
        printf("My name is Bart Simpson \n");
        num++; // num = num + 1 / como ser� feita a repeti��o
    }
    */

    //DO WHILE - FAZER ENQUANTO
    // sempre � executado pelo menos uma vez um determinado c�digo, independente da condi��o que for
    int num;

    num = 0;
    //Fazer algo enquanto
    do
    {
        printf("My name is Bart Simpson \n");
        num++;
    }
    //a condi��o for essa
    while(num < 10      );

}
