#include <stdio.h>

    int main(){

        //Descrição da carta 1
    int pontoturistico2 = 20;

    float populacao2 = 11.45,
        area2 = 248.219,
        pib2 = 1.6;

    char estado2 [15] = "A",
        nomecidade2 [15] = "São Paulo",
        codigocarta2 [5] = "A01"; 

        printf("---- CARTA 1 ----\n");
        printf("Estado: %s.\n", estado2);
        printf("Codigo: %s.\n", codigocarta2);
        printf("Nome da Cidade: %s.\n", nomecidade2);
        printf("Populção: %.2f milhões de habitantes.\n", populacao2);
        printf("Área: %.3f. km².\n", area2);
        printf("Pib: %.1f Bilhões de Reais\n", pib2);
        printf("Pontos Turisticos: %d.\n\n", pontoturistico2);
    


    //Descrição da carata 2 
    int pontoturistico = 30;

    float populacao = 7.24,
        area = 164.534,
        pib = 1.1;

    char estado [15] = "B",
        nomecidade [15] = "Rio de Janeiro",
        codigocarta [5] = "B02"; 

        printf("---- CARTA 2 ----\n");
        printf("Estado: %s.\n", estado);
        printf("Codigo: %s.\n", codigocarta);
        printf("Nome da Cidade: %s.\n", nomecidade);
        printf("Populção: %.2f milhões de habitantes.\n", populacao);
        printf("Área: %.3f. km².\n", area);
        printf("Pib: %.1f Bilhões de Reais\n", pib);
        printf("Pontos Turisticos: %d.\n", pontoturistico);

        return 0;
    }