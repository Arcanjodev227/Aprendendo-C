#include <stdio.h>

// Pense nas variáveis como caixas onde você pode armazenar informações. Cada caixa tem um nome, e você pode usar esse nome para colocar algo dentro dela ou pegar o que está lá. Em programação, essas caixas são usadas para guardar valores que podem mudar enquanto o programa está rodando.

int main() {
    int idade = 10;
    int quantidade = 10;
    float altura = 1.70;
    double peso = 69;
    char letra = 'b';
    char nome [20] = "Julia"; 

    printf("minha idade é %d\n", idade);
    printf("o meu nome é: %s\n", nome);
    printf("minha altura é: %.2f\n", altura); // %.2f é usado para mostrar apenas duas casa decimais do número de ponto flutuante.  
}

/*
A seguir, você tem uma lista dos principais especificadores utilizados:

 

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.

*/