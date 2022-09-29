#include <stdio.h>

void main(){
    //RECEBER A FRASE
    char frase[101];
    scanf("%[^\n]", frase);
    //SABER O TAMANHO DA FRASE, DO TEXTO
    int t = 0;
    //CALCULAR O TAMANHO
    while(frase[t] != '\0') t++;
    //DUAS VEZES O TAMANHO DA FRASE DE ENTRADA + 1.
    char frase2[2*(t+1)];

    int b, f;//INICIO E O FINAL DE UMA PALAVRA
    int j = 0;//VAI GUARDAR A PRÓXIMA POSIÇÃO LIVRE QUE VAI ADICIONAR UMA LETRA DENTRO DE FRASE2
    b = 0;//A PRIMEIRA PALAVRA
    for(int i = 0; i <= t; i++){
        //QUANDO APARECER UM ESPAÇO EM BRANCO EU SEI QUE CHEGUEI AO FINAL DE UMA PALAVRA
        if(frase[i] != ' ' && frase[i] != '\0'){
            //COPIOU A PALAVRA, FALTA OS ESPAÇOS EM BRANCO
            frase2[j++] = frase[i];
        }else{
            f = i - 1;
            //O VALOR DE b E f
            frase2[j++] = ' ';
            //b É O INDICE DO INICIO DA PALAVRA
            //j É O INDICE DO FINAL DA PALAVRA
            while(b <= f){
                //"REPETIR A PALAVRA"
                frase2[j++] = frase[b++];
            }
            if(frase[i] == ' ')
                frase2[j++] = ' ';
            else frase2[j] = '\0';
            //AO FINAL DA PALAVRA, TEM O ESPAÇO EM BRANCO, O INDICE APOS O ESPAÇO EM BRANCO É O INICIO DE UMA NOVA PALAVRA
            b = i + 1;
        }
    }
    printf("%s", frase2);

}
/*
1 - A PRIMEIRA PALAVRA
2 - QUANDO ESTAR ENTRE DOIS ESPAÇOS EM BRANCO
3 - A ULTIMA PALAVRA
*/
