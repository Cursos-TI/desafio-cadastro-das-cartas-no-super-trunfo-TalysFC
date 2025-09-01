#include <stdio.h>


int main(){ 
    printf("Desafio Super Trunfo Países (Lógica): Mestre! \n");

    char estado1, estado2; //variáveis utilizadas no código
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;


    float densidade1, densidade2; 
    float pibpercapita1, pibpercapita2;


    int escolhaatributo1, escolhaatributo2; // nova variável criada (mestre)
    int resultado1, resultado2;

    
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


    printf("\nAgora, você escolherá o primeiro atributo que será comparado entre as cartas.\n"); //escolha do atributo (aventureiro)
    printf("Opções: \n");
    printf("1: População. \n");
    printf("2: Área. \n");
    printf("3: PIB. \n");
    printf("4: Pontos Turísticos. \n");
    printf("5: Densidade Populacional. \n");
    printf("### ATENÇÃO: Vence a comparação o atributo com maior valor, exceto a  opção 5: Densidade Demográfica (nela vence o menor número)! ###\n");
    printf("Qual atributo você deseja comparar? \n");
    scanf("%d", &escolhaatributo1);


    switch (escolhaatributo1){ //switch utilizado para mostrar o resultado de acordo com o atributo escolhido pelo usuário (mestre)
        case 1:
        printf("Você escolheu o atributo: População! \n");
        if(populacao1 == populacao2){
            resultado1 = 2; //empate
        } else{resultado1 = populacao1 > populacao2 ? 1 : 0; //1 == vitória carta 1 e 0 == vitória carta 2
        }
        break;
        case 2:
        printf("Você escolheu o atributo: Área! \n");
        if(area1 == area2){
            resultado1 = 2;
        } else{resultado1 = area1 > area2 ? 1 : 0;
        }
        break;
        case 3:
        printf("Você escolheu o atributo: PIB! \n");
        if(pib1 == pib2){
            resultado1 = 2;
        } else{resultado1 = pib1 > pib2 ? 1 : 0;
        }
        break;
        case 4:
        printf("Você escolheu o atributo: Pontos Turísticos! \n");
        if(pontos1 == pontos2){
            resultado1 = 2;
        } else{resultado1 = pontos1 > pontos2 ? 1 : 0;
        }
        break;
        case 5:
        printf("Você escolheu o atributo: Densidade Populacional! \n");
        if(densidade1 == densidade2){
            resultado1 = 2;
        } else{resultado1 = densidade1 < densidade2 ? 1 : 0;
        }
        break;
        default: //caso o usuário escolha um valor fora das opções fornecidas
        printf("Opção inválida. Por favor selecione uma das opções fornecidas! \n");
    }


    printf("\nAgora, você escolherá o segundo atributo que será comparado entre as cartas (não escolha o atributo que já foi escolhido).\n"); //escolha do segundo atributo (mestre)
    printf("Opções: \n");
    printf("1: População. \n");
    printf("2: Área. \n");
    printf("3: PIB. \n");
    printf("4: Pontos Turísticos. \n");
    printf("5: Densidade Populacional. \n");
    printf("### ATENÇÃO: Vence a comparação o atributo com maior valor, exceto a  opção 5: Densidade Demográfica (nela vence o menor número)! ###\n");
    printf("Qual atributo você deseja comparar? \n");
    scanf("%d", &escolhaatributo2);


    if(escolhaatributo1 == escolhaatributo2){
        printf("Opção inválida! Você escolheu o mesmo atributo.");
    } else{
        switch (escolhaatributo2){ //switch utilizado para mostrar o resultado de acordo com o atributo escolhido pelo usuário
        case 1:
        printf("Você escolheu o atributo: População! \n"); 
        if(populacao1 == populacao2){
            resultado2 = 2; //empate
        } else{resultado2 = populacao1 > populacao2 ? 1 : 0; //1 == vitória carta 1 e 0 == vitória carta 2
        }
        break;
        case 2:
        printf("Você escolheu o atributo: Área! \n");
        if(area1 == area2){
            resultado2 = 2;
        } else{resultado2 = area1 > area2 ? 1 : 0;
        }
        break;
        case 3:
        printf("Você escolheu o atributo: PIB! \n");
        if(pib1 == pib2){
            resultado2 = 2;
        } else{resultado2 = pib1 > pib2 ? 1 : 0;
        }
        break;
        case 4:
        printf("Você escolheu o atributo: Pontos Turísticos! \n");
        if(pontos1 == pontos2){
            resultado2 = 2;
        } else{resultado2 = pontos1 > pontos2 ? 1 : 0;
        }
        break;
        case 5:
        printf("Você escolheu o atributo: Densidade Populacional! \n");
        if(densidade1 == densidade2){
            resultado2 = 2;
        } else{resultado2 = densidade1 < densidade2 ? 1 : 0;
        }
        break;
        default: //caso o usuário escolha um valor fora das opções fornecidas
        printf("Opção inválida. Por favor selecione uma das opções fornecidas! \n");
    }
    }


    float somaatributos1, somaatributos2; //variável de soma de atributos 


    if(escolhaatributo1 == 1 && escolhaatributo2 == 2){ //todas as opções de soma
        somaatributos1 = (float) populacao1 + area1;
        somaatributos2 = (float) populacao2 + area2;
    } else if(escolhaatributo1 == 1 && escolhaatributo2 == 3){
        somaatributos1 = (float) populacao1 + pib1;
        somaatributos2 = (float) populacao2 + pib2;
    } else if(escolhaatributo1 == 1 && escolhaatributo2 == 4){
        somaatributos1 = (float) populacao1 + pontos1;
        somaatributos2 = (float) populacao2 + pontos2;
    } else if(escolhaatributo1 == 1 && escolhaatributo2 == 5){
        somaatributos1 = (float) populacao1 + densidade1;
        somaatributos2 = (float) populacao2 + densidade2;
    } else if(escolhaatributo1 == 2 && escolhaatributo2 == 1){
        somaatributos1 = (float) area1 + populacao1;
        somaatributos2 = (float) area2 + populacao2;
    } else if(escolhaatributo1 == 2 && escolhaatributo2 == 3){
        somaatributos1 = (float) area1 + pib1;
        somaatributos2 = (float) area2 + pib2;
    } else if(escolhaatributo1 == 2 && escolhaatributo2 == 4){
        somaatributos1 = (float) area1 + pontos1;
        somaatributos2 = (float) area2 + pontos2;
    } else if(escolhaatributo1 == 2 && escolhaatributo2 == 5){
        somaatributos1 = (float) area1 + densidade1;
        somaatributos2 = (float) area2 + densidade2;
    } else if(escolhaatributo1 == 3 && escolhaatributo2 == 1){
        somaatributos1 = (float) pib1 + populacao1;
        somaatributos2 = (float) pib2 + populacao2;
    } else if(escolhaatributo1 == 3 && escolhaatributo2 == 2){
        somaatributos1 = (float) pib1 + area1;
        somaatributos2 = (float) pib2 + area2;
    } else if(escolhaatributo1 == 3 && escolhaatributo2 == 4){
        somaatributos1 = (float) pib1 + pontos1;
        somaatributos2 = (float) pib2 + pontos2;
    } else if(escolhaatributo1 == 3 && escolhaatributo2 == 5){
        somaatributos1 = (float) pib1 + densidade1;
        somaatributos2 = (float) pib2 + densidade2;
    } else if(escolhaatributo1 == 4 && escolhaatributo2 == 1){
        somaatributos1 = (float) pontos1 + populacao1;
        somaatributos2 = (float) pontos2 + populacao2;
    } else if(escolhaatributo1 == 4 && escolhaatributo2 == 2){
        somaatributos1 = (float) pontos1 + area1;
        somaatributos2 = (float) pontos2 + area2;
    } else if(escolhaatributo1 == 4 && escolhaatributo2 == 3){
        somaatributos1 = (float) pontos1 + pib1;
        somaatributos2 = (float) pontos2 + pib2;
    } else if(escolhaatributo1 == 4 && escolhaatributo2 == 5){
        somaatributos1 = (float) pontos1 + densidade1;
        somaatributos2 = (float) pontos2 + densidade2;
    } else if(escolhaatributo1 == 5 && escolhaatributo2 == 1){
        somaatributos1 = (float) densidade1 + populacao1;
        somaatributos2 = (float) densidade2 + populacao2;
    } else if(escolhaatributo1 == 5 && escolhaatributo2 == 2){
        somaatributos1 = (float) densidade1 + area1;
        somaatributos2 = (float) densidade2 + area2;
    } else if(escolhaatributo1 == 5 && escolhaatributo2 == 3){
        somaatributos1 = (float) densidade1 + pib1;
        somaatributos2 = (float) densidade2 + pib2;
    } else if(escolhaatributo1 == 5 && escolhaatributo2 == 4){
        somaatributos1 = (float) densidade1 + pontos1;
        somaatributos2 = (float) densidade2 + pontos2;
    }


    printf("\n***Agora, vamos aos resultados!*** \n"); //apresentação do resultados
    printf("\n Os paises que estão disputando são: %s (carta 1) e %s (carta 2)! \n", nome1, nome2);
    if(escolhaatributo1 == 1){ //escolha de atributos 1
        printf("O primeiro atributo escolhido foi: População! \n");
        printf("População da carta 1: %d. \n", populacao1);
        printf("População da carta 2: %d. \n", populacao2);
        if(resultado1 == 1){
            printf("A população da carta 1 é maior que a da carta 2! \n");
        } else if(resultado1 == 0){
            printf("A população da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("A população da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo1 == 2){
        printf("O primeiro atributo escolhido foi: Área! \n");
        printf("Área da carta 1: %.2f. \n", area1);
        printf("Área da carta 2: %.2f. \n", area2);
        if(resultado1 == 1){
            printf("A área da carta 1 é maior que a da carta 2! \n");
        } else if(resultado1 == 0){
            printf("A área da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("A área da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo1 == 3){
        printf("O primeiro atributo escolhido foi: PIB! \n");
        printf("PIB da carta 1: R$%.2f. \n", pib1);
        printf("PIB da carta 2: R$%.2f. \n", pib2);
        if(resultado1 == 1){
            printf("O PIB da carta 1 é maior que a da carta 2! \n");
        } else if(resultado1 == 0){
            printf("O PIB da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("O PIB da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo1 == 4){
        printf("O primeiro atributo escolhido foi: Pontos Turísticos! \n");
        printf("Pontos Turísticos da carta 1: %d. \n", pontos1);
        printf("Pontos Turísticos da carta 2: %d. \n", pontos2);
        if(resultado1 == 1){
            printf("O número de pontos turísticos da carta 1 é maior que a da carta 2! \n");
        } else if(resultado1 == 0){
            printf("O número de pontos turísticos da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("O número de pontos turísticos da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo1 == 5){
        printf("O primeiro atributo escolhido foi: Densidade! \n");
        printf("Densidade da carta 1: %.2f. \n", densidade1);
        printf("Densidade da carta 2: %.2f. \n", densidade2);
        if(resultado1 == 1){
            printf("A densidade da carta 2 é maior que a da carta 1! \n");
        } else if(resultado1 == 0){
            printf("A densidade da carta 1 é maior que a da carta 2! \n");
        } else{
            printf("A densidade da carta 1 e da carta 2 são iguais! \n");
        }
    }
    if(escolhaatributo2 == 1){ //escolha de atributos 2
        printf("O segundo atributo escolhido foi: População! \n");
        printf("População da carta 1: %d. \n", populacao1);
        printf("População da carta 2: %d. \n", populacao2);
        if(resultado2 == 1){
            printf("A população da carta 1 é maior que a da carta 2! \n");
        } else if(resultado2 == 0){
            printf("A população da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("A população da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo2 == 2){
        printf("O segundo atributo escolhido foi: Área! \n");
        printf("Área da carta 1: %.2f. \n", area1);
        printf("Área da carta 2: %.2f. \n", area2);
        if(resultado2 == 1){
            printf("A área da carta 1 é maior que a da carta 2! \n");
        } else if(resultado2 == 0){
            printf("A área da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("A área da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo2 == 3){
        printf("O segundo atributo escolhido foi: PIB! \n");
        printf("PIB da carta 1: R$%.2f. \n", pib1);
        printf("PIB da carta 2: R$%.2f. \n", pib2);
        if(resultado2 == 1){
            printf("O PIB da carta 1 é maior que a da carta 2! \n");
        } else if(resultado2 == 0){
            printf("O PIB da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("O PIB da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo2 == 4){
        printf("O segundo atributo escolhido foi: Pontos Turísticos! \n");
        printf("Pontos Turísticos da carta 1: %d. \n", pontos1);
        printf("Pontos Turísticos da carta 2: %d. \n", pontos2);
        if(resultado2 == 1){
            printf("O número de pontos turísticos da carta 1 é maior que a da carta 2! \n");
        } else if(resultado2 == 0){
            printf("O número de pontos turísticos da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("O número de pontos turísticos da carta 1 e da carta 2 são iguais! \n");
        }
    } else if(escolhaatributo2 == 5){
        printf("O segundo atributo escolhido foi: Densidade! \n");
        printf("Densidade da carta 1: %.2f. \n", densidade1);
        printf("Densidade da carta 2: %.2f. \n", densidade2);
        if(resultado2 == 1){
            printf("A densidade da carta 1 é maior que a da carta 2! \n");
        } else if(resultado2 == 0){
            printf("A densidade da carta 2 é maior que a da carta 1! \n");
        } else{
            printf("A densidade da carta 1 e da carta 2 são iguais! \n");
        }
    }
    printf("A soma dos atributos escolhidos da carta 1 é: %.2f. \n", somaatributos1);
    printf("A soma dos atributos escolhidos da carta 2 é: %.2f. \n", somaatributos2);
    if(resultado1 == 1 && resultado2 == 1){ //vitória carta 1
        printf("E o vencedor é... \n");
        printf("## A CARTA 1! PARABÉNS! ##");
    } else if (resultado1 == 1 && resultado2 == 2){
        printf("E o vencedor é... \n");
        printf("## A CARTA 1! PARABÉNS! ##");
    } else if (resultado1 == 2 && resultado2 == 1){
        printf("E o vencedor é... \n");
        printf("## A CARTA 1! PARABÉNS! ##");
    } else if (resultado1 == 0 && resultado2 == 0){ //vitória carta 2
        printf("E o vencedor é... \n");
        printf("## A CARTA 2! PARABÉNS! ##");
    } else if (resultado1 == 0 && resultado2 == 2){
        printf("E o vencedor é... \n");
        printf("## A CARTA 2! PARABÉNS! ##");
    } else if (resultado1 == 2 && resultado2 == 0){
        printf("E o vencedor é... \n");
        printf("## A CARTA 2! PARABÉNS! ##");
    } else { //empate
        printf("E o vencedor é... \n");
        printf("## TIVEMOS UM EMPATE! PARABÉNS! ## \n");
    } 


    return 0;
}