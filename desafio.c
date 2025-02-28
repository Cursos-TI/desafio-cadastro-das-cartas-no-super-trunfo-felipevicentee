#include<stdio.h> 
int main() {
     char estadoA01[50], estadoB02[50];
     char cidadeA01[50], cidadeB02[50];
     int populacaoA01, populacaoB02;
     float areaA01, areaB02;
     float pibA01, pibB02;
     int pontosturisticosA01, pontosturisticosB02;

     printf("Carta 1:\n");

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

     printf("Carta 2:\n");

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


     printf("Carta 1:\n Estado: %s - Cidade: %s - População: %d - Área: %f - PIB: %f - Pontos Túristicos: %d\n", estadoA01, cidadeA01, populacaoA01, areaA01, pibA01, pontosturisticosA01);  
     printf("Carta 2:\n Estado: %s - Cidade: %s - População: %d - Área: %f - PIB: %f - Pontos Túristicos: %d\n", estadoB02, cidadeB02, populacaoB02, areaB02, pibB02, pontosturisticosB02);  
   
     return 0;
}