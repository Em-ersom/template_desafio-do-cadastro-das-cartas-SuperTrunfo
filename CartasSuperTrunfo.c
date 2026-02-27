#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Declaração de variáveis para duas cartas
    char cod1[4], cod2[4];
    char nome1[50], nome2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pts1, pts2;

    // Variáveis calculadas
    float dens1, dens2, pibCap1, pibCap2, superPoder1, superPoder2;

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Código (ex: A01): ");
    scanf("%s", cod1);
    printf("Nome da Cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pts1);

    // Cálculos Carta 1
    dens1 = (float)pop1 / area1;
    pibCap1 = (pib1 * 1000000000) / pop1; // PIB em bilhões
    superPoder1 = (float)pop1 + area1 + pib1 + (float)pts1 + pibCap1 - dens1;

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Código (ex: A02): ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pts2);

    // Cálculos Carta 2
    dens2 = (float)pop2 / area2;
    pibCap2 = (pib2 * 1000000000) / pop2;
    superPoder2 = (float)pop2 + area2 + pib2 + (float)pts2 + pibCap2 - dens2;

    // Exibição dos Resultados
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: %s venceu (%d)\n", (pop1 > pop2) ? nome1 : nome2, (pop1 > pop2));
    printf("Área: %s venceu (%d)\n", (area1 > area2) ? nome1 : nome2, (area1 > area2));
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? nome1 : nome2, (pib1 > pib2));
    printf("Pontos Turísticos: %s venceu (%d)\n", (pts1 > pts2) ? nome1 : nome2, (pts1 > pts2));
    printf("Densidade Populacional: %s venceu (%d)\n", (dens1 < dens2) ? nome1 : nome2, (dens1 < dens2));
    printf("PIB per Capita: %s venceu (%d)\n", (pibCap1 > pibCap2) ? nome1 : nome2, (pibCap1 > pibCap2));
    printf("Super Poder: %s venceu (%d)\n", (superPoder1 > superPoder2) ? nome1 : nome2, (superPoder1 > superPoder2));

    return 0;
}