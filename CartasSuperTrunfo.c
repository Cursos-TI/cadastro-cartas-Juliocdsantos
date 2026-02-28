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

    // Densidade
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // --- Menu (switch) ---
    int opcao;
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica (MENOR vence)\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparacao ---\n");
    printf("Pais 1: %s\n", cidade1);
    printf("Pais 2: %s\n", cidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %.2f\n", cidade1, populacao1);
            printf("%s: %.2f\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (area2 > area1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (pib2 > pib1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4:
            printf("Atributo: Pontos turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (pontos2 > pontos1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5:
            printf("Atributo: Densidade demografica (menor vence)\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            // Regra invertida: menor vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
