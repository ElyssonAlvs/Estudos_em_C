#include <stdio.h>
#include <stdlib.h>


void mm_vetor(int numeros[], int n, int *menor, int *maior) {

    for(int i = 0; i < n; i++){
        if(i == 0 || numeros[i] > *maior) *maior = numeros[i];
        if(i == 0 || numeros[i] < *menor) *menor = numeros[i];
    }

}

int main() {

    int n, menor, maior;

    scanf("%d", &n);

    int numeros[n];

    for(int i = 0; i < n; i++) scanf("%d", &numeros[i]);

    mm_vetor(numeros, n, &menor, &maior);

    printf("%d %d", menor, maior);

    return 0;
}
