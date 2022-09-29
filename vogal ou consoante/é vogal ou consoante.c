#include <stdio.h>
#include <stdlib.h>
//FUNÇÃO QUE VAI PERCORRER O VETOR PARA VER SE ELE É UMA LETRA DO ALFABETO
int is_letter(char letter[]){
    for(int i = 0; letter[i] != '\0'; i++){
        if((letter[i] >= 65 && letter[i] <= 90) || (letter[i] >= 97 && letter[i] <= 122)) return 1;
        else return 0;
    }
}
//FUNÇÃO QUE VAI IDENTIFICAR QUAL O TIPO DE LETRA
char typer_letter(char letter[]){
    //PERCORRER O VETOR
    for(int i = 0; letter[i] != '\0'; i++){
        if(letter[i] == 65 || letter[i] == 69 || letter[i] == 73 || letter[i] == 79 || letter[i] == 85
        || letter[i] == 97 || letter[i] == 101 || letter[i] == 105 || letter[i] == 111 || letter[i] == 117)
        return 86;
        else return 67;
    }
}
//MAIN
void main(){
    char letra[2];
    //LER
    scanf("%[^\n]", letra);
    int letter = is_letter(letra);
    char typer = typer_letter(letra);
    printf("%d %c", letter, typer);
}

