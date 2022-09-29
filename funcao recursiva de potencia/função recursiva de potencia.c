#include <stdio.h>
#include <stdlib.h>


double f_potencia(int base, int expoente){

    if(expoente == 0) return 1;
    else{
        double result = base * f_potencia(base, expoente - 1);
        return result;
    }
}

void main(){
    int base, expoente;
    scanf("%d %d", &base, &expoente);
    printf("%.0f", f_potencia(base, expoente));
}
