#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato
// Nível Aventureiro
// Nível Mestre


int main() {

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    long double pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float inverso_densidade_populacional1, inverso_densidade_populacional2;
    float Superpoder1, Superpoder2;
    
 
    //coletando dados 1
    printf("Jogador 1:\n");
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o código de 01 a 02:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área de sua cidade em km²:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf(" %Lf", &pib1);
    printf("Digite o número de pontos turísticos de sua cidade:\n");
    scanf(" %d", &pontosTuristicos1);


    //coletando dados 2
    printf("\n\nJogador 2:\n");
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado2);
    printf("Digite o código de 01 a 04:\n");
    scanf("%2s", &codigo2);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área de sua cidade em km²:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf(" %Lf", &pib2);
    printf("Digite o número de pontos turísticos de sua cidade:\n");
    scanf(" %d", &pontosTuristicos2);

    //imprimindo dados 1
    printf("\nJogador 1 Carta:\n");
    printf("Seu Estado é: %c\n", estado1);
    printf("Seu código é: %c%s\n", estado1, codigo1);
    printf("Sua cidade é: %s\n", cidade1);
    printf("Populacao é: %d\n", populacao1);
    printf("A Área da sua cidade é: %.2f km²\n", area1);
    printf("O PIB de sua cidade é: %Lf Bilhões de Reais\n", pib1);
    printf("O Número de pontos turísticos são: %d\n\n", pontosTuristicos1);
    printf("A Densidade populacional é: %.2f Hab/km²\n", densidadepopulacional1 = populacao1/area1);
    printf("O PIB per capita é: %.2f Reais\n", pibpercapita1 = pib1/populacao1);
    printf("O inverso da densidade populacional é: %.2f\n", inverso_densidade_populacional1 = 1/densidadepopulacional1);
    printf("Super Poder da Carta 1 é: %.2f\n", populacao1 + area1 + pib1 + pontosTuristicos1 + 
                                            pibpercapita1 + inverso_densidade_populacional1);

    //imprimindo dados 2
    printf("Jogador 2 Carta:\n");
    printf("Seu Estado é: %c\n", estado2);
    printf("Seu código é: %c%s\n", estado2, codigo2);
    printf("Sua cidade é: %s\n", cidade2);
    printf("Populacao é: %d\n", populacao2);
    printf("A área da sua cidade é: %.2f km²\n", area2);
    printf("O PIB de sua cidade é: %Lf bilhões de reais\n", pib2);
    printf("O número de pontos turísticos são: %d\n\n", pontosTuristicos2);
    printf("A Densidade populacional é: %.2f Hab/km²\n", densidadepopulacional2 = populacao2/area2);
    printf("O PIB per capita é: %.2f Reais\n", pibpercapita2 = pib2/populacao2);
    printf("O inverso da densidade populacional é: %.2f\n", inverso_densidade_populacional2 = 1/inverso_densidade_populacional2);
    printf("Super Poder da Carta 1 é: %.2f\n", populacao2 + area2 + pib2 + pontosTuristicos2 + 
                                            pibpercapita2 + inverso_densidade_populacional2);
    printf("\n");

    //comparação entre as cartas
    
    printf("Comparação entres as cartas");
    printf("Se receber valor (1) carta 01 vence. Se receber valor (0) carta 02 vence. \n");
    printf("População: %lu\n", populacao1 > populacao2);
    printf("Area: %f\n", area1 > area2);
    printf("PIB: %Lf\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %f\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: %f\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %f\n", Superpoder1 > Superpoder2);

    return 0;
}
