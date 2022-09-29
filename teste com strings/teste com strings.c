#include <stdio.h>

void main(){
    //RECEBER A FRASE
    char frase[51];
    scanf("%[^\n]", frase);
    //LOGICA DA COISA -> IMPRIMIR LETRA POR LETRA
    for(int i = 0;frase[i] != '\0'; i++){
        //frase[i] -> OQUE TÁ NA POSIÇÃO i
        printf("%c\n", frase[i]);
    }
}
/*
v[o,l,a\0]
frase[0] == o
frase[1] == l
frase[2] == a
frase[i] == oque ta no indice
o
l
a
*/
