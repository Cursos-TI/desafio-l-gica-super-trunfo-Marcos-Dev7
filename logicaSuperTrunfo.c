#include <stdio.h>

// Definição da estrutura Carta
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

// Função para exibir o menu de forma dinâmica
char exibirMenu(const char *titulo, int atributo_A_disponivel, int atributo_B_disponivel, int atributo_C_disponivel, int atributo_D_disponivel, int atributo_E_disponivel ){
    char escolha;
    printf("%s\n", titulo);
    if (atributo_A_disponivel) printf("A. População\n");
    if (atributo_B_disponivel) printf("B. Area\n");
    if (atributo_C_disponivel) printf("C. Pib\n");
    if (atributo_D_disponivel) printf("D. Nro Pontos Turisticos\n");
    if (atributo_E_disponivel) printf("E. Densidade Demografica\n");
    printf("Opção : \n");
    scanf(" %c", &escolha);
    return escolha;
}

int main() {
    unsigned int escolhaCarta;
    char escolhaAtributo1, escolhaAtributo2;
    
    int atributo_A_disponivel = 1;
    int atributo_B_disponivel = 1;
    int atributo_C_disponivel = 1;
    int atributo_D_disponivel = 1;
    int atributo_E_disponivel = 1;
    
    Carta carta1;
    Carta carta2;

    // Valores dos atributos para a exibição
    float valor1_carta1, valor2_carta1;
    float valor1_carta2, valor2_carta2;
    
    // Variáveis para a soma dos atributos
    float soma_carta1 = 0.0;
    float soma_carta2 = 0.0;
 
    // Cadastro das cartas (mantido o original)
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
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibPerCapita + (1.0 / carta1.densidadePopulacional);
    printf("-----------------------------------------------------\n");
    printf(" \n");

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
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibPerCapita + (1.0 / carta2.densidadePopulacional);
    printf("-----------------------------------------------------\n");
    printf(" \n");

    // Exibição dos Dados das Cartas (mantido o original)
    printf("--------------- Exibição Carta %s--------------------\n", carta1.nomeCidade);
    printf(" \n");
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %f\n", carta1.estado, carta1.cdgCarta, carta1.nomeCidade, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos, carta1.densidadePopulacional, carta1.pibPerCapita, carta1.superPoder);
    printf(" \n");
    printf("-----------------------------------------------------\n");
    
    printf("--------------- Exibição Carta %s--------------------\n", carta2.nomeCidade);
    printf(" \n");
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\nSuper Poder: %f\n", carta2.estado, carta2.cdgCarta, carta2.nomeCidade, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos, carta2.densidadePopulacional, carta2.pibPerCapita, carta2.superPoder);
    printf(" \n");
    printf("-----------------------------------------------------\n");

    // Lógica para a escolha da carta (não alterado)
    printf("*** ESCOLHA A SUA CARTA ! ***\n");
    printf("1. CARTA %s\n", carta1.nomeCidade);
    printf("2. CARTA %s\n", carta2.nomeCidade);
    printf("\nOpção: ");
    scanf("%u", &escolhaCarta);
    printf("\n\n");

    // Lógica para escolha dos atributos e menus dinâmicos (corrigido)
    escolhaAtributo1 = exibirMenu("ESCOLHA O PRIMEIRO ATRIBUTO", atributo_A_disponivel, atributo_B_disponivel, atributo_C_disponivel, atributo_D_disponivel, atributo_E_disponivel);
    
    // Atualiza a disponibilidade do atributo escolhido
    switch (escolhaAtributo1) {
        case 'A': case 'a': atributo_A_disponivel = 0; break;
        case 'B': case 'b': atributo_B_disponivel = 0; break;
        case 'C': case 'c': atributo_C_disponivel = 0; break;
        case 'D': case 'd': atributo_D_disponivel = 0; break;
        case 'E': case 'e': atributo_E_disponivel = 0; break;
        default: printf("Opção Inválida!\n"); return 1;
    }
    
    escolhaAtributo2 = exibirMenu("ESCOLHA O SEGUNDO ATRIBUTO", atributo_A_disponivel, atributo_B_disponivel, atributo_C_disponivel, atributo_D_disponivel, atributo_E_disponivel);

    // Lógica de comparação e soma
    switch (escolhaAtributo1) {
        case 'A': case 'a':
            valor1_carta1 = (float)carta1.populacao;
            valor1_carta2 = (float)carta2.populacao;
            soma_carta1 += valor1_carta1;
            soma_carta2 += valor1_carta2;
            break;
        case 'B': case 'b':
            valor1_carta1 = carta1.area;
            valor1_carta2 = carta2.area;
            soma_carta1 += valor1_carta1;
            soma_carta2 += valor1_carta2;
            break;
        case 'C': case 'c':
            valor1_carta1 = carta1.pib;
            valor1_carta2 = carta2.pib;
            soma_carta1 += valor1_carta1;
            soma_carta2 += valor1_carta2;
            break;
        case 'D': case 'd':
            valor1_carta1 = (float)carta1.pontosTuristicos;
            valor1_carta2 = (float)carta2.pontosTuristicos;
            soma_carta1 += valor1_carta1;
            soma_carta2 += valor1_carta2;
            break;
        case 'E': case 'e':
            valor1_carta1 = carta1.densidadePopulacional;
            valor1_carta2 = carta2.densidadePopulacional;
            soma_carta1 += (valor1_carta1 > 0) ? (1.0 / valor1_carta1) : 0;
            soma_carta2 += (valor1_carta2 > 0) ? (1.0 / valor1_carta2) : 0;
            break;
    }

    switch (escolhaAtributo2) {
        case 'A': case 'a':
            valor2_carta1 = (float)carta1.populacao;
            valor2_carta2 = (float)carta2.populacao;
            soma_carta1 += valor2_carta1;
            soma_carta2 += valor2_carta2;
            break;
        case 'B': case 'b':
            valor2_carta1 = carta1.area;
            valor2_carta2 = carta2.area;
            soma_carta1 += valor2_carta1;
            soma_carta2 += valor2_carta2;
            break;
        case 'C': case 'c':
            valor2_carta1 = carta1.pib;
            valor2_carta2 = carta2.pib;
            soma_carta1 += valor2_carta1;
            soma_carta2 += valor2_carta2;
            break;
        case 'D': case 'd':
            valor2_carta1 = (float)carta1.pontosTuristicos;
            valor2_carta2 = (float)carta2.pontosTuristicos;
            soma_carta1 += valor2_carta1;
            soma_carta2 += valor2_carta2;
            break;
        case 'E': case 'e':
            valor2_carta1 = carta1.densidadePopulacional;
            valor2_carta2 = carta2.densidadePopulacional;
            soma_carta1 += (valor2_carta1 > 0) ? (1.0 / valor2_carta1) : 0;
            soma_carta2 += (valor2_carta2 > 0) ? (1.0 / valor2_carta2) : 0;
            break;
    }

    // Exibição dos resultados (corrigido)
    printf("------ Exibição de Resultado ------\n");
    printf("\nCarta 1: %s\n", carta1.nomeCidade);
    printf("Atributo 1: %.2f\n", valor1_carta1);
    printf("Atributo 2: %.2f\n", valor2_carta1);
    printf("Soma dos atributos: %.2f\n", soma_carta1);

    printf("\nCarta 2: %s\n", carta2.nomeCidade);
    printf("Atributo 1: %.2f\n", valor1_carta2);
    printf("Atributo 2: %.2f\n", valor2_carta2);
    printf("Soma dos atributos: %.2f\n", soma_carta2);
    
    printf("\n");

    // Lógica de vitória final (corrigido)
    if (soma_carta1 > soma_carta2) {
        printf("A Carta %s venceu a rodada!\n", carta1.nomeCidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("A Carta %s venceu a rodada!\n", carta2.nomeCidade);
    } else {
        printf("Empate!\n");
    }

    return 0;
}