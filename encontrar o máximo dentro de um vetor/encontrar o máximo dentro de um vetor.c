#include <stdio.h>
#include <stdlib.h>
int maior_vetor(int num1, int num2, int num3, int num4){
    //inicializar o vetor
    int vet[4] = {num1, num2, num3, num4};
    //inicializar um vari�vel a partir do vetor de primeira posi��o
    int maior = vet[0];
    for(int i = 0; i <= 4; i++){
        //condicional para pegar o maior n�mero
        if(maior < vet[i]) maior = vet[i];
    }
    return maior;
}

int main(){
    int num1, num2, num3, num4;
    //pegar os livros
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("%d", maior_vetor(num1, num2, num3, num4));
}
