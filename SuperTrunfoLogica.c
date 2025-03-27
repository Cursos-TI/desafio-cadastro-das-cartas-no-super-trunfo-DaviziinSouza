#include <stdio.h>
int main (){

    float pontos_turisticos1 = 143, pontos_turisticos2 = 89, area1 = 576483, area2 = 236743, pib1 = 4874, pib2 = 7218, densidade_populacional1, densidade_populacional2;

    int valor1, valor2, opcao1, opcao2, escolha1, escolha2, populacao1 = 986, populacao2 = 874, jogador1, jogador2;

    char pais1 [20] = "Brasil", pais2 [20] = "Japão";

densidade_populacional1 = populacao1 / area1;
densidade_populacional2 = populacao2 / area2;


    printf("||***|| Bem vindo ao jogo de logica de super trunfo! ||**||\n");
    printf("Escolha uma das opções abaixo.\n");
    printf("1. Iniciar jogo.\n");
    printf("2. Regras do jogo.\n");
    printf("3. Sair do Jogo\n");
    scanf("%d", &opcao1);

switch (opcao1){

    //detalhe das cartas
    case 1:
    printf("### Inicio da comparação de cartas ###\n");
    printf("Veja as informações da sua primeira carta abaixo.\n");
    printf("\n### Inicio da comparação de cartas ###\n");
    printf("####- Veja as informações das sua primeira carta abaixo -####\n");
    printf("Carta 1:\n");
    printf("Nome do País: %s", pais1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %.f km²\n", area1);
    printf("PIB: %.f bilhões de reais \n", pib1);
    printf("Pontos turísticos: %.f \n", pontos_turisticos1);
    printf("Densidade demografica: %.f \n\n");
   
    printf("####- Veja as informações da sua segunda carta abaixo -####\n");
    printf("Carta 2:\n");
    printf("Nome do País: %s", pais2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %.f km²\n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Pontos turísticos: %.f \n", pontos_turisticos2);
    printf("Densidade demografica: %.f \n");

    printf("||--||Escolha o atributo da sua primeira carta||--||\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &escolha1);

    printf("||--||Escolha o atributo da sua segunda carta||--||\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &escolha2);

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

    //Comparando os valores das cartas
        if (valor1 > valor2) {
            printf("Carta 1 Venceu!\n");
        } else if (valor1 < valor2) {
            printf("Carta 2 venceu!\n");
        } else {
            printf("As cartas tem o mesmo valor!\n");
        }
    
    break;
    
    case 2:
    printf("||--||Regras do jogo||--||\n");
    printf("As regras do jogo consistem em comparar os atributos das cartas para determinar a mais forte.\n");
    printf("O tema deste jogo é 'Países', onde vocé comparará os atributos das cidades.\n");
    break;  

    case 3:
    printf("||--||Saindo do jogo||--||\n");
    printf("Obrigado por jogar!\n");
    break;

    default:
    printf("Opção inválida!\n");
}

    return 0;
}