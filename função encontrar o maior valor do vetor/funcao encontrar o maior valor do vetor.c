#include <stdio.h>
//VETOR DE INTEIROS E O TAMANHO DO VETOR
int maior_vetor (int n, int vet[n]){
    int maior = vet[0];
    for(int i = 1; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    return maior;
}
void main(){
    int tamanho_vetor, maior;
    scanf("%d", &tamanho_vetor);
    int vet[tamanho_vetor];
    for(int i = 0; i < tamanho_vetor; i++){
        scanf("%d", &vet[i]);
    }
    maior = maior_vetor(tamanho_vetor, vet);
    printf("%d", maior);


}
