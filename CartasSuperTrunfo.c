#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("SEJAM BEM-VINDO AO JOGO SUPER TRUNFO\n");
    printf("************************************\n\n");

    // Carta 1
    char estado1[20], codigo1[20], cidade1[50];
    float populacao1, area1, pib1;
    int pontos1;

    // Carta 2
    char estado2[20], codigo2[20], cidade2[50];
    float populacao2, area2, pib2;
    int pontos2;

    // --- Cadastro Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: ");
    scanf("%19s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%19s", codigo1);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%49s", cidade1);

    printf("Digite a populacao: ");
    scanf("%f", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // --- Cadastro Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf("%19s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%19s", codigo2);

    printf("Digite o nome da cidade (sem espacos): ");
    scanf("%49s", cidade2);

    printf("Digite a populacao: ");
    scanf("%f", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // --- Calculos ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // --- Escolha de 2 atributos (sem while/do-while) ---
    int a1 = 0, a2 = 0;

    printf("\n===== MENU DE COMPARACAO (1o atributo) =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica (MENOR vence)\n");
    printf("Escolha o 1o atributo: ");
    scanf("%d", &a1);

    if (a1 < 1 || a1 > 5) {
        printf("Opcao invalida! Encerrando o programa.\n");
        return 0;
    }

    printf("\n===== MENU DE COMPARACAO (2o atributo) =====\n");
    if (a1 != 1) printf("1 - Populacao\n");
    if (a1 != 2) printf("2 - Area\n");
    if (a1 != 3) printf("3 - PIB\n");
    if (a1 != 4) printf("4 - Pontos turisticos\n");
    if (a1 != 5) printf("5 - Densidade demografica (MENOR vence)\n");
    printf("Escolha o 2o atributo (diferente do 1o): ");
    scanf("%d", &a2);

    if (a2 < 1 || a2 > 5) {
        printf("Opcao invalida! Encerrando o programa.\n");
        return 0;
    }

    if (a2 == a1) {
        printf("Voce nao pode escolher o mesmo atributo duas vezes! Encerrando o programa.\n");
        return 0;
    }

    // --- Pegando valores dos atributos escolhidos ---
    float v1a1 = 0, v2a1 = 0;
    float v1a2 = 0, v2a2 = 0;

    const char *nomeA1 = "";
    const char *nomeA2 = "";

    // Atributo 1
    switch (a1) {
        case 1: nomeA1 = "Populacao"; v1a1 = populacao1; v2a1 = populacao2; break;
        case 2: nomeA1 = "Area"; v1a1 = area1; v2a1 = area2; break;
        case 3: nomeA1 = "PIB"; v1a1 = pib1; v2a1 = pib2; break;
        case 4: nomeA1 = "Pontos turisticos"; v1a1 = (float)pontos1; v2a1 = (float)pontos2; break;
        case 5: nomeA1 = "Densidade demografica"; v1a1 = densidade1; v2a1 = densidade2; break;
        default:
            printf("Opcao invalida no 1o atributo!\n");
            return 0;
    }

    // Atributo 2
    switch (a2) {
        case 1: nomeA2 = "Populacao"; v1a2 = populacao1; v2a2 = populacao2; break;
        case 2: nomeA2 = "Area"; v1a2 = area1; v2a2 = area2; break;
        case 3: nomeA2 = "PIB"; v1a2 = pib1; v2a2 = pib2; break;
        case 4: nomeA2 = "Pontos turisticos"; v1a2 = (float)pontos1; v2a2 = (float)pontos2; break;
        case 5: nomeA2 = "Densidade demografica"; v1a2 = densidade1; v2a2 = densidade2; break;
        default:
            printf("Opcao invalida no 2o atributo!\n");
            return 0;
    }

    // --- Comparacao individual (para exibir) ---
    // 1 = carta1, 2 = carta2, 0 = empate
    int resA1 = 0, resA2 = 0;

    resA1 = (a1 == 5)
        ? (v1a1 < v2a1 ? 1 : (v2a1 < v1a1 ? 2 : 0))
        : (v1a1 > v2a1 ? 1 : (v2a1 > v1a1 ? 2 : 0));

    resA2 = (a2 == 5)
        ? (v1a2 < v2a2 ? 1 : (v2a2 < v1a2 ? 2 : 0))
        : (v1a2 > v2a2 ? 1 : (v2a2 > v1a2 ? 2 : 0));

    // --- Soma e vencedor final ---
    float soma1 = v1a1 + v1a2;
    float soma2 = v2a1 + v2a2;

    int vencedorFinal = (soma1 > soma2) ? 1 : ((soma2 > soma1) ? 2 : 0);

    // --- Exibicao clara ---
    printf("\n========================================\n");
    printf("RESULTADO DA RODADA\n");
    printf("========================================\n");
    printf("Carta 1 (Pais/Cidade): %s\n", cidade1);
    printf("Carta 2 (Pais/Cidade): %s\n\n", cidade2);

    printf("Atributos escolhidos:\n");
    printf("1) %s\n", nomeA1);
    printf("2) %s\n\n", nomeA2);

    printf("Comparacao por atributo:\n");
    printf("- %s:\n", nomeA1);
    printf("  %s: %.2f\n", cidade1, v1a1);
    printf("  %s: %.2f\n", cidade2, v2a1);
    printf("  Vencedor deste atributo: %s\n\n",
           (resA1 == 1) ? cidade1 : ((resA1 == 2) ? cidade2 : "Empate"));

    printf("- %s:\n", nomeA2);
    printf("  %s: %.2f\n", cidade1, v1a2);
    printf("  %s: %.2f\n", cidade2, v2a2);
    printf("  Vencedor deste atributo: %s\n\n",
           (resA2 == 1) ? cidade1 : ((resA2 == 2) ? cidade2 : "Empate"));

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n\n", cidade2, soma2);

    if (vencedorFinal == 1) {
        printf("VENCEDOR FINAL: %s\n", cidade1);
    } else if (vencedorFinal == 2) {
        printf("VENCEDOR FINAL: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
