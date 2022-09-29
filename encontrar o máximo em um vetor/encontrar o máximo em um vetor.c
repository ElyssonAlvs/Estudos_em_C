#include <stdio.h>
//com struct
typedef struct{
    int num1, num2, num3, num4;
}Numero;

int maior( Numero num1, Numero num2, Numero num3, Numero num4){
    Numero vet[4] = {num1, num2, num3, num4};
    Numero maior = vet[0];
    for(int i = 0; i < 4; i++){
        if(maior < vet[i]) maior = vet[i];
    }
    return maior;
}

void main(){
    Numero num1, num2, num3, num4;
    scanf("%d %d %d %d", &Numero.num1, &Numero.num2, &Numero.num3, &Numero.num4);
    printf("%d", maior(num1, num2, num3, num4));
}
//sem o uso de struct
int maior_vetor(int num1, int num2, int num3, int num4){
    //inicializar o vetor
    int vet[4] = {num1, num2, num3, num4};
    //inicializar um variável a partir do vetor de primeira posição
    int maior = vet[0];
    for(int i = 0; i <= 4; i++){
        //condicional para pegar o maior número
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
