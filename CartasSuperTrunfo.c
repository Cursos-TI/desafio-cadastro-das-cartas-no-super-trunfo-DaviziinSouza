#include <stdio.h>

int main() {

    float pontos_turisticos1, pontos_turisticos2, area1, area2, pib1, pib2, populacao1, populacao2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;
    char estado1[20], estado2[20], cidade1[20], cidade2[20], codigo_carta1[20], codigo_carta2[20];

//cadastro das primeira carta
printf("|||| CADASTRE SUA PPRIMEIRA CARTA ||||\n\n");

printf("Digite o estado:");
fgets(estado1, 20, stdin);

printf("Digite o codigo da carta: ");
fgets(codigo_carta1, 20, stdin);

printf("Digite a cidade: ");
fgets(cidade1, 20, stdin);

printf("Digite a area: ");
scanf("%f", &area1);
getchar();

printf("Digite a populacao: ");
scanf("%f", &populacao1);
getchar();

printf("Digite os pontos turisticos: ");
scanf("%f", &pontos_turisticos1);
getchar();

printf("Digite o pib: ");
scanf("%f", &pib1);
getchar();

printf("Densidade demografica: %.2f\n", populacao1 / area1);
printf("PIB per capita: %.2f\n", pib1 / populacao1);

//cadastro da segunda carta
printf("|||| CADASTRE SUA SEGUNDA CARTA ||||\n\n");

printf("Digite o estado:");
fgets(estado2, 20, stdin);

printf("Digite o codigo da carta: ");
fgets(codigo_carta2, 20, stdin);

printf("Digite a cidade: ");
fgets(cidade2, 20, stdin);

printf("Digite a area: ");
scanf("%f", &area2);
getchar();

printf("Digite a populacao: ");
scanf("%f", &populacao2);
getchar();

printf("Digite os pontos turisticos: ");
scanf("%f", &pontos_turisticos2);
getchar();

printf("Digite o pib: ");
scanf("%f", &pib2);
getchar();

printf("Densidade demografica: %.2f\n", populacao2 / area2);
printf("PIB per capita: %.2f\n", pib2 / populacao2);

return 0;
}