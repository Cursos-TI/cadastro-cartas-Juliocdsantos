#include <stdio.h>

int main (){
  printf("************************************\n");
  printf("SEJAM BEM-VINDO AO JOGO SUPER TRUNFO\n");
  printf("************************************\n");





  // Variáveis da carta 1
  char estado1[20];
  char codigo1[20];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Varíaveis da carta 2
  char estado2[20];
  char codigo2[20];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // ENTRADA E SAIDA DA CARTA 1 ---
  printf("---Cadastro da Carta 1---\n");

  printf("Digite o estado: ");
  scanf("%s", estado1);
  printf("O estado digitado foi: %s\n\n", estado1);

  printf("Digite o Código da carta: ");
  scanf("%s", codigo1);
  printf("O código digitado foi: %s\n\n", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("A cidade digitada foi: %s\n\n", cidade1);

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);
  printf("A populacao digitada foi: %d\n\n", populacao1);

  printf("Digite a área (km): ");
  scanf("%f", &area1);
  printf("A área digitada foi: %.2f\n\n", area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  printf("O PIB digitado foi: %.2f\n\n", pib1);

  printf("Digite o número de pontos turistícos: ");
  scanf("%d", &pontos1);
  printf("O número de pontos turísticos digitado foi: %d\n\n", pontos1);

  //--- ENTRADA E SAIDA DA CARTA 2 ---
  printf("--- Cadastro da carta 2 ---\n");

  printf("Digite o estado: ");
  scanf("%s", estado2);
  printf("O estado digitado foi: %s\n\n", estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigo2);
  printf(" O código digitado foi: %s\n\n", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("A cidade digitada foi: %s\n\n", cidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("A população digitada foi: %d\n\n", populacao2);

  printf("Digite a área (km): ");
  scanf("%f", &area2);
  printf("A área digitada foi: %.2f\n\n", area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  printf("O PIB digitado foi: %.2f\n\n", pib2);

  printf("Digite o numero de pontos turísticos: ");
  scanf("%d", &pontos2);
  printf("O número de pontos turísticos digitado foi: %d\n\n", pontos2);

  printf("*** Comparação entre as cartas ***\n");

  return 0;
}
