#include <stdio.h>


int main(){ 
    printf("Desafio Super Trunfo Países (Lógica): Aventureiro! \n");

    char estado1, estado2; //variáveis utilizadas no código
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;


    float densidade1, densidade2; 
    float pibpercapita1, pibpercapita2;


    int escolhaatributo; // nova variável criada (aventureiro)

    
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
    printf("PIB per Capita: R$%.2f. \n", pibpercapita1);

    printf("\nCarta 2: \n"); //apresentação segunda carta
    printf("Estado: %c. \n", estado2);
    printf("Código: %s. \n", codigo2);
    printf("Nome: %s. \n", nome2);
    printf("Habitantes: %d pessoas. \n", populacao2);
    printf("Área: %.2f km². \n", area2);
    printf("PIB: R$%.2f. \n", pib2);
    printf("Pontos turísticos: %d. \n", pontos2);
    printf("Densidade Populacional: %.3f hab/km². \n", densidade2); 
    printf("PIB per Capita: R$%.2f. \n", pibpercapita2);


    printf("\nAgora, você escolherá qual atributo será comparado entre as cartas.\n"); //escolha do atributo (aventureiro)
    printf("Opções: \n");
    printf("1: População. \n");
    printf("2: Área. \n");
    printf("3: PIB. \n");
    printf("4: Pontos Turísticos. \n");
    printf("5: Densidade Populacional. \n");
    printf("### ATENÇÃO: Vence a comparação o atributo com maior valor, exceto a  opção 5: Densidade Demográfica (nela vence o menor número)! ###\n");
    printf("Qual atributo você deseja comparar? \n");
    scanf("%d", &escolhaatributo);


    switch (escolhaatributo){ //switch utilizado para mostrar o resultado de acordo com o atributo escolhido pelo usuário
        case 1:
        if(populacao1 > populacao2){ //vitória carta 1
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: População \n");
            printf("População carta 1: %d. População carta 2: %d. \n", populacao1, populacao2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 1: %s!!!***\n", nome1);
        } else if(populacao1 < populacao2){ //vitória carta 2
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: População \n");
            printf("População carta 1: %d. População carta 2: %d. \n", populacao1, populacao2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 2: %s!!!***\n", nome2);
        } else { //empate
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: População \n");
            printf("População carta 1: %d. População carta 2: %d. \n", populacao1, populacao2);
            printf("E o vencedor é: \n");
            printf("*** TEMOS UM EMPATE!!!***\n");
        } break;
        case 2:
        if(area1 > area2){ //vitória carta 1
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Área \n");
            printf("Área carta 1: %.2f. Área carta 2: %.2f. \n", area1, area2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 1: %s!!!***\n", nome1);
        } else if(area1 < area2){ //vitória carta 2
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Área \n");
            printf("Área carta 1: %.2f. Área carta 2: %.2f. \n", area1, area2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 2: %s!!!***\n", nome2);
        } else { //empate
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Área \n");
            printf("Área carta 1: %.2f. Área carta 2: %.2f. \n", area1, area2);
            printf("E o vencedor é: \n");
            printf("*** TEMOS UM EMPATE!!!***\n");
        } break;
        case 3:
        if(pib1 > pib2){ //vitória carta 1
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: PIB \n");
            printf("PIB carta 1: R$%.2f. PIB carta 2: R$%.2f. \n", pib1, pib2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 1: %s!!!***\n", nome1);
        } else if(pib1 < pib2){ //vitória carta 2
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: PIB \n");
            printf("PIB carta 1: R$%.2f. PIB carta 2: R$%.2f. \n", pib1, pib2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 2: %s!!!***\n", nome2);
        } else { //empate
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: PIB \n");
            printf("PIB carta 1: R$%.2f. PIB carta 2: R$%.2f. \n", pib1, pib2);
            printf("E o vencedor é: \n");
            printf("*** TEMOS UM EMPATE!!!***\n");
        } break;
        case 4:
        if(pontos1 > pontos2){ //vitória carta 1
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Pontos Turísticos \n");
            printf("Pontos Turísticos carta 1: %d. Pontos Turísticos carta 2: %d. \n", pontos1, pontos2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 1: %s!!!***\n", nome1);
        } else if(pontos1 < pontos2){ //vitória carta 2
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Pontos Turísticos \n");
            printf("Pontos Turísticos carta 1: %d. Pontos Turísticos carta 2: %d. \n", pontos1, pontos2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 2: %s!!!***\n", nome2);
        } else { //empate
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Pontos Turísticos \n");
            printf("Pontos Turísticos carta 1: %d. Pontos Turísticos carta 2: %d. \n", pontos1, pontos2);
            printf("E o vencedor é: \n");
            printf("*** TEMOS UM EMPATE!!!***\n");
        } break;
        case 5:
        if(densidade1 < densidade2){ //vitória carta 1
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Densidade Populacional \n");
            printf("Densidade Populacional carta 1: %.3f. Densidade Populacional carta 2: %.3f. \n", densidade1, densidade2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 1: %s!!!***\n", nome1);
        } else if(densidade1 > densidade2){ //vitória carta 2
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Densidade Populacional \n");
            printf("Densidade Populacional carta 1: %.3f. Densidade Populacional carta 2: %.3f. \n", densidade1, densidade2);
            printf("E o vencedor é: \n");
            printf("*** A CARTA 2: %s!!!***\n", nome2);
        } else { //empate
            printf("\n*** RESULTADO ***\n");
            printf("Carta 1: %s. Carta 2: %s \n", nome1, nome2);
            printf("Atributo escolhido: Densidade Populacional \n");
            printf("Densidade Populacional carta 1: %.3f. Densidade Populacional carta 2: %.3f. \n", densidade1, densidade2);
            printf("E o vencedor é: \n");
            printf("*** TEMOS UM EMPATE!!!***\n");
        } break;
        default: //caso o usuário escolha um valor fora das opções fornecidas
        printf("Opção inválida. Por favor selecione uma das opções fornecidas! \n");
    }


    return 0;
}