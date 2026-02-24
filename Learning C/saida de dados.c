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

/*
Lendo Strings com Espaços: fgets

Para ler strings com espaços em branco, a função fgets é a melhor opção. Ela lê uma linha inteira da entrada, incluindo espaços, até encontrar um caractere de nova linha (\n) ou atingir o tamanho máximo especificado.

char nome[50];
 
printf("Digite seu nome completo: ");
 
fgets(nome, 50, stdin);  Lê no máximo 49 caracteres da entrada padrão (stdin)
 

 fgets inclui o '\n' na string, então podemos removê-lo se necessário
 
nome[strcspn(nome, "\n")] = 0;
 
printf("Nome completo digitado: %s\n", nome);
 
fgets recebe três argumentos:
O array onde a string será armazenada.
O tamanho máximo da string (incluindo o \n e o \0).
O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
*/