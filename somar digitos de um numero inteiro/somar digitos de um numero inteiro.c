/*Entrada:
164
Saída:
11
*/
#include <stdio.h>

void main(){
    int numero, soma = 0, resto;
    //QUAL O NUMERO ?
    scanf("%d", &numero);
    //LOGICA DA COISA
    while(numero > 0)
    {
        //SEMPRE VAI DAR O VALOR DE CADA CASA DECIMAL
        resto = numero % 10 ;
        //SUBTRAI O NUMERO ENCONTRADO DO NUMERO ORIGINAL
        numero = (numero - resto) / 10 ;
        //SOMATORIO DAS PEÇAS
        soma += resto;
    }
    //IMPRIMIR A SOMA DOS DIGITOS
    printf("%d", soma) ;
}
