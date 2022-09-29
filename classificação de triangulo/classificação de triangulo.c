#include <stdio.h>
int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c){
        printf("EQ");
    }else if (a + b < c || a + c < b || b + c < a ){
        printf("NT");
    }else if (a != b && b != c){
        printf("ES");
    }else if (a == b || b == c ){
        printf("IS");
    }
}
