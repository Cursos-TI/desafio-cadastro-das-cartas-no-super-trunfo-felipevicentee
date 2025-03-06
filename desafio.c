#include<stdio.h>

int main() {
    // Variáveis
    char codigocartaA01[50], codigocartaB02[50];
    char estadoA01[50], estadoB02[50], cidadeA01[50], cidadeB02[50];
    int populacaoA01, populacaoB02, pontosturisticosA01, pontosturisticosB02;
    float areaA01, areaB02, pibA01, pibB02;
    float densidadeA01, densidadeB02, pibPerCapitaA01, pibPerCapitaB02;

    // Interagir com o terminal
    printf("Qual o Código da carta ?\n");
    scanf("%s", &codigocartaA01);
    printf("Qual o nome do Estado ? \n");
    scanf("%s", &estadoA01);
    printf("Qual o nome da Cidade ? \n");
    scanf("%s", &cidadeA01);
    printf("Qual a População ?\n");
    scanf("%d", &populacaoA01);
    printf("Qual a Área da cidade ?\n");
    scanf("%f", &areaA01);
    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pibA01);
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticosA01);

    // Calcular Densidade Populacional e PIB per Capita
    densidadeA01 = (float) populacaoA01 / areaA01;
    pibPerCapitaA01 = pibA01 / populacaoA01;

    printf("Qual o Código da carta ?\n");
    scanf("%s", &codigocartaB02);
    printf("Qual o nome do Estado ? \n");
    scanf("%s", &estadoB02);
    printf("Qual o nome da Cidade ? \n");
    scanf("%s", &cidadeB02);
    printf("Qual a População ?\n");
    scanf("%d", &populacaoB02);
    printf("Qual a Área da cidade ?\n");
    scanf("%f", &areaB02);
    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pibB02);
    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticosB02);

    // Calcular Densidade Populacional e PIB per Capita
    densidadeB02 = (float) populacaoB02 / areaB02;
    pibPerCapitaB02 = pibB02 / populacaoB02;

    // Imprimir resultados
    printf("Código da Carta: %s Estado: %s - Cidade: %s - População: %d - Área: %f - PIB: %f - Pontos Túristicos: %d\n", codigocartaA01, estadoA01, cidadeA01, populacaoA01, areaA01, pibA01, pontosturisticosA01);
    printf("Densidade Populacional: %f habitantes/km²\n", densidadeA01);
    printf("PIB per Capita: %f\n", pibPerCapitaA01);

    printf("Código da Carta: %s Estado: %s - Cidade: %s - População: %d - Área: %f - PIB: %f - Pontos Túristicos: %d\n", codigocartaB02, estadoB02, cidadeB02, populacaoB02, areaB02, pibB02, pontosturisticosB02);
    printf("Densidade Populacional: %f habitantes/km²\n", densidadeB02);
    printf("PIB per Capita: %f\n", pibPerCapitaB02);

    return 0;
}
