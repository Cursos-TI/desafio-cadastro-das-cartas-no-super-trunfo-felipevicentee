#include<stdio.h> 
int main() {
     char estadoA01[50];
     char cidadeA01[50];
     int populacaoA01;
     float areaA01;
     float pibA01;
     int pontosturisticosA01;

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
     scanf("%d", pontosturisticosA01);

     printf("Estado: %s - Cidade: %s - População: %d - Área: %f - PIB: %f - Pontos Túristicos: %d\n", estadoA01, cidadeA01, populacaoA01, areaA01, pibA01, pontosturisticosA01);  

    return 0;
}