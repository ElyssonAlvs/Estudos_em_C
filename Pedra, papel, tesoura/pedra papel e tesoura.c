#include <stdio.h>
void main (){
    int a ,b;
    scanf("%d\n%d", &a, &b);
    if (a != b ) {

        if ( (a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2) ){
                printf("%2");
        }else{
                printf("1");
        }
    }else {
        printf("0");
    }
}
