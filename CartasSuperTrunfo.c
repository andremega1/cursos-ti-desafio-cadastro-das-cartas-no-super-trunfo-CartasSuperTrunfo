#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    
    float area1, area2;
    float pib1, pib2;
    char estado1[2], estado2[2];
    char cidade1[100], cidade2[100];
    float pibPerCapta1, pibPerCapta2;
    float densidadePop1, densidadePop2;
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("\nSUPER TRUNFO CIDADES - Cadastro de Cartas\n");
  

    printf("\n      CADASTRAR - Carta 1\n");

    printf("Entre com o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Entre com o estado em que fica a cidade: ");
    scanf(" %s", estado1);

    printf("Entre com a área da cidade (km2): ");
    scanf(" %f", &area1);

    printf("Entre com o Produto Interno Bruto (PIB) da cidade: ");
    scanf(" %f", &pib1);

    printf("Entre com o total de habitantes da cidade: ");
    scanf(" %i", &populacao1);

    printf("Entre a quantidade de pontos turísticos da cidade: ");
    scanf(" %i", &pontosTuristicos1);

    densidadePop1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;



    printf("\n\n     CADASTRAR - Carta 2\n");

    printf("Entre com o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Entre com o estado em que fica a cidade: ");
    scanf(" %s", estado2);

    printf("Entre com a área da cidade (km2): ");
    scanf(" %f", &area2);

    printf("Entre com o Produto Interno Bruto (PIB) da cidade: ");
    scanf(" %f", &pib2);

    printf("Entre com o total de habitantes da cidade: ");
    scanf(" %i", &populacao2);

    printf("Entre a quantidade de pontos turísticos da cidade: ");
    scanf(" %i", &pontosTuristicos2);

    densidadePop2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2; 

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    
    printf("\n\n CARTAS CADASTRADAS:\n");

    printf("\n     Carta 1\n");
    printf("Codigo da cidade: %s01\n", estado1);
    printf("Nome: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area(km2): %0.2f\n", area1);
    printf("Densidade populacional: %.2f", densidadePop1);
    printf("PIB: %0.2f\n",pib1);
    printf("PIB per capta: %.2f\n", pibPerCapta1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n     Carta 2\n");
    printf("Codigo da cidade: %s02\n", estado2);
    printf("Nome: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area(km2): %0.2f\n", area2);
    printf("Densidade populacional: %.2f", densidadePop2);
    printf("PIB: %0.2f\n",pib2);
    printf("PIB per capta: %.2f\n", pibPerCapta2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\n\n--------------\n\n");

    return 0;
}
