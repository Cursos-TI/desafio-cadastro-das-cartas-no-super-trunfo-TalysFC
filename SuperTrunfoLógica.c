#include <stdio.h>


int main(){ 
    printf("Desafio Super Trunfo Países (Lógica): Iniciante! \n");

    char estado1, estado2; //variáveis utilizadas no código
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;


    float densidade1, densidade2; 
    float pibpercapita1, pibpercapita2;

    
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
    
    
    densidade1 = (float) populacao1 / area1; //operação das variáveis usando casting
    densidade2 = (float) populacao2 / area2;

    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;

    printf("\nPronto, aqui estão suas cartas para jogar: \n"); //apresentação das duas cartas

    printf("Carta 1: \n"); //apresentação primeira carta
    printf("Estado: %c. \n", estado1);
    printf("Código: %s. \n", codigo1);
    printf("Nome: %s. \n", nome1);
    printf("Habitantes: %d pessoas. \n", populacao1);
    printf("Área: %.2f km². \n", area1);
    printf("PIB: R$%.2f. \n", pib1);
    printf("Pontos Turísticos: %d. \n", pontos1);
    printf("Densidade Populacional: %.3f hab/km². \n", densidade1); 
    printf("PIB per Capita: R$%.3f. \n", pibpercapita1);

    printf("\nCarta 2: \n"); //apresentação segunda carta
    printf("Estado: %c. \n", estado2);
    printf("Código: %s. \n", codigo2);
    printf("Nome: %s. \n", nome2);
    printf("Habitantes: %d pessoas. \n", populacao2);
    printf("Área: %.2f km². \n", area2);
    printf("PIB: R$%.2f. \n", pib2);
    printf("Pontos turísticos: %d. \n", pontos2);
    printf("Densidade Populacional: %.3f hab/km². \n", densidade2); 
    printf("PIB per Capita: R$%.3f. \n", pibpercapita2);


    printf("\nO atributo que será comparado para ver quem ganhou será a população das cartas.\n"); //apresentação do resultado
    printf("%d > %d \n", populacao1, populacao2);
    if(populacao1 > populacao2){
        printf("A população da carta 1 é maior. A carta 1 venceu! \n");
    } else{
        printf("A populaçao da carta 2 é maior. A carta 2 venceu! \n");
    }


    return 0;
}