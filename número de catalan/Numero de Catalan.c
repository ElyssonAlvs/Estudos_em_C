#include <stdio.h>


double f_catalan(int n){
    if(n == 0) return 1;
    else{
        return (2 * (2 * n - 1) * f_catalan(n - 1)) / (n + 1);
    }
}


void main(){
    double numero;
    scanf("%lf", &numero);
    double catalan = f_catalan(numero);
    printf("%.0lf", catalan);
}
