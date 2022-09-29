/*COLOCAR CÓDIGOS DENTRO DE UMA 'CAIXA' E DENTRO DO CÓDIGO
VAI SER CHAMADA PRA EXECUTAR O CÓDIGO PRESENTE DENTRO DA FUNÇÃO
*/
/*
Tipo_retorno nome_função(parâmetros){
    corpo de código
}
{NÃO SE PODE DEFINIR FUNÇÕES DENTRO DE FUNÇÕES}
PARÂMETROS :
    -> LISTA DE VARIÁVEIS SEPARADA POR VÍRGULA E SEUS TIPOS
    -> PODE NÃO TER PARÂMETROS
    -> PARÊNTESES SÃO NECESSÁRIOS
    -> SÃO INFORMAÇÕES QUE O UTILIZADOR DA FUNÇÃO DEVE INFORMAR

*/
//***************************************************************************
#include <stdio.h>
// ELEVA UM NÚMERO A OUTRO (INTS)
int potencia(int base, int exp){
    int res = 1;
    for(int i = 1; i <= exp; i++)
        res *= base;
    return res;//UMA VARIÁVEL DO MESMO TIPO DA FUNÇÃO OU UM NÚMERO FIXO
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
    QUANTIDADE, SEQUÊNCIA E TIPO SE FUNÇÕES TIVEREM ESSAS CARACTERÍSTICAS IGUAIS
    ELAS SÃO AS MSM FUNÇÕES IGUAIS;
    PODEM TER FUNÇÕES COM MESMO NOME, SE NÃO TIVER A QUANTIDADE, SEQUÊNCIA E TIPO IGUAIS
*/
