#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato


int main() {

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
 
    //coletando dados 1
    printf("Jogador 1:\n");
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o código de 01 a 04:\n");
    scanf("%2s", &codigo1);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade1);
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite a área de sua cidade em km²:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf(" %f", &pib1);
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
    scanf("%d", &populacao2);
    printf("Digite a área de sua cidade em km²:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos de sua cidade:\n");
    scanf(" %d", &pontosTuristicos2);

    //imprimindo dados 1
    printf("\nJogador 1 Carta:\n");
    printf("Seu Estado é: %c\n", estado1);
    printf("Seu código é: %c%s\n", estado1, codigo1);
    printf("Sua cidade é: %s\n", cidade1);
    printf("Populacao é: %d\n", populacao1);
    printf("A área da sua cidade é: %.2f km²\n", area1);
    printf("O PIB de sua cidade é: %.2f bilhões de reais\n", pib1);
    printf("O número de pontos turísticos são: %d\n\n", pontosTuristicos1);

    //imprimindo dados 2
    printf("Jogador 2 Carta:\n");
    printf("Seu Estado é: %c\n", estado2);
    printf("Seu código é: %c%s\n", estado2, codigo2);
    printf("Sua cidade é: %s\n", cidade2);
    printf("Populacao é: %d\n", populacao2);
    printf("A área da sua cidade é: %.2f km²\n", area2);
    printf("O PIB de sua cidade é: %.2f bilhões de reais\n", pib2);
    printf("O número de pontos turísticos são: %d\n\n", pontosTuristicos2);
    
    return 0;
}
