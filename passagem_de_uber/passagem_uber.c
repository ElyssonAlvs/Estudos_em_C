#include <stdio.h>
void main (){
    float d, preco;
    scanf("%f", &d);
    if ((d>0) && (d<30)){
        preco = 5.00 + (0.5*d);
        printf("%.2f", preco);
    }else if (d>30){
        preco = 5.00 + (0.45 * d);
        printf("%.2f", preco);
    }
}
