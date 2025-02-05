#include <stdio.h>

int main() {
    // 8 estados, 4 cidades = 8*4=32
    char estado1[8], estado2[8];
    char codigocarta1[4], codigocarta2[4];   
    char cidade1[32], cidade2[32];
    float area1, area2;
    float pib1, pib2;
    unsigned long int populacao1, populacao2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pib_percapita1, pib_percapita2;
    float superpoder1, superpoder2;

    printf("Cadastro de Cartas Super Trunfo!\n");

    // Cadastro das cartas
    printf("Entre com seu estado: \n");
    scanf("%s", estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", codigocarta1);

    printf("Entre com sua cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    // Calculando a densidade populacional
    densidade1 = populacao1 / area1;
    printf("Densidade populacional: %.2f\n", densidade1);

    // Calculando o PIB per capita
    pib_percapita1 = pib1 / populacao1;
    printf("PIB per capita: %.2f\n", pib_percapita1);

    // Calculando o super poder (exemplo de fórmula)
    superpoder1 = (pib_percapita1 * turisticos1) / densidade1;
    printf("Super poder: %.2f\n", superpoder1);

    printf("Entre com seu estado: \n");
    scanf("%s", estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", codigocarta2);

    printf("Entre com sua cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    // Calculando a densidade populacional
    densidade2 = populacao2 / area2;
    printf("Densidade populacional: %.2f\n", densidade2);

    // Calculando o PIB per capita
    pib_percapita2 = pib2 / populacao2;
    printf("PIB per capita: %.2f\n", pib_percapita2);

    // Calculando o super poder 
    superpoder2 = (pib_percapita2 * turisticos2) / densidade2;
    printf("Super poder: %.2f\n", superpoder2);
    return 0;
}