#include <stdio.h>
void main(){

    int quantidade, numero = 0.0, somatorio = 0.0, numero_anterior = 0.0, diferenca = 0.0;
    scanf("%d", &quantidade);

    for(int i = 1; i<=quantidade; i++){ // "i" é a posição

        scanf("%d", &numero);

         if (numero % 2 != 0){

             if(i != 1){
                 diferenca = numero - numero_anterior ;
                    if(diferenca < 0) diferenca *= -1 ;
                    somatorio -= diferenca ;
             }
             numero_anterior = numero ;
         }else{
            somatorio += numero ;
            numero_anterior = numero ;
         }
    }
    printf("%d", somatorio) ;
}
