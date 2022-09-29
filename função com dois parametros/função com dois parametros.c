#include <stdio.h>
#include <stdlib.h>

int func(int m, int n){
    if (n == 1)  return m + 1;
    else if (m == 1) return n + 1;
    else if (m > 1 && n > 1){
        return func(m,n-1) + func(m-1,n);
    }


}


int main(){
    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);
    printf("%d", func(valor1, valor2));
}
