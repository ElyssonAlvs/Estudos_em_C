#include <stdio.h>
char vogal(char frase){
    for(int i = 0, int contadorvogal = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == 65 || frase[i] == 69 || frase[i] == 73 || frase[i] == 79
        || frase[i] == 85 || frase[i] == 97 || frase[i] == 101 || frase[i] == 105
        || frase[i] == 111 || frase[i] == 117)//CONDICOES DO IF
        {
        contadorvogal++
        }
    }
    return contadorvogal;
}


int main(){
    char frase[101];
    scanf("%[^\n]", frase);
    vogal = vogal(frase);
}

