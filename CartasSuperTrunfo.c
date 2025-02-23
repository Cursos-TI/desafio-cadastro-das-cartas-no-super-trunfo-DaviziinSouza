#include <stdio.h>

int main() {

    float pontos_turisticos1, pontos_turisticos2, area1, area2, pib1, pib2, populacao1, populacao2;
    char estado1[20], estado2[20], cidade1[20], cidade2[20], codigo_carta1[20], codigo_carta2[20];

//cadastro das cartas
printf("|||| CADASTRE SUA PPRIMEIRA CARTA ||||\n");
printf("Digite o estado: ");
scanf("%[^\n]s", estado1);
printf("Digite o codigo da carta: ");
scanf("%s", codigo_carta1);
printf("Digite a cidade: ");
scanf("%s", cidade1);
printf("Digite a area: ");
scanf("%f", &area1);
printf("Digite a populacao: ");
scanf("%f", &populacao1);
printf("Digite os pontos turisticos: ");
scanf("%f", &pontos_turisticos1);
printf("Digite o pib: ");
scanf("%f", &pib1);
getchar();

printf("|||| CADASTRE SUA SEGUNDA CARTA ||||\n");
printf("Digite o estado: ");
scanf("%[^\n]s", estado2);
printf("Digite o codigo da carta: ");
scanf("%s", codigo_carta2);
printf("Digite a cidade: ");
scanf("%s", cidade2);
printf("Digite a area: ");
scanf("%f", &area2);
printf("Digite a populacao: ");
scanf("%f", &populacao2);
printf("Digite os pontos turisticos: ");
scanf("%f", &pontos_turisticos2);
printf("Digite o pib: ");
scanf("%f", &pib2);
getchar();

return 0;
}