#include <stdio.h>

char vogal(char frase[]){
    int qntdV = 0;
    for(int i = 0; frase[i] != '\0'; i++)
    if((frase[i] >= 65 && frase[i] <= 90 ) || (frase[i] >= 97 && frase[i] <= 122)){
        {
            if(frase[i] == 65 || frase[i] == 69 || frase[i] == 73 || frase[i] == 79
            || frase[i] == 85 || frase[i] == 97 || frase[i] == 101 || frase[i] == 105
            || frase[i] == 111 || frase[i] == 117)
            {
                qntdV++;
            }
        }
    }
    return qntdV;
}

/*char consoante(char frase[]){
    int qntdC = 0;
    for(int i = 0; frase[i] != '\0'; i++)
    {
        if((frase[i] >= 65 && frase[i] <= 90 ) || (frase[i] >= 97 && frase[i] <= 122))
        {
            if(frase[i] != 65 || frase[i] != 69 || frase[i] != 73 || frase[i] != 79
            || frase[i] != 85 || frase[i] != 97 || frase[i] != 101 || frase[i] != 105
            || frase[i] != 111 || frase[i] != 117)
            {
                qntdC++;
            }
        }
    }
    return qntdC;
}
*/
void main(){

    char frase[101];
    scanf("%[^\n]", frase);

    printf("%d %d", vogal(frase),vogal(frase));
}
