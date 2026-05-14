#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[50], cidade1[50], estado2[50], cidade2[50];
  int num1, num2, populacao1, pontos1, populacao2, pontos2;
  float area1, pib1, area2, pib2;
  // Área para entrada de dados
    printf("\nPRIMEIRA CARTA:");
    printf("\nDigite o estado:");
    scanf("%s", estado1);

    printf("Digite o numero da carta (de 1 a 4):");
    scanf("%d", &num1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km): ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade (PIB): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos ");
    scanf("%d", &pontos1);

    //SEGUNDA CARTA---------------------------------------


    printf("\nSEGUNDA CARTA:");
    printf("\nDigite o estado:");
    scanf("%s", estado2);

    printf("Digite o numero da carta (de 1 a 4):");
    scanf("%d", &num2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km): ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade (PIB): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos ");
    scanf("%d", &pontos2);
  
  // Área para exibição dos dados da cidade
    printf("\n----------------C A R T A    1:----------------");
    printf("\nEstado: %s\n", estado1);
    printf("Codigo da carta: %c0%d\n", estado1[0], num1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area (em km): %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos na cidade: %d\n", pontos1);

    printf("\n----------------C A R T A    2:----------------");
    printf("\nEstado: %s\n", estado2);
    printf("Codigo da carta: %c0%d\n", estado2[0], num2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (em km): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos na cidade: %d\n", pontos2);

return 0;
} 
