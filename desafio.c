#include <stdio.h>

int main() {
    // Variáveis
    char codigocartaA01[50], codigocartaB02[50];
    char estadoA01[50], estadoB02[50], cidadeA01[50], cidadeB02[50];
    unsigned long int populacaoA01, populacaoB02;
    int pontosturisticosA01, pontosturisticosB02;
    float areaA01, areaB02, pibA01, pibB02;
    float densidadeA01, densidadeB02, pibPerCapitaA01, pibPerCapitaB02;
    int superpoderA01, superpoderB02;

    // Entrada de dados para a primeira carta
    printf("Qual o Código da carta ?\n");
    scanf("%s", codigocartaA01);
    printf("Qual o nome do Estado ? \n");
    scanf("%s", estadoA01);
    printf("Qual o nome da Cidade ? \n");
    scanf("%s", cidadeA01);
    printf("Qual a População ?\n");
    scanf("%lu", &populacaoA01);
    printf("Qual a Área da cidade ?\n");
    scanf("%f", &areaA01);
    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pibA01);
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticosA01);

    // Cálculos
    densidadeA01 = (float) populacaoA01 / areaA01;
    pibPerCapitaA01 = pibA01 / populacaoA01;

    // Entrada de dados para a segunda carta
    printf("Qual o Código da carta ?\n");
    scanf("%s", codigocartaB02);
    printf("Qual o nome do Estado ? \n");
    scanf("%s", estadoB02);
    printf("Qual o nome da Cidade ? \n");
    scanf("%s", cidadeB02);
    printf("Qual a População ?\n");
    scanf("%lu", &populacaoB02);
    printf("Qual a Área da cidade ?\n");
    scanf("%f", &areaB02);
    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pibB02);
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticosB02);

    // Cálculos
    densidadeB02 = (float) populacaoB02 / areaB02;
    pibPerCapitaB02 = pibB02 / populacaoB02;

    // Calcular o super poder
    superpoderA01 = (int) ((float) populacaoA01 + areaA01 + pibA01 + pontosturisticosA01 + pibPerCapitaA01 + (1.0f / densidadeA01));
    superpoderB02 = (int) ((float) populacaoB02 + areaB02 + pibB02 + pontosturisticosB02 + pibPerCapitaB02 + (1.0f / densidadeB02));

    // Imprimir atributos das cartas
    printf("\n=== Dados das Cartas ===\n");
    printf("Carta 1 - %s - Estado: %s - Cidade: %s\n", codigocartaA01, estadoA01, cidadeA01);
    printf("População: %lu - Área: %.2f - PIB: %.2f - Pontos Turísticos: %d\n", populacaoA01, areaA01, pibA01, pontosturisticosA01);
    printf("Densidade Populacional: %.2f - PIB per Capita: %.2f\n", densidadeA01, pibPerCapitaA01);

    printf("Carta 2 - %s - Estado: %s - Cidade: %s\n", codigocartaB02, estadoB02, cidadeB02);
    printf("População: %lu - Área: %.2f - PIB: %.2f - Pontos Turísticos: %d\n", populacaoB02, areaB02, pibB02, pontosturisticosB02);
    printf("Densidade Populacional: %.2f - PIB per Capita: %.2f\n", densidadeB02, pibPerCapitaB02);

    // Comparações entre atributos das cartas
    printf("\n=== Comparação dos Atributos ===\n");
    printf("População da carta 1 é maior que a da carta 2? %d\n", populacaoA01 > populacaoB02);
    printf("Área da carta 1 é maior que a da carta 2? %d\n", areaA01 > areaB02);
    printf("PIB da carta 1 é maior que o da carta 2? %d\n", pibA01 > pibB02);
    printf("Quantidade de Pontos Turísticos da carta 1 é maior que a da carta 2? %d\n", pontosturisticosA01 > pontosturisticosB02);
    printf("Densidade Populacional da carta 1 é maior que a da carta 2? %d\n", densidadeA01 > densidadeB02);
    printf("PIB per Capita da carta 1 é maior que o da carta 2? %d\n", pibPerCapitaA01 > pibPerCapitaB02);
    printf("Super Poder da carta 1 é maior que o da carta 2? %d\n", superpoderA01 > superpoderB02);

    // Exibir quem venceu o desafio
    printf("\nQual carta venceu o desafio? Carta 1 (1) ou Carta 2 (0): %d\n", superpoderA01 >= superpoderB02);

    return 0;
}
