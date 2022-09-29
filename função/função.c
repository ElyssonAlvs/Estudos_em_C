/*COLOCAR C�DIGOS DENTRO DE UMA 'CAIXA' E DENTRO DO C�DIGO
VAI SER CHAMADA PRA EXECUTAR O C�DIGO PRESENTE DENTRO DA FUN��O
*/
/*
Tipo_retorno nome_fun��o(par�metros){
    corpo de c�digo
}
{N�O SE PODE DEFINIR FUN��ES DENTRO DE FUN��ES}
PAR�METROS :
    -> LISTA DE VARI�VEIS SEPARADA POR V�RGULA E SEUS TIPOS
    -> PODE N�O TER PAR�METROS
    -> PAR�NTESES S�O NECESS�RIOS
    -> S�O INFORMA��ES QUE O UTILIZADOR DA FUN��O DEVE INFORMAR

*/
//***************************************************************************
#include <stdio.h>
// ELEVA UM N�MERO A OUTRO (INTS)
int potencia(int base, int exp){
    int res = 1;
    for(int i = 1; i <= exp; i++)
        res *= base;
    return res;//UMA VARI�VEL DO MESMO TIPO DA FUN��O OU UM N�MERO FIXO
}
//PROGRAMA QUE USA A POTENCIA
int main(){
    int b, exp;
    printf("INFORME A BASE E O EXPOENTE:");
    scanf("%d %d", &b, &exp);
    int pot = potencia(b,exp);
    printf("RESULTADO = %d", pot);
}
/*
    QUANTIDADE, SEQU�NCIA E TIPO SE FUN��ES TIVEREM ESSAS CARACTER�STICAS IGUAIS
    ELAS S�O AS MSM FUN��ES IGUAIS;
    PODEM TER FUN��ES COM MESMO NOME, SE N�O TIVER A QUANTIDADE, SEQU�NCIA E TIPO IGUAIS
*/
