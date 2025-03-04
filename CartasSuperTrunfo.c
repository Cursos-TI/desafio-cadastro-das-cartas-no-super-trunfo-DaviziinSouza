#include <stdio.h>

int main() {

    float pontos_turisticos1, pontos_turisticos2, area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2, inverso1, inverso2, SuperPoder1, SuperPoder2;

    unsigned long int populacao1, populacao2;

    char estado1[20], estado2[20], cidade1[20], cidade2[20], codigo_carta1[20], codigo_carta2[20];

//cadastro das primeira carta
printf("[*****INICIO DO JOGO SUPER TRUNFO*****]\n\n");
printf("|||| CADASTRE SUA PRIMEIRA CARTA ||||\n\n");

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
scanf("%lu", &populacao1);
getchar();

printf("Digite os pontos turisticos: ");
scanf("%f", &pontos_turisticos1);
getchar();

printf("Digite o pib: ");
scanf("%f", &pib1);
getchar();

densidade_populacional1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;
inverso1 = populacao1 / pib1;

printf("Densidade demografica: %.2f\n", densidade_populacional1);
printf("PIB per capita: %.2f\n", pib_per_capita1);

SuperPoder1 = pontos_turisticos1 + area1 + pib1 + populacao1 + pib_per_capita1 + inverso1;

printf("O super poder dessa carta é: %.2f\n\n", SuperPoder1);

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
scanf("%lu", &populacao2);
getchar();

printf("Digite os pontos turisticos: ");
scanf("%f", &pontos_turisticos2);
getchar();

printf("Digite o pib: ");
scanf("%f", &pib2);
getchar();

densidade_populacional2 = populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;
inverso2 = populacao2 / pib2;

printf("Densidade demografica: %.2f\n", densidade_populacional2);
printf("PIB per capita: %.2f\n", pib_per_capita2);

SuperPoder2 = pontos_turisticos2 + area2 + pib2 + populacao2 + pib_per_capita2 + inverso2;

printf("O super poder dessa carta é: %.2f\n\n", SuperPoder2);

printf("---COMPARAÇÃO ENTRE AS CARTAS---\n\n");

if (populacao1 > populacao2) {
    printf("População: Carta 1 vence!\n");
} else if (populacao2 > populacao1) {
    printf("População: Carta 2 vence!\n");
} else {printf("Empate!\n");
}

 if (pib1 > pib2) {
    printf("Pib: Carta 1 vence!\n");
} else if (pib2 > pib1) {
    printf("Pib: Carta 2 vence!\n");
} else {printf("Empate!\n");
}

 if (densidade_populacional1 > densidade_populacional2) {
    printf("Densidade demografica: Carta 1 vence!\n");
} else if (densidade_populacional2 > densidade_populacional1) {
    printf("Densidade demografica: Carta 2 vence!\n");
} else {printf("Empate!\n");
}

 if (pib_per_capita1 > pib_per_capita2) {
    printf("Pib per capita: Carta 1 vence!\n");
} else if (pib_per_capita2 > pib_per_capita1) {
    printf("Pib per capita: Carta 2 vence!\n");
} else {printf("Empate!\n");
}

 if (SuperPoder1 > SuperPoder2) {
    printf("Super poder: Carta 1 vence!\n"); 
} else {
    printf("Super poder: Carta 2 vence!\n");
}
    
return 0;
}
