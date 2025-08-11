#include <stdio.h>

int main() {
    unsigned long int populacao , populacao2;
    int pontosTuristicos , pontosTuristicos2;
    float pib , area , pib2 , area2 , densidadePopulacinal , pibPerCapita , densidadePopulacinal2 , pibPerCapita2 , superPoder , superPoder2;
    char nome[100] , estado , codigo[3] , nome2[100] , estado2 , codigo2[3];
    printf("digite o nome da cidade da carta 1 sem espacos \n");
    scanf("%s" , nome);
    printf("digite a letra do estado\n");
    scanf(" %c" , &estado);
    printf("digite o codigo\n");
    scanf("%s" , codigo);
    printf("digite o numero da populacao \n");
    scanf("%lu" , &populacao);
    printf("digite a quantidade de pontos turisticos \n");
    scanf("%d" , &pontosTuristicos);
    printf("digite o pib\n");
    scanf("%f" , &pib);
    printf("digite a area\n");
    scanf("%f" , &area);

    getchar();

    printf("digite o nome da cidade da carta 2 sem espacos\n");
    scanf("%s" , nome2);
    printf("digite a letra do estado\n");
    scanf(" %c" , &estado2);
    printf("digite o codigo\n");
    scanf("%s" , codigo2);
    printf("digite o numero da populacao \n");
    scanf("%lu" , &populacao2);
    printf("digite a quantidade de pontos turisticos \n");
    scanf("%d" , &pontosTuristicos2);
    printf("digite o pib\n");
    scanf("%f" , &pib2);
    printf("digite a area\n");
    scanf("%f" , &area2);
    densidadePopulacinal = (float) populacao / area;
    densidadePopulacinal2 = (float) populacao2 / area2;
    pibPerCapita = (float) pib / populacao;
    pibPerCapita2 = (float) pib2 / populacao2;

    
    getchar();
    
    printf("\n-----------------------------------------------------\n carta 1\n");
    //nao sei o por que mas aqui no github ele nao printa o nome da cidade
    printf(" CIDADE :%s\n" , nome);
    printf(" ESTADO : %c \n" , estado);
    printf(" CODIGO :%s\n" , codigo);
    printf(" POPULACAO :%lu\n" , populacao);
    printf(" PONTOS TURISTICOS :%d\n" , pontosTuristicos);
    printf(" PIB :%f\n" , pib);
    printf(" AREA :%f\n" , area);
    printf("densidade populacinal : %f\n" , densidadePopulacinal);
    printf("pib per capita: %f\n" , pibPerCapita);

    
    printf("\n-----------------------------------------------------\n carta 2\n");

    printf(" CIDADE :%s\n" , nome2);
    printf(" ESTADO : %c \n" , estado2);
    printf(" CODIGO :%s\n" , codigo2);
    printf(" POPULACAO :%lu\n" , populacao2);
    printf(" PONTOS TURISTICOS :%d\n" , pontosTuristicos2);
    printf(" PIB :%f\n" , pib2);
    printf(" AREA :%f\n" , area2);
    printf("densidade populacinal : %f\n" , densidadePopulacinal2);
    printf("pib per capita: %f\n" , pibPerCapita2);

    printf("---------------------------VS--------------------------------\n");
    printf("Populacao: Carta %d venceu\n", (populacao > populacao2) ? 1 : 2);
    printf("Pontos turisticos: Carta %d venceu\n", (pontosTuristicos > pontosTuristicos2) ? 1 : 2);
    printf("Pib: Carta %d venceu\n", (pib > pib2) ? 1 : 2);
    printf("Area: Carta %d venceu\n", (area > area2) ? 1 : 2);
    printf("densidade populacional: Carta %d venceu\n", (densidadePopulacinal < densidadePopulacinal2) ? 1 : 2);
    printf("Pib Per Capita: Carta %d venceu\n", (pibPerCapita > pibPerCapita2) ? 1 : 2);
    superPoder = (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1.0f / densidadePopulacinal);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacinal2);
    printf("Super Poder: Carta %d venceu\n", (superPoder > superPoder2) ? 1 : 2);

    return 0; 
}