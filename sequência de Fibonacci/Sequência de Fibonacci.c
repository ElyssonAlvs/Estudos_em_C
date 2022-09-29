#include <stdio.h>

int fib(int n){
    if(n == 1 || n == 2) return 1;
    else{
        return fib(n-1) + fib(n-2);
    }
}

void main(){
    int numero;
    scanf("%d", &numero);
    int func_fib = fib(numero);
    printf("%d", func_fib);
}
