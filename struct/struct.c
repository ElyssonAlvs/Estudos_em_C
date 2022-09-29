#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
typedef struct{
    char nome[50];
    char numero[50];
    int nota;
}ficha_aluno;

void imprime(ficha_aluno aluno){
    printf("Nome = ", aluno.nome);
    printf("Numero = ", aluno.numero);
    printf("Nota = ", aluno.nota);


}
void main(){

    ficha_aluno aluno;

    printf("Nome = ");
    scanf(" %[^\n]", aluno.nome);
    printf("Numero = ");
    scanf(" %[^\n]", aluno.numero);
    printf("Nota = ");
    scanf("%d", aluno.nota);

    imprime(aluno);

}
*/
/*
typedef struct{
    int x, y;
}Ponto;

void main(){
    Ponto pA, pB;
    float resultado;
    printf("Digite o ponto Y na posicao A : \n");
    scanf("%d", &pA.x);
    printf("Digite o ponto X na posicao A : \n");
    scanf("%d", &pA.y);

    printf("Digite o ponto Y na posicao B : \n");
    scanf("%d", &pB.x);
    printf("Digite o ponto X na posica B : \n");
    scanf("%d", &pB.y);

    resultado = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.x, 2));

    printf("Distancia entre os ponto A e B : %.2f \n", resultado);
}
*/
/*
typedef struct{
    char nome[50];
    float n1, n2, n3;
}aluno;

float media(aluno nota1, aluno nota2, aluno nota3){
    return (nota1.n1 + nota2.n2 + nota3.n3)/3;
}

void main(){
    aluno a, nota1, nota2, nota3;
    printf("Digite seu nome : \n");
    scanf("%[^\n]", a.nome );
    printf("Digite sua primeira nota : \n");
    scanf(" %f", &nota1.n1);
    printf("Digite sua segunda nota : \n");
    scanf("%f", &nota2.n2);
    printf("Digite sua terceira nota : \n");
    scanf("%f", &nota3.n3);

    printf("A media das 3 notas vai ser : %.2f",media(nota1, nota2, nota3) );
}
*/
/*
#include <stdio.h>
#include <math.h>
typedef struct{
    char nome[51];
    float altura;
    int idade;
    float peso;
}Prontuario;
int imc(float peso, float altura){
    int conta = (peso) / (pow(altura, 2));
    return conta;
}
int main(){
    Prontuario paciente;
    scanf("%[^\n] %f \n %d \n %f", paciente.nome, &paciente.altura, &paciente.idade, &paciente.peso);
    float calculo = imc(paciente.peso, paciente.altura);
    printf("Dados do paciente:\n");
    printf("nome: %s\n", paciente.nome);
    printf("altura: %.2f\n", paciente.altura);
    printf("idade: %d\n", paciente.idade);
    printf("peso: %.2f\n", paciente.peso);
    if(calculo >= 18.50 && calculo <= 24.99){
        printf("imc: normal");
    }
    else if(calculo >= 25.00 && calculo <= 29.99){
        printf("imc: sobrepeso");
    }
    else if(calculo >= 30.00 && calculo <= 39.99){
        printf("imc: obesidade");
    }
    else if(calculo >= 40.00){
        printf("imc: obesidade grave");
    }
    else{
        printf("abaixo do peso");
    }
}
*/
/*
CONSIDERANDO UM TRIÂNGULO RETÂNGULO EU QUERO A ÁREA E HIPOTENUSA DESSE TRIÂNGULO
ENTRADA :
base altura
SAÍDA :
área hipotenusa

#include <stdio.h>
#include <math.h>

typedef struct{
    float base, altura, area, hipotenusa;
}Triangulo;

float area(float base, float altura){
    return (base * altura)/2;
}

float hipotenusa(float base, float altura){
    float hip = sqrt(pow(base,2) + pow(altura,2));
    return hip;
}

void main(){
    Triangulo dados;
    scanf("%f %f", &dados.base, &dados.altura);
    printf("Area de  : %.1f | Hipotenusa : %.1f", area(dados.base,dados.altura), hipotenusa(dados.base, dados.altura));
}
*/

/*
typedef struct{

    int num1, num2;

}Numero;

int soma(Numero n1, Numero n2){

    return n1.num1 + n2.num2 ;

}
void main(){
    Numero n1,n2;

    scanf("%d %d", &n1.num1, &n2.num2);


    printf("%d", soma(n1,n2));
}
*/
/*
typedef struct{
    int cod;
    char nome[30];
    float salario;
    int dpt;
    int cargo;
}Funcionario;
int main(){
    Funcionario funcionario[4];
    for(int i = 0; i <= 3; i++){
        scanf("%[^\n] %d \n %f \n %d \n %d ", funcionario[i].nome, &funcionario[i].cod, &funcionario[i].salario, &funcionario[i].dpt, &funcionario[i].cargo);
        printf("dados do usuario \n");
        printf("nome : %s\n", funcionario[i].nome);
        printf("cod : %d\n", funcionario[i].cod);
        printf("salario : %.2f\n", funcionario[i].salario);
        printf("dpt : %d \n", funcionario[i].dpt);
        printf("cargo : %d \n", funcionario[i].cargo);
    }

}
*/
