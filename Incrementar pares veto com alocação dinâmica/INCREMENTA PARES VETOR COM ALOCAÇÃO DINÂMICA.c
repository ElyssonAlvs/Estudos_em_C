#include <stdio.h>
#include <stdlib.h>

/*
int numeros[n]; alocação estática
int valor; alocação estática

C vai ao SO e pede 1K de memória, o SO devolve o
endereço dessa meória.

Alocação dinâmica de um float

sizeof(tipo_de_variável)
Recebe o tipo de variável, devolver a quantidade de
memória/tamanho que a variável precisa para a vaiável
funcionar.

sizeof(float)


A função malloc vai fazer a comunicação entre
o programador e o SO, ele vai retornar um endereço
de memória, a quantidade de memória que o programador
quer alocar.

Converter o endereço para um endereço de ponteiro float

float* ptf = (float*)malloc(sizeof(float));

Converter o endereço para um endereço de ponteiro int

int* pti = (int*)malloc(sizeof(int));

Se dentro de um laço "for", você não precisar mais de uma alocação
de memória, use a função free(), com o parâmetro dizendo qual endereço
de memória você não precisa mais.


Para alocar dinamicamente um vetor de double de tamanho n, eu preciso
de n vezes o tamanho de um double
sizeof(double) -> tamanho de uma variável double
n*sizeof(tipo_variavel);

double valores[n];
double* valores = (double*)malloc(n*sizeof(float));
Caso nao tenha memoria suficiente
if(valores == NULL){
    printf("Lascou, nao tem memoria")
    exit(-1);
}
valores[0] = 45.89;
valores[5] = 14.78;

free(valores);
*/

int main(){
    int n;
    scanf("%d", &n);

    int* vet = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++) scanf("%d", &vet[i]);

    for(int i = 0; i < n; i++) if(vet[i] % 2 == 0) vet[i]++;

    for(int i = 0; i < n; i++) printf("%d ", vet[i]);


    free(vet);

}
