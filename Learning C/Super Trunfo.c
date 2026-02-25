#include <stdio.h>

int main() {

    //Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[10], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    //Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[10], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    //---CADASTRO DA CARTA 1---
    printf("--- Cadastro Carta 1---\n ");

    printf("Estado:");
    scanf (" %c", &estado1);// Espaço antes do %c limpa o buffer!

    printf("Código da Carta:");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade1);
    
    printf("População:");
    scanf("%d", &populacao1);

    printf("área: ");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf ("Número de Pontos Turísticos:");
    scanf("%d", &pontos1);

    printf("\n--- Cadastro Carta 2 ---\n");

    printf("Estado: ");
    scanf(" %c", &estado2); // Espaço antes do %c limpa o buffer!

    printf("Código da Carta: ");
    scanf(" %s", codigo2); // Strings não usam &

    printf("Nome da Cidade:");
    scanf(" %s", &cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área:");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // EXIBIÇÃO DOS DADOS
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n",area1); //%.2f para formatar decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n",area2); //%.2f para formatar decimais
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;


}