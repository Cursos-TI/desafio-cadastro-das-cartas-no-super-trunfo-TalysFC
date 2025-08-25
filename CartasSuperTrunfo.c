#include <stdio.h>


int main(){ //variaveis utilizadas no código
    printf("Desafio Super Trunfo Países: Novato! \n");

    char estado1, estado2; 
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;


    printf("\nPara começar, vamos criar sua primeira carta! \n"); //criação primeira carta do usuário
    
    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta (letra escolhida e um número de 01 a 04): \n");
    scanf(" %s", codigo1);

    printf("Qual o nome da sua cidade (sem nomes compostos)? \n");
    scanf(" %s", nome1);

    printf("Quantos habitantes essa cidade possui? \n");
    scanf(" %d", &populacao1);

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
    scanf(" %d", &populacao2);

    printf("Qual a área (em km²) dessa cidade (use ponto como separador e não vírgula)? \n");
    scanf(" %f", &area2);

    printf("Qual o PIB dessa cidade (use ponto como separador novamente)? \n");
    scanf(" %f", &pib2);

    printf("Quantos pontos turísticos essa cidade possui? \n");
    scanf(" %d", &pontos2); //fim segunda carta


    printf("\nPronto, aqui estão suas cartas para jogar: \n"); //apresentação das duas cartas

    printf("Carta 1: \n"); //apresentação primeira carta
    printf("Estado: %c. \n", estado1);
    printf("Código: %s. \n", codigo1);
    printf("Nome: %s. \n", nome1);
    printf("Habitantes: %d pessoas. \n", populacao1);
    printf("Área: %.2f km². \n", area1);
    printf("PIB: R$%.2f. \n", pib1);
    printf("Pontos turísticos: %d. \n", pontos1);

    printf("\nCarta 2: \n"); //apresentação segunda carta
    printf("Estado: %c. \n", estado2);
    printf("Código: %s. \n", codigo2);
    printf("Nome: %s. \n", nome2);
    printf("Habitantes: %d pessoas. \n", populacao2);
    printf("Área: %.2f km². \n", area2);
    printf("PIB: R$%.2f. \n", pib2);
    printf("Pontos turísticos: %d. \n", pontos2);


    return 0;
}