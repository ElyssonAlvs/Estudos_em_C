#include <stdio.h>

//L�GICA DA COISA
int pertence_pa(int numero,int a1, int razao){
    int pertence = numero - a1;
    if (pertence % razao == 0){
        //SE FOR IGUAL A 0, RETORNA 1, COM VERDADEIRO
        return 1;
    }else {
        //SE N�O, RETORNO 0, COMO FALSO
        return 0;
    }
}
//UMA FUN��O QUE N�O RETORNA NADA APENAS PARA SER A PRINCIPAL
void main(){
    int razao, a1, numero;
    scanf("%d %d %d", &a1, &razao, &numero);
    int pertence = pertence_pa(numero, a1, razao);
    printf("%d", pertence);

}
