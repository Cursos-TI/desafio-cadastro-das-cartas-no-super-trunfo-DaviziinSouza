#include <stdio.h>

int main() {

    int escolha1, escolha2, opcao1, opcao2, populacao1 = 986, populacao2 = 874, jogador1, jogador2;

    float valor1, valor2, pontos_turisticos1 = 143, pontos_turisticos2 = 89, area1 = 576483, area2 = 236743, pib1 = 4874, pib2 = 7218, densidade_populacional1, densidade_populacional2;
    
    printf("||--||Escolha um atributo para a Carta 1||--||\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolha1);
    
    printf("||--||Escolha um atributo para a Carta 2||--||\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolha2);
    
    // Atribuir valores com base na escolha do usuário
    switch (escolha1) {
        case 1: valor1 = populacao1; break;
        case 2: valor1 = area1; break;
        case 3: valor1 = pib1; break;
        case 4: valor1 = pontos_turisticos1; break;
        case 5: valor1 = densidade_populacional1; break;
    }
    
    switch (escolha2) {
        case 1: valor2 = populacao2; break;
        case 2: valor2 = area2; break;
        case 3: valor2 = pib2; break;
        case 4: valor2 = pontos_turisticos2; break;
        case 5: valor2 = densidade_populacional2; break;
    }
    
    // Comparação entre os atributos escolhidos
    if (valor1 > valor2) {
        printf("Carta 1 vence com o atributo escolhido!\n");
    } else {
        printf("Carta 2 vence com o atributo escolhido!\n");
    }
    



    
    return 0;
}