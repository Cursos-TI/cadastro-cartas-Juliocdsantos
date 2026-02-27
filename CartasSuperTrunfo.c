#include <stdio.h>

int main (){
  printf("************************************\n");
  printf("SEJAM BEM-VINDO AO JOGO SUPER TRUNFO\n");
  printf("************************************\n");





  // Variáveis da carta 1
  char estado1[20];
  char codigo1[20];
  char cidade1[50];
  float populacao1;
  float area1;
  float pib1;
  int pontos1;
  float inverso1;
  float superPoder1;

  // Varíaveis da carta 2
  char estado2[20];
  char codigo2[20];
  char cidade2[50];
  float populacao2;
  float area2;
  float pib2;
  int pontos2;
  float inverso2;
  float superPoder2;

  // ENTRADA E SAIDA DA CARTA 1 ---
  printf("---Cadastro da Carta 1---\n");

  printf("Digite o estado: ");
  scanf("%s", estado1);

  printf("Digite o Código da carta: ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite a populacao: ");
  scanf("%f", &populacao1);

  printf("Digite a área (km): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turistícos: ");
  scanf("%d", &pontos1);

  //--- ENTRADA E SAIDA DA CARTA 2 ---
  printf("--- Cadastro da carta 2 ---\n");

  printf("Digite o estado: ");
  scanf("%s", estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite a população: ");
  scanf("%f", &populacao2);

  printf("Digite a área (km): ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turísticos: ");
  scanf("%d", &pontos2);

   printf("*** Comparação entre as cartas ***\n");

   float densidade1 = populacao1 / area1;
   float percapita1 = pib1 / populacao1;
   float densidade2 = populacao2 / area2;
   float percapita2 = pib2 / populacao2;



   inverso1 = 1.0 / densidade1;
   inverso2 = 1.0 / densidade2;
   superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib1 + inverso1;
   superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib2 + inverso2;


  // Informações da carta 1;
  printf("========== CARTA 1 ==========\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %.2f\n", populacao1);
  printf("Área (km): %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos turísticos: %d\n", pontos1);
  printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
  printf("PIB per Capita: %.2f reais \n", percapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("========== CARTA 2 ==========\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %.2f\n", populacao2);
  printf("Área (km): %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
  printf("PIB per Capita: %.2f reais \n", percapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("********** Comparação de Cartas (Atributo: População) **********\n");

  /*int resultadopop = (populacao1>populacao2);
  printf("População: Carta %d venceu (%d). \n",resultadopop ? 1 : 2, resultadopop);

  int resultadoarea = (area1>area2);
  printf("Área: Carta %d venceu (%d). \n", resultadoarea ? 1 : 2, resultadoarea);

  int resultadopib = (pib1>pib2);
  printf("PIB: Carta %d venceu (%d).\n", resultadopib ? 1 : 2, resultadopib);

  int resultadotur = (pontos1>pontos2);
  printf("Pontos turísticos: Carta %d venceu (%d).\n", resultadotur ? 1 : 2, resultadotur);

  int resultadoden = (densidade1>densidade2);
  printf("Densidade populacional: Carta %d venceu (%d).\n", resultadoden ? 1 : 2, resultadoden);

  int resultadoper = (percapita1>percapita2);
  printf("PIB per capita: Carta %d venceu (%d).\n", resultadoper ? 1 : 2, resultadoden);
  int resultadosu = (superPoder1>superPoder2); 
  printf("Super Poder: Carta %d venceu (%d)\n", resultadosu ? 1 : 2, resultadosu );*/

  printf("Carta 1 - %s: %.2f\n", cidade1, populacao1);
  printf("Carta 2 - %s: %.2f\n", cidade2, populacao2);


  if (populacao1>populacao2)
  {
    printf("Carta 1 (%s) venceu !!!", cidade1);
  }
  else
  {
    printf("Carta 2 (%s) venceu !!!", cidade2);
  }
  





  return 0;
}
