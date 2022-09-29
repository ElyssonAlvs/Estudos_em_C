#include <stdio.h>

int fatorial (int n){
    int v = 0;

    if(n <= 1) v = 1;
    else v = n * fatorial(n-1);

    return v;
}

int main(){
    int n;
    scanf("%d", &n);
    int fat = fatorial(n);
    printf("%d", fat);
}
