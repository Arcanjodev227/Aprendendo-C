#include <stdio.h>

int main () {
    int idade; 
    float altura;
    char opcao;
    char nome [20];
    printf("Digite sua idade: \n");
    scanf("%d", &idade); // irá ler o numero que o usuário digitar e colocar na variável "idade".
    printf("A idade é: %d\n", idade);
    printf("Digite sua altura: \n");
    scanf("%f", &altura); 
    printf("A altura é: %.2f\n", altura);
    printf("Digite a letra da opção: \n");
    scanf(" %c", &opcao);
    printf("A opção escolhida é: %c\n", opcao);
    printf("Digite seu nome: \n");
    scanf("%s", nome);
    printf("O nome é: %s", nome);
}