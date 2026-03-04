#include <stdio.h>

int main() {
  
  // Variáveis da carta 01
  char estado1[3];
  char codigo1[20];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Variáveis da carta 02
  char estado2[3];   
  char codigo2[20];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Carta 01
  printf("--- Carta 01 ---\n");

  printf("Digite o estado da cidade (A-Z): ");
  scanf(" %s", &estado1);

  printf("Digite o código da carta: ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade(KM²): ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade(Em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite os pontos turísticos: ");
  scanf("%d", &pontos1);

  // Carta 02
  printf("\n--- Carta 02 ---\n");

  printf("Digite o estado da cidade (A-Z): ");
  scanf(" %s", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade(KM²): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade(Em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite os pontos turísticos: ");
  scanf("%d", &pontos2);

  // Exibição final organizada
  printf("\n--- Dados Cadastrados ---\n");

  printf("\nCarta 01:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f KM²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos turísticos: %d\n", pontos1);

  printf("\nCarta 02:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f KM²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);

  return 0;
}
