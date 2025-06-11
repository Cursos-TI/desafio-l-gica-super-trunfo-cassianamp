#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    // Declaração das variáveis da Carta 1
    char estadoC1;
    char codigoCartaC1[5] = "";
    char nomeCidadeC1[30] = "";
    unsigned long int populacaoC1;
    float areaC1;
    float pibC1;
    int pontosTuristicosC1;
    float densidadePopC1;
    float pibPerCapitaC1;
    float superPoderC1;

    // Declaração das variáveis da Carta 2
    char estadoC2;
    char codigoCartaC2[5] = "";
    char nomeCidadeC2[30] = "";
    unsigned long int populacaoC2;
    float areaC2;
    float pibC2;
    int pontosTuristicosC2;
    float densidadePopC2;
    float pibPerCapitaC2;
    float superPoderC2;

    // Declaração das variáveis de Cálculo de Comparação
    int resultadoPop, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensPop, resultadoPibPerCapita, resultadoSuperPoder;

    
    // Cadastro das Cartas:

    // CARTA 1 - Cadastro dos dados
    printf("Cadastro da Carta 1\n");
    printf("Digite a letra - de A a H - para identificar o Estado: ");
    scanf(" %c", &estadoC1);
    
    printf("Digite o código da carta - formada pela letra do Estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoCartaC1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidadeC1);
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacaoC1);
    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &areaC1);
    
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pibC1);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicosC1);

    // CARTA 1 - Calculo da Densidade Populacional
    densidadePopC1 = (float) populacaoC1 / areaC1;

    // CARTA 1 - Calculo do PIB Per Capita
    pibPerCapitaC1 = (float) pibC1 / populacaoC1;


    // CARTA 1 - Exibição dos dados
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estadoC1);
    printf("Código: %s\n", codigoCartaC1);
    printf("Nome da Cidade: %s\n", nomeCidadeC1);
    printf("População: %lu\n", populacaoC1);
    printf("Área: %.2f\n", areaC1);
    printf("PIB: %.2f\n", pibC1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosC1);
    printf("Densidade Populacional: %.2f\n", densidadePopC1);
    printf("PIB per Capita: %.2f\n", pibPerCapitaC1);

    // CARTA 1 - Calculo do Super Poder
    superPoderC1 = (float) populacaoC1 + areaC1 + pibC1 + pontosTuristicosC1 + pibPerCapitaC1 + (1/densidadePopC1);

    printf("Super Poder: %.2f\n", superPoderC1);



    // CARTA 2 - Cadastro dos dados
    printf("\nCadastro da Carta 2\n");
    printf("Digite a letra - de A a H - para identificar o Estado: ");
    scanf(" %c", &estadoC2);
    
    printf("Digite o código da carta - formada pela letra do Estado seguida de um número de 01 a 04: ");
    scanf("%s", codigoCartaC2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidadeC2);
    
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacaoC2);
    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &areaC2);
    
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pibC2);
    
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosTuristicosC2);

    // CARTA 2 - Calculo da Densidade Populacional
    densidadePopC2 = (float) populacaoC2 / areaC2;

    // CARTA 2 - Calculo do PIB Per Capita
    pibPerCapitaC2 = (float) pibC2 / populacaoC2;


    // CARTA 2 - Exibição dos dados
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estadoC2);
    printf("Código: %s\n", codigoCartaC2);
    printf("Nome da Cidade: %s\n", nomeCidadeC2);
    printf("População: %lu\n", populacaoC2);
    printf("Área: %.2f\n", areaC2);
    printf("PIB: %.2f\n", pibC2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosC2);
    printf("Densidade Populacional: %.2f\n", densidadePopC2);
    printf("PIB per Capita: %.2f\n", pibPerCapitaC2);

    // CARTA 2 - Calculo do Super Poder
    superPoderC2 = (float) populacaoC2 + areaC2 + pibC2 + pontosTuristicosC2 + pibPerCapitaC2 + (1/densidadePopC2);

    printf("Super Poder: %.2f\n", superPoderC2);


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\nComparação de cartas - Atributo: Super Poder\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidadeC1, superPoderC1);
    printf("Carta 2 - %s: %.2f\n", nomeCidadeC2, superPoderC2);
    if (superPoderC1 > superPoderC2) {
         printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeC1);
    } else {
         printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeC2);
    }

    return 0;
}
