#include <stdio.h>

int main() {
    
    char estado1[20], estado2[20];
    char codigocarta1[20], codigocarta2[20];   
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
    scanf(" %[^\n]", &estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigocarta1);

    printf("Entre com sua cidade: \n");
    scanf(" %[^\n]", &cidade1);

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
    superpoder1 = populacao1 + area1 + pib1 + turisticos1;
    printf("Super poder: %.2f\n", superpoder1);

    //cadastro carta 2
    printf("Entre com seu estado: \n");
    scanf(" %[^\n]", &estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigocarta2);

    printf("Entre com sua cidade: \n");
    scanf(" %[^\n]", &cidade2);

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
    superpoder2 = populacao2 + area2 + pib2 + turisticos2;
    printf("Super poder: %.2f\n", superpoder2);

    // Mostrando os Resultaddos
    printf("=======RESULTADOS=======\n");
    printf("Estado: %s\n", estado1);
    printf("Código carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Área (em km²): %.2f\n", area1);
    printf("População: %lu\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_percapita1);
    printf("Super Poder: %.2f\n", superpoder1);


    // Resultado carta 2
    printf("=======RESULTADOS=======\n");
    printf("Estado: %s\n", estado2);
    printf("Código carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Área (em km²): %.2f\n", area2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_percapita2);
    printf("Super Poder: %.2f\n", superpoder2);



    if (densidade1 < densidade2){
        printf("A Cidade 1 vence a Densisade Populacional!\n");
    }else{
        printf("A Cidade 2 vence a Densidade Populacional!\n");
    }

    if (populacao1 > populacao2){
        printf("A Cidade 1 vence na População!\n");        
    } else {
        printf("A Cidade 2 vence na População!\n");
    }
    
    if (area1 > area2){
        printf("A Cidade 1 vence na Área!\n");
    } else {
        printf("A Cidade 2 vence na Área!\n");
    }
    
    if (pib1 > pib2){
        printf("A Cidade 1 vence no PIB!\n");
    } else{
        printf("A Cidade 2 vence no PIB!\n");
    }
    
    if (turisticos1 > turisticos2){
        printf("A cidade 1 vence nos Pontos Turísticos!\n");
    } else{
        printf("A cidade 2 vence nos Pontos Turísticos!\n");
    }    
 
    if (superpoder1 > superpoder2){
        printf("O super poder 1 e maior! \n");
    }else{
        printf("o super poder 2 e maior! \n");
    }


    return 0;
}
