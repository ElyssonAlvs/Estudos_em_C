#include <stdio.h>
#include <stdlib.h>

char conversor(char letra[]){
    //pegar a letra at� o '\0', significado de 'enter' do teclado
    for(int i = 0; letra[i] != '\0'; i++){
        //condicional para descobrir se a letra � mai�scula ou n�o
        if(letra[i] >= 97 && letra[i] <= 122){
            //fazer a convers�o a partir da soma
            letra[i] -= 32;
            return letra[i];
        }else return letra[i];
    }
}

void main(){
    char letra[2];
    //pegar a letra
    scanf("%[^\n]", letra);
    //aplica��o da fun��o
    printf("%c", conversor(letra));
}
