#include <stdio.h>


int main(){ //variaveis utilizadas no código
    printf("Desafio Super Trunfo Países: Mestre! \n");

    char estado1, estado2; 
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2; //alteração do tipo da variável (mestre)
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;


    float densidade1, densidade2; //criação das variáveis (aventureiro)
    float pibpercapita1, pibpercapita2;


    float superpoder1, superpoder2; //criação variável (mestre)
    float densidadeinvertida1, densidadeinvertida2;

    int comparacaopopulacao, comparacaoarea, comparacaopib, comparacaopontos, comparacaodensidadeinvertida, comparacaopibpercapita, comparacaosuperpoder;

    
    printf("\nPara começar, vamos criar sua primeira carta! \n"); //criação primeira carta do usuário
    
    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta (letra escolhida e um número de 01 a 04): \n");
    scanf(" %s", codigo1);

    printf("Qual o nome da sua cidade (sem nomes compostos)? \n");
    scanf(" %s", nome1);

    printf("Quantos habitantes essa cidade possui? \n");
    scanf(" %lu", &populacao1); //alteração do tipo da variável (mestre)

    printf("Qual a área (em km²) dessa cidade (use ponto . como separador e não vírgula ,)? \n");
    scanf(" %f", &area1);

    printf("Qual o PIB dessa cidade (use ponto como separador)? \n");
    scanf(" %f", &pib1);

    printf("Quantos pontos turísticos essa cidade possui? \n");
    scanf(" %d", &pontos1); //fim primeira carta


    printf("\nAgora, vamos criar sua segunda carta! \n"); //criação segunda carta do usuário
    
    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta (letra escolhida e um número de 01 a 04): \n");
    scanf(" %s", codigo2);

    printf("Qual o nome da sua cidade? \n");
    scanf(" %s", nome2);

    printf("Quantos habitantes essa cidade possui? \n");
    scanf(" %lu", &populacao2); //alteração tipo da variável (mestre)

    printf("Qual a área (em km²) dessa cidade (use ponto como separador e não vírgula)? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB dessa cidade (use ponto como separador novamente)? \n");
    scanf(" %f", &pib2);

    printf("Quantos pontos turísticos essa cidade possui? \n");
    scanf(" %d", &pontos2); //fim segunda carta
    
    
    densidade1 = (float) populacao1 / area1; //operação das variáveis usando casting (aventureiro)
    densidade2 = (float) populacao2 / area2;

    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;


    densidadeinvertida1 = 1 / densidade1; //operação das variáveis (mestre)
    densidadeinvertida2 = 1 / densidade2;

    superpoder1 = (float) populacao1 + area1 + pib1 + pontos1 + densidadeinvertida1 + pibpercapita1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + densidadeinvertida2 + pibpercapita2;

    
    comparacaopopulacao = populacao1 > populacao2; //comparações das variáveis para o resultado (mestre)
    comparacaoarea = area1 > area2;
    comparacaopib = pib1 > pib2;
    comparacaopontos = pontos1 > pontos2;
    comparacaodensidadeinvertida = densidadeinvertida1 < densidadeinvertida2; //utilizado o simbolo de < pois o resultado segue o padrão das outras comparações
    comparacaopibpercapita = pibpercapita1 > pibpercapita2;
    comparacaosuperpoder = superpoder1 > superpoder2;


    printf("\nPronto, aqui estão suas cartas para jogar: \n"); //apresentação das duas cartas

    printf("Carta 1: \n"); //apresentação primeira carta
    printf("Estado: %c. \n", estado1);
    printf("Código: %s. \n", codigo1);
    printf("Nome: %s. \n", nome1);
    printf("Habitantes: %lu pessoas. \n", populacao1); //alteração variável (mestre)
    printf("Área: %.2f km². \n", area1);
    printf("PIB: R$%.2f. \n", pib1);
    printf("Pontos Turísticos: %d. \n", pontos1);
    printf("Densidade Populacional: %.3f hab/km². \n", densidade1); //novas informações exibidas na carta 1 (aventureiro)
    printf("PIB per Capita: R$%.2f. \n", pibpercapita1);
    printf("Super Poder: %2.f. \n", superpoder1); //atributo novo exibido (mestre)

    printf("\nCarta 2: \n"); //apresentação segunda carta
    printf("Estado: %c. \n", estado2);
    printf("Código: %s. \n", codigo2);
    printf("Nome: %s. \n", nome2);
    printf("Habitantes: %lu pessoas. \n", populacao2); //alteração variável (mestre)
    printf("Área: %.2f km². \n", area2);
    printf("PIB: R$%.2f. \n", pib2);
    printf("Pontos turísticos: %d. \n", pontos2);
    printf("Densidade Populacional: %.3f hab/km². \n", densidade2); //novas informações exibidas na carta 2 (aventureiro)
    printf("PIB per Capita: R$%.2f. \n", pibpercapita2);
    printf("Super Poder: %2.f. \n", superpoder2); //atributo novo exibido (mestre)


    printf("\nAgora, vamos comparar todos os atributos das suas cartas e ver os resultados! \n"); //resultado do fim do jogo (mestre)
    printf("Quando o resultado for 1, quer dizer que a carta 1 venceu, e quando for 0 quer dizer que a carta 2 venceu.\n");
    printf("População: %d!\n", comparacaopopulacao);
    printf("Área: %d!\n", comparacaoarea);
    printf("PIB: %d!\n", comparacaopib);
    printf("Pontos Turísticos: %d!\n", comparacaopontos);
    printf("Densidade Populacional: %d!\n", comparacaodensidadeinvertida);
    printf("PIB per Capita: %d!\n", comparacaopibpercapita);
    printf("Super Poder: %d!\n", comparacaosuperpoder);


    return 0;
}