#include <stdio.h>

int main () {
    int idade, matricula; 
    float altura;
    char nome [50];
    
    printf("digite sua idade \n");
    scanf("%d", &idade);

    printf("digite sua matricula \n");
    scanf("%d", &matricula);

    printf("digite sua altura \n");
    scanf("%f", &altura);

    printf("digite seu nome \n");
    scanf(" %s", nome);

    printf("nome do aluno: %s - matrícula: %d \n", nome, matricula);
    printf("idade: %d - Altura: %.2f \n", idade, altura);

    return 0;
}