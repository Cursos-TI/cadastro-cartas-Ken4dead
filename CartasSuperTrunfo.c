#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Váriaveis da carta 01
  char estado1;
  char codigo1[20];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Váriaveis da carta 02
    char estado2;   
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

// Área para entrada de dados

// Entrada e saida de dados da carta 01
    printf("--- Carta 01 ---\n");

    printf("Digite o estado da cidade (A-Z): \n");
    scanf("%c", &estado1);
    printf("O Estado da cidade foi: %c\n\n", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);
    printf("O código da carta é: %s\n\n", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("O nome da cidade é: %s\n\n", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("A população da cidade é: %d\n\n", populacao1);

    printf("Digite a área da cidade(KM²): ");
    scanf("%f", &area1);
    printf("A área da cidade é: %.2f KM²\n\n", area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("O PIB da cidade é: %.2f\n\n", pib1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);
    printf("O numero de pontos turisticos são: %d\n\n", pontos1);


    // Entrada e saida de dados da carta 02
    printf("--- Carta 02 ---\n");

    printf("Digite o estado da cidade (A-Z): \n");
    scanf("%c", &estado2);
    printf("O Estado da cidade foi: %c\n\n", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo2);
    printf("O código da carta é: %s\n\n", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("O nome da cidade é: %s\n\n", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("A população da cidade é: %d\n\n", populacao2);

    printf("Digite a área da cidade(KM²): ");
    scanf("%f", &area2);
    printf("A área da cidade é: %.2f KM²\n\n", area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("O PIB da cidade é: %.2f\n\n", pib2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("O numero de pontos turisticos são: %d\n\n", pontos2);

    
    printf("---Comparação entre as cartas---\n");
  

  // Área para exibição dos dados da cidade

return 0;
} 
