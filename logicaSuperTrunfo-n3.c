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
    int pontosTuristicosC1 = 30;
    float densidadeDemograficaC1 = populacaoC1 / areaC1;

    // Declaração das variáveis da Carta 2 - Chile
    char nomePaisC2[30] = "Chile";
    unsigned long int populacaoC2 = 19600000;
    float areaC2 = 756626;
    float pibC2 = 500000000;
    int pontosTuristicosC2 = 50;
    float densidadeDemograficaC2 = populacaoC2 / areaC2;

    // Declaração das variáveis para os menus interativos
    int primeiroAtributo, segundoAtributo, resultado1, resultado2;


    // Menu interativo para escolha do primeiro atributo
    printf("Bem-vindo ao jogo Super Trunfo Países\n");
    printf("Veja a seguir a lista de atributos para comparação das cartas.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha o primeiro atributo: \n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo) {
    case 1: //População
        printf ("Você escolheu o atributo População!\n");
        printf ("Carta 1 (%s): %lu\n", nomePaisC1, populacaoC1);
        printf ("Carta 2 (%s): %lu\n", nomePaisC2, populacaoC2);
        // Código de comparação da população
        resultado1 = populacaoC1 > populacaoC2 ? 1 : 0;
        break;
    case 2: // Área
        printf ("Você escolheu o atributo Área!\n");
        printf ("Carta 1 (%s): %.2f\n", nomePaisC1, areaC1);
        printf ("Carta 2 (%s): %.2f\n", nomePaisC2, areaC2);
        // Código de comparação da área
        resultado1 = areaC1 > areaC2 ? 1 : 0;
        break;
    case 3: // PIB
        printf ("Você escolheu o atributo PIB!\n");
        printf ("Carta 1 (%s): %.2f\n", nomePaisC1, pibC1);
        printf ("Carta 2 (%s): %.2f\n", nomePaisC2, pibC2);
        // Código de comparação do PIB
        resultado1 = pibC1 > pibC2 ? 1 : 0; 
        break;
    case 4: // Quantidade de pontos turísticos
        printf ("Você escolheu o atributo Quantidade de pontos turísticos!\n");
        printf ("Carta 1 (%s): %d\n", nomePaisC1, pontosTuristicosC1);
        printf ("Carta 2 (%s): %d\n", nomePaisC2, pontosTuristicosC2);
        // Código de comparação do PIB
        resultado1 = pontosTuristicosC1 > pontosTuristicosC2 ? 1 : 0;
        break;
    case 5: // Densidade demográfica
        printf ("Você escolheu o atributo Densidade demográfica!\n");
        printf ("Carta 1 (%s): %.2f\n", nomePaisC1, densidadeDemograficaC1);
        printf ("Carta 2 (%s): %.2f\n", nomePaisC2, densidadeDemograficaC2);
        // Código de comparação do PIB
        resultado1 = densidadeDemograficaC1 < densidadeDemograficaC2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }


    // Menu interativo para escolha do segundo atributo
    printf("\nVeja novamente a lista de atributos para comparação das cartas.\n");
    printf("Atenção: Agora você deve escolher um atributo diferente do primeiro.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha o segundo atributo: \n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (segundoAtributo) {
        case 1: //População
            printf ("Você escolheu o atributo População!\n");
            printf ("Carta 1 (%s): %lu\n", nomePaisC1, populacaoC1);
            printf ("Carta 2 (%s): %lu\n", nomePaisC2, populacaoC2);
            // Código de comparação da população
            resultado2 = populacaoC1 > populacaoC2 ? 1 : 0;
            break;
        case 2: // Área
            printf ("Você escolheu o atributo Área!\n");
            printf ("Carta 1 (%s): %.2f\n", nomePaisC1, areaC1);
            printf ("Carta 2 (%s): %.2f\n", nomePaisC2, areaC2);
            // Código de comparação da área
            resultado2 = areaC1 > areaC2 ? 1 : 0;
            break;
        case 3: // PIB
            printf ("Você escolheu o atributo PIB!\n");
            printf ("Carta 1 (%s): %.2f\n", nomePaisC1, pibC1);
            printf ("Carta 2 (%s): %.2f\n", nomePaisC2, pibC2);
            // Código de comparação do PIB
            resultado2 = pibC1 > pibC2 ? 1 : 0;
            break;
        case 4: // Quantidade de pontos turísticos
            printf ("Você escolheu o atributo Quantidade de pontos turísticos!\n");
            printf ("Carta 1 (%s): %d\n", nomePaisC1, pontosTuristicosC1);
            printf ("Carta 2 (%s): %d\n", nomePaisC2, pontosTuristicosC2);
            // Código de comparação do PIB
            resultado2 = pontosTuristicosC1 > pontosTuristicosC2 ? 1 : 0; 
            break;
        case 5: // Densidade demográfica
            printf ("Você escolheu o atributo Densidade demográfica!\n");
            printf ("Carta 1 (%s): %.2f\n", nomePaisC1, densidadeDemograficaC1);
            printf ("Carta 2 (%s): %.2f\n", nomePaisC2, densidadeDemograficaC2);
            // Código de comparação do PIB
            resultado2 = densidadeDemograficaC1 < densidadeDemograficaC2 ? 1 : 0; 
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }


    // Exibição dos resultados
    printf ("\nComparação entre Carta 1 (%s) e Carta 2 (%s)\n", nomePaisC1, nomePaisC2);
    printf ("Os atributos usados na comparação foram: %d e %d.\n", primeiroAtributo, segundoAtributo);


    if (resultado1 && resultado2) {
        printf("A Carta 1 (%s) venceu!\n", nomePaisC1);
    } else if (resultado1 != resultado2) {
        printf("Houve um empate entre a Carta 1 (%s) e a Carta 2 (%s)!\n", nomePaisC1, nomePaisC2);
    } else {
        printf("A Carta 2 (%s) venceu!\n", nomePaisC2);
    }
    

    return 0;
}
