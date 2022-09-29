#include <stdio.h>

//FUNCAO QUE VERIFICA SE � VOGAL
int vogal(char letra){
    if(letra == 'A' || letra == 'a' ||
       letra == 'E' || letra == 'e' ||
       letra == 'I' || letra == 'i' ||
       letra == 'O' || letra == 'o' ||
       letra == 'U' || letra == 'u') return 1;
    else return 0;
}

//FUNCAO QUE VERIFICA SE � CONSOANTE
int consoante(char letra){
    if(vogal(letra)) return 0;
    else return 1;
}

int main(){
    //DECLARACAO E RECEBIMENTO DA FRASE
    char frase[101];
    scanf("%[^\n]", frase);

    //CONTADORES DAS VOGAIS E CONSOANTES
    int contV = 0, contC = 0;


    for(int i = 0; frase[i] != '\0'; i++){
        //CONDI��O PARA QUANDO O CARACTERE FOR UMA LETRA
        if(
       (frase[i] >= 65 && frase[i] <= 90) ||
       (frase[i] >= 97 && frase[i] <= 122)
       ){   //CHAMADA DE FUN��ES E ATRIBUI��O AOS RESPECTIVOS CONTADORES
            if(vogal(frase[i])) contV++;
            else if(consoante(frase[i])) contC++;
       }
    }

    //S�IDA DE DADOS COM OS RESULTADOS
    printf("%d %d", contV, contC);

    return 0;
}
