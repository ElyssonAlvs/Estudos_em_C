#include <stdio.h>
#include <stdlib.h>
// come�o do c�digo
void main(){
    // cria��o das vari�veis
    float num1, num2, soma, sub, div, mult;
    int calc;
    // come�o da l�gica
    printf("Informe o primeiro numero : \n");
    scanf("%f", &num1);
    printf("Informe o segundo numero : \n");
    scanf("%f", &num2);
    printf("Qual calculo voce quer fazer com esses numeros? \n");
    scanf("%d", &calc);
    // estrutura de condi��o para a calculadora realizar qualquer opera��o b�sica;
    if (calc == 1){
        soma = num1 + num2;
        printf("A soma dos numeros informados eh : %1.1f\n", soma);
    }
    if (calc == 2){
        sub = num1 - num2;
        printf("A subtra��o dos numeros informados eh : %1.1f\n", sub);
    }
    if (calc == 3){
        div = num1/num2;
        printf("A divis�o dos numeros informados eh : %1.2f\n", div);
    }
    else if (calc == 4){
        mult = num1 * num2;
        printf("A multiplica��o entre os numeros informados eh : %1.1f", mult);
    }


}
