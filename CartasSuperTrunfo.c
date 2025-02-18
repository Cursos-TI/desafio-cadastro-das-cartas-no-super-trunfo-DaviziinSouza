#include <stdio.h>

    int main(){
        
        float populacao = 11.45;
        int pontoturistico = 20;
        float area = 248.219;
        float pib = 1.6;
        char estado [15] = "Piracanjuba";
        char nomecidade [15] = "São Paulo";
        char codigocarta [5] = "A01"; 

        printf("Carta 1:\n");
        printf("Estado: %s\n", estado);
        printf("Codigo: %s\n", codigocarta);
        printf("Nome da Cidade: %s\n", nomecidade);
        printf("Populção: %.2f milhões de habitantes\n", populacao);
        printf("Área: %.3f km²\n", area);
        printf("Pib: %.1f Bilhões de Reais\n", pib);
        printf("Pontos Turisticos: %d\n", pontoturistico);

        return 0;  
}