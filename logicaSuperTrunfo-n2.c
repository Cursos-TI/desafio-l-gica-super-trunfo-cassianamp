#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Declaração das variáveis da Carta 1 - Brasil
    char nomePaisC1[30] = "Brasil";
    unsigned long int populacaoC1 = 212600000;
    float areaC1 = 8510000;
    float pibC1 = 335000000;
    int pontosTuristicosC1 = 50;
    float densidadeDemograficaC1 = populacaoC1 / areaC1;

    // Declaração das variáveis da Carta 2 - Chile
    char nomePaisC2[30] = "Chile";
    unsigned long int populacaoC2 = 19600000;
    float areaC2 = 756626;
    float pibC2 = 500000000;
    int pontosTuristicosC2 = 50;
    float densidadeDemograficaC2 = populacaoC2 / areaC2;

    // Declaração da variável opção para o menu interativo
    int opcao;

    // Menu interativo
    printf("Atributos para comparação das cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: //População
        printf ("Comparação entre Carta 1 (%s) e Carta 2 (%s)\n", nomePaisC1, nomePaisC2);
        printf ("O atributo usado na comparação foi: População\n");
        printf ("Carta 1 (%s): %lu\n", nomePaisC1, populacaoC1);
        printf ("Carta 2 (%s): %lu\n", nomePaisC2, populacaoC2);
        // Código de comparação da população
        if (populacaoC1 > populacaoC2) {
            printf ("Resultado: Carta 1 (%s) venceu!\n", nomePaisC1);
        } else if (populacaoC1 < populacaoC2) {
            printf ("Resultado: Carta 2 (%s) venceu!\n", nomePaisC2);
        } else {
            printf ("Resultado: Houve um empate!\n");
        }
        break;
    case 2: // Área
        printf ("Comparação entre Carta 1 (%s) e Carta 2 (%s)\n", nomePaisC1, nomePaisC2);
        printf ("O atributo usado na comparação foi: Área\n");
        printf ("Carta 1 (%s): %.2f\n", nomePaisC1, areaC1);
        printf ("Carta 2 (%s): %.2f\n", nomePaisC2, areaC2);
        // Código de comparação da área
        if (areaC1 > areaC2) {
            printf ("Resultado: Carta 1 (%s) venceu!\n", nomePaisC1);
        } else if (areaC1 < areaC2) {
            printf ("Resultado: Carta 2 (%s) venceu!\n", nomePaisC2);
        } else {
            printf ("Resultado: Houve um empate!\n");
        } 
        break;
    case 3: // PIB
        printf ("Comparação entre Carta 1 (%s) e Carta 2 (%s)\n", nomePaisC1, nomePaisC2);
        printf ("O atributo usado na comparação foi: PIB\n");
        printf ("Carta 1 (%s): %.2f\n", nomePaisC1, pibC1);
        printf ("Carta 2 (%s): %.2f\n", nomePaisC2, pibC2);
        // Código de comparação do PIB
        if (pibC1 > pibC2) {
            printf ("Resultado: Carta 1 (%s) venceu!\n", nomePaisC1);
        } else if (pibC1 < pibC2) {
            printf ("Resultado: Carta 2 (%s) venceu!\n", nomePaisC2);
        } else {
            printf ("Resultado: Houve um empate!\n");
        } 
        break;
    case 4: // Quantidade de pontos turísticos
        printf ("Comparação entre Carta 1 (%s) e Carta 2 (%s)\n", nomePaisC1, nomePaisC2);
        printf ("O atributo usado na comparação foi: Quantidade de pontos turísticos\n");
        printf ("Carta 1 (%s): %d\n", nomePaisC1, pontosTuristicosC1);
        printf ("Carta 2 (%s): %d\n", nomePaisC2, pontosTuristicosC2);
        // Código de comparação do PIB
        if (pontosTuristicosC1 > pontosTuristicosC2) {
            printf ("Resultado: Carta 1 (%s) venceu!\n", nomePaisC1);
        } else if (pontosTuristicosC1 < pontosTuristicosC2) {
            printf ("Resultado: Carta 2 (%s) venceu!\n", nomePaisC2);
        } else {
            printf ("Resultado: Houve um empate!\n");
        } 
        break;
    case 5: // Densidade demográfica
        printf ("Comparação entre Carta 1 (%s) e Carta 2 (%s)\n", nomePaisC1, nomePaisC2);
        printf ("O atributo usado na comparação foi: Densidade demográfica\n");
        printf ("Carta 1 (%s): %.2f\n", nomePaisC1, densidadeDemograficaC1);
        printf ("Carta 2 (%s): %.2f\n", nomePaisC2, densidadeDemograficaC2);
        // Código de comparação do PIB
        if (densidadeDemograficaC1 < densidadeDemograficaC2) {
            printf ("Resultado: Carta 1 (%s) venceu!\n", nomePaisC1);
        } else if (densidadeDemograficaC1 > densidadeDemograficaC2) {
            printf ("Resultado: Carta 2 (%s) venceu!\n", nomePaisC2);
        } else {
            printf ("Resultado: Houve um empate!\n");
        } 
        break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }
    

    return 0;
}
