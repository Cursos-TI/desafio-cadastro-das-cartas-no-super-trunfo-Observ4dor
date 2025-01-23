#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Objetivo Novato

int main() {
    char cidade[20];
    float area, pib;
    int populacao;
    int turisticos;
    int estado[20];



    printf("Entre com seu estado \n");
    scanf("%s", &estado);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Entre com sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o Pib: \n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("Estado: %s\n População: %d\n", estado, populacao);
    printf("Cidade: %s\n", cidade);
    printf("Aréa: %f\n Pib: %f\n", area, pib);
    printf("Pontos Turisticos: %d", turisticos);

    return 0;
}