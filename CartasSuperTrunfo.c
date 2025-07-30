#include <stdio.h>

int main() {
    int populacao , pontosTuristicos , populacao2 , pontosTuristicos2;
    float pib , area , pib2 , area2;
    char nome[100] , estado , codigo[3] , nome2[100] , estado2 , codigo2[3];
    printf("digite o nome da cidade da carta 1 sem espacos \n");
    scanf("%s" , nome);
    printf("digite a letra do estado\n");
    scanf(" %c" , &estado);
    printf("digite o codigo\n");
    scanf("%s" , codigo);
    printf("digite o numero da populacao \n");
    scanf("%d" , &populacao);
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
    scanf("%d" , &populacao2);
    printf("digite a quantidade de pontos turisticos \n");
    scanf("%d" , &pontosTuristicos2);
    printf("digite o pib\n");
    scanf("%f" , &pib2);
    printf("digite a area\n");
    scanf("%f" , &area2);
    
    getchar();
    
    printf("\n-----------------------------------------------------\n carta 1\n");
    //nao sei pq mas aqui no github nao esta aparecendo o nome da primeira cidade
    printf(" CIDADE :%s\n" , nome);
    printf(" ESTADO : %c \n" , estado);
    printf(" CODIGO :%s\n" , codigo);
    printf(" POPULACAO :%d\n" , populacao);
    printf(" PONTOS TURISTICOS :%d\n" , pontosTuristicos);
    printf(" PIB :%f\n" , pib);
    printf(" AREA :%f\n" , area);
    
    printf("\n-----------------------------------------------------\n carta 2\n");

    printf(" CIDADE :%s\n" , nome2);
    printf(" ESTADO : %c \n" , estado2);
    printf(" CODIGO :%s\n" , codigo2);
    printf(" POPULACAO :%d\n" , populacao2);
    printf(" PONTOS TURISTICOS :%d\n" , pontosTuristicos2);
    printf(" PIB :%f\n" , pib2);
    printf(" AREA :%f\n" , area2);





    return 0; 
}