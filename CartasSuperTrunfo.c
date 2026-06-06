#include <stdio.h>

int main(){

    ///DECLARANDO VARIAVEIS
    char estado1[50], cidade1[50], estado2[50], cidade2[50];
    int num1, num2, populacao1, pontos1, populacao2, pontos2;
    float area1, pib1, area2, pib2;


    //PRIMEIRA CARTA-----------------------------------

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
    

    // Operacoes 

     float densidade1 = populacao1 / area1;
     float densidade2 = populacao2 / area2;

     float percapita1 = pib1 / populacao1;
     float percapita2 = pib2 / populacao2;

     float superpoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + (1.0 / densidade1 + pontos1);
     float superpoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1.0 / densidade2) + pontos2;

    // RESULTADO

    printf("\n----------------C A R T A    1:----------------");
    printf("\nEstado: %s\n", estado1);
    printf("Codigo da carta: %c0%d\n", estado1[0], num1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area (em km): %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos na cidade: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: R$%.2f\n", percapita1);
    printf("Super Poder: %f\n", superpoder1);



    printf("\n----------------C A R T A    2:----------------");
    printf("\nEstado: %s\n", estado2);
    printf("Codigo da carta: %c0%d\n", estado2[0], num2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area (em km): %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de pontos turisticos na cidade: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: R$%.2f\n", percapita2);
    printf("Super Poder: %f\n", superpoder2);

    // COMPARANDO RESULTADOS

    printf("\n-------C O M P A R A N D O    R E S U L T A D O S:----------------------\n");
   
    printf("\nPopulacao: Carta %d venceu (%d)\n",
       (populacao1 > populacao2) ? 1 : 2,
       populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n",
       (area1 > area2) ? 1 : 2,
       area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
       (pib1 > pib2) ? 1 : 2,
       pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
       (pontos1 > pontos2) ? 1 : 2,
       pontos1 > pontos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
       (densidade1 < densidade2) ? 1 : 2,
       densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
       (percapita1 > percapita2) ? 1 : 2,
       percapita1 > percapita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
       (superpoder1 > superpoder2) ? 1 : 2,
       superpoder1 > superpoder2);
       
    printf("\n--------------------------------------------------\n");

    return 0;
}
