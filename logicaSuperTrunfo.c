#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//struct cartas
typedef struct {
    char estado;
    char cdgCarta[6];
    char nomeCidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

int main() {

    // variavel do menu

    unsigned int escolhaCarta, escolhaAtributo;

    // Variáveis de cadastro da primeira carta.
   Carta carta1;
   Carta carta2;

    // Atributos Comparação
    int populacaoResultado, areaResultado, pibResultado, PontosResultado, densidadeResultado, superPoderResultado, pibPerCapitaResultado;
  
    // Cadastro da Carta1:
    printf("--------------- Cadastro da Carta 1------------------\n");
    printf(" \n");

    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &carta1.estado);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", carta1.cdgCarta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", carta1.nomeCidade);

    printf("Digite o número da população: \n");
    scanf("%lu", &carta1.populacao);
    
    printf("Digite a àrea em km`s: \n");
    scanf("%f", &carta1.area);
    
    printf("Digite o Pib: \n");
    scanf("%f", &carta1.pib);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Cálculos

    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib/ (float)carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibPerCapita + ( 1 / carta1.densidadePopulacional);
    
    printf("-----------------------------------------------------\n");
    printf(" \n");

    // Cadastro da Carta2:
    printf("--------------- Cadastro da Carta 2------------------\n");
    printf(" \n");

    printf("Digite a letra do estado (Ex: A): \n");
    scanf(" %c", &carta2.estado);
    
    printf("Digite o código da carta: (Ex: A01)\n");
    scanf("%s", carta2.cdgCarta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", carta2.nomeCidade);

    printf("Digite o número da população: \n");
    scanf("%lu", &carta2.populacao);
    
    printf("Digite a àrea em km`s: \n");
    scanf("%f", &carta2.area);
    
    printf("Digite o Pib: \n");
    scanf("%f", &carta2.pib);
    
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d",&carta2.pontosTuristicos);
    printf("-----------------------------------------------------\n");
    printf(" \n");

    // Cálculos

    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib/ (float)carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibPerCapita + ( 1 / carta2.densidadePopulacional);



    // Exibição dos Dados das Cartas:
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %f\n", carta1.estado, carta1.cdgCarta, carta1.nomeCidade, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos, carta1.densidadePopulacional, carta1.pibPerCapita, carta1.superPoder); 
    printf("-----------------------------------------------------\n");
    printf("--------------- Exibição Carta %s--------------------\n", carta1.nomeCidade);
    printf(" \n\n");

    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %f\n", carta2.estado, carta2.cdgCarta, carta2.nomeCidade, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos, carta2.densidadePopulacional, carta2.pibPerCapita,carta2.superPoder);
    printf("-----------------------------------------------------\n");
    printf("--------------- Exibição Carta %s--------------------\n", carta1.nomeCidade);
    printf(" \n\n");

    // Menu Para escolher a carta para comparação!!!
    printf("*** ESCOLHA A SUA CARTA ! ***\n");
    printf("1. CARTA %s\n", carta1.nomeCidade);
    printf("2. CARTA %s\n", carta2.nomeCidade);
    printf("\nOpção: ");
    scanf("%u", &escolhaCarta);
    printf("\n\n");

    // Menu para escolher Atributo
    printf("ESCOLHA UM ATRIBUTO\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Pib\n");
    printf("4. Nro Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Opção : \n"); 
    scanf("%u", &escolhaAtributo);
    
    printf("------ Exibição de Resultado ------\n");

    if (escolhaCarta == 1) {
        switch (escolhaAtributo)
        {
        case 1:
            printf("Atributo: POPULAÇÃO \n");
            printf("%s %lu vs %s %lu\n", carta1.nomeCidade, carta1.populacao, carta2.nomeCidade, carta2.populacao);

            if (carta1.populacao > carta2.populacao) {
                printf("Sua Carta (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Sua Carta (%s) perdeu!\n", carta1.nomeCidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: AREA km² \n");
            printf("%s %.2f km² vs %s %.2f km²\n" , carta1.nomeCidade, carta1.area, carta2.nomeCidade, carta2.area);

            if (carta1.area > carta2.area) {
                printf("Sua Carta (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.area > carta1.area) {
                printf("Sua Carta (%s) perdeu!\n", carta1.nomeCidade);
            } else {
                printf("Empate!\n");
            }   
            break;


        case 3:
            printf("Atributo: PIB \n");
            printf("%s %.2f bilhões vs %s %.2f bilhões", carta1.nomeCidade, carta1.pib, carta2.nomeCidade, carta2.pib);

            if (carta1.pib > carta2.pib) {
                printf("Sua Carta (%s) venceu!\n", carta1.nomeCidade);
            } else if (carta2.pib > carta1.pib) {
                printf("Sua Carta (%s) perdeu! \n", carta1.nomeCidade);
            } else {
                printf("Empate! \n");
            }
            break;

        case 4:
            printf("Atributo : PONTOS TURISTICOS \n");
            printf("$%s %d vs %s %d\n", carta1.nomeCidade, carta1.pontosTuristicos, carta2.nomeCidade, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Sua Carta (%s) venceu! \n", carta1.nomeCidade);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Sua Carta (%s) perdeu! \n", carta1.nomeCidade);
            } else {
                printf("Empate! \n");
            }
            break;

        case 5: 
            printf("Atributo: DENSIDADE POPULACIONAL\n");
            printf("%s %.2f vs %s %.2f\n", carta1.nomeCidade, carta1.densidadePopulacional, carta2.nomeCidade, carta2.densidadePopulacional);

            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Sua Carta (%s) venceu! \n", carta1.nomeCidade);
            } else if (carta2.densidadePopulacional > carta1.densidadePopulacional) {
                printf("Sua Carta (%s) perdeu! \n", carta1.nomeCidade);
            } else {
                printf("Empate! \n");
            }

        default:
            printf("Atributo Invalido!\n");
            break;
        }

    } else if (escolhaCarta == 2) {
            switch (escolhaAtributo)
            {
            case 1:
                printf("Atributo: POPULAÇÃO \n");
                printf("%s %lu vs %s %lu\n", carta2.nomeCidade, carta2.populacao, carta1.nomeCidade, carta1.populacao);

                if (carta2.populacao > carta1.populacao) {
                    printf("Sua Carta (%s) venceu!\n", carta2.nomeCidade);
                } else if (carta2.populacao > carta1.populacao) {
                    printf("Sua Carta (%s) perdeu!\n", carta2.nomeCidade);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 2:
                printf("Atributo: AREA km² \n");
                printf("%s %.2f km² vs %s %.2f km²\n" , carta2.nomeCidade, carta2.area, carta1.nomeCidade, carta1.area);

                if (carta2.area > carta1.area) {
                    printf("Sua Carta (%s) venceu!\n", carta2.nomeCidade);
                } else if (carta2.area > carta1.area) {
                    printf("Sua Carta (%s) perdeu!\n", carta2.nomeCidade);
                } else {
                    printf("Empate!\n");
                }   
                break;


            case 3:
                printf("Atributo: PIB \n");
                printf("%s %.2f bilhões vs %s %.2f bilhões", carta2.nomeCidade, carta2.pib, carta1.nomeCidade, carta1.pib);

                if (carta2.pib > carta1.pib) {
                    printf("Sua Carta (%s) venceu!\n", carta2.nomeCidade);
                } else if (carta2.pib > carta1.pib) {
                    printf("Sua Carta (%s) perdeu! \n", carta2.nomeCidade);
                } else {
                    printf("Empate! \n");
                }
                break;

            case 4:
                printf("Atributo : PONTOS TURISTICOS \n");
                printf("$%s %d vs %s %d\n", carta2.nomeCidade, carta2.pontosTuristicos, carta1.nomeCidade, carta1.pontosTuristicos);

                if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                    printf("Sua Carta (%s) venceu! \n", carta2.nomeCidade);
                } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                    printf("Sua Carta (%s) perdeu! \n", carta2.nomeCidade);
                } else {
                    printf("Empate! \n");
                }
                break;

            case 5: 
                printf("Atributo: DENSIDADE POPULACIONAL\n");
                printf("%s %.2f vs %s %.2f\n", carta2.nomeCidade, carta2.densidadePopulacional, carta1.nomeCidade, carta1.densidadePopulacional);

                if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
                    printf("Sua Carta (%s) venceu! \n", carta2.nomeCidade);
                } else if (carta2.densidadePopulacional > carta1.densidadePopulacional) {
                    printf("Sua Carta (%s) perdeu! \n", carta2.nomeCidade);
                } else {
                    printf("Empate! \n");
                }
                break;
            default:
                printf("Atributo Invalido!\n");
                break;
            }
        }

        return 0;
}