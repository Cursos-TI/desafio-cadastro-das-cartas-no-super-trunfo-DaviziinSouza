#include <stdio.h>
int main (){

    float pontos_turisticos1 = 143, pontos_turisticos2 = 89, area1 = 576483, area2 = 236743, pib1 = 4874, pib2 = 7218, densidade_populacional1, densidade_populacional2;

    int opcao1, opcao2, populacao1 = 986, populacao2 = 874, jogador1, jogador2;

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

    case 1:
    printf("### Inicio da comparação de cartas ###\n");
    printf("Veja as informações da sua primeira carta abaixo.\n");
    printf("\n### Inicio da comparação de cartas ###\n");
    printf("####- Veja as informações das suas cartas abaixo -####\n");
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

    printf("||--||Escolha uma das opçoes abaixo para comparação||--||\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &opcao2);

    switch (opcao2){
        case 1:
        if (populacao1 > populacao2){
            printf("Carta 1 vence\n");
        }else{
            printf("Carta 2 vence\n");
        }
        break;

        case 2:
        if (area1 > area2){
            printf("Carta 1 vence\n");
        }else{
            printf("Carta 2 vence\n");
        }
        break;

        case 3:
        if (pib1 > pib2){
            printf("Carta 1 vence\n");
        }else{
            printf("Carta 2 vence\n");
        }
        break;

        case 4:
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("Carta 1 vence\n");
        }else{
            printf("Carta 2 vence\n");
        }
        break;

        case 5:
        if (densidade_populacional1 < densidade_populacional2){
            printf("Carta 1 vence\n");
        }else{
            printf("Carta 2 vence\n");
        }
        break;
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

}

    return 0;
}