#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código permite a comparação entre duas cidades com base nas suas propriedades.

int main() {

    int código_da_cidade, população, número_de_pontos_turísticos;
    char nome[255];
    float área, PIB;
    float densidade_populacional;
    float pib_per_capita;

    printf("*** Desafio Cartas Super Trunfo! ***\n");

    // Cadastro da primeira cidade
    printf("\nDigite o código da sua primeira cidade: ");
    scanf("%d", &código_da_cidade);

    printf("\nDigite o nome da sua primeira cidade: ");
    scanf("%s", nome);

    printf("\nDigite a população da sua primeira cidade: ");
    scanf("%d", &população);
    
    printf("\nDigite a área da sua primeira cidade: ");
    scanf("%f", &área);

    printf("\nDigite o PIB da sua primeira cidade: ");
    scanf("%f", &PIB);

    printf("\nDigite o número de pontos turísticos da sua primeira cidade: ");
    scanf("%d", &número_de_pontos_turísticos);

    // Cálculos da primeira cidade
    densidade_populacional = (população / área);
    pib_per_capita = (PIB / população);

    printf("\n*** Dados da Primeira Cidade ***\n");
    printf("Código da cidade: %d\nNome: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %d\nPib per Capita: %.2f\nDensidade Populacional: %.2f\n", 
           código_da_cidade, nome, população, área, PIB, número_de_pontos_turísticos, pib_per_capita, densidade_populacional);

    // Cadastro da segunda cidade
    int código_da_cidade2, população2, número_de_pontos_turísticos2;
    char nome2[255];
    float área2, PIB2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("\nDigite o código da sua segunda cidade: ");
    scanf("%d", &código_da_cidade2);

    printf("\nDigite o nome da sua segunda cidade: ");
    scanf("%s", nome2);

    printf("\nDigite a população da sua segunda cidade: ");
    scanf("%d", &população2);
    
    printf("\nDigite a área da sua segunda cidade: ");
    scanf("%f", &área2);

    printf("\nDigite o PIB da sua segunda cidade: ");
    scanf("%f", &PIB2);

    printf("\nDigite o número de pontos turísticos da sua segunda cidade: ");
    scanf("%d", &número_de_pontos_turísticos2);

    // Cálculos da segunda cidade
    densidade_populacional2 = (população2 / área2);
    pib_per_capita2 = (PIB2 / população2);

    printf("\n*** Dados da Segunda Cidade ***\n");
    printf("Código da cidade: %d\nNome: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %d\nPib per Capita: %.2f\nDensidade Populacional: %.2f\n", 
           código_da_cidade2, nome2, população2, área2, PIB2, número_de_pontos_turísticos2, pib_per_capita2, densidade_populacional2);

    // Comparação das cartas com base nas propriedades

    // Comparando a densidade populacional (menor valor vence)
    if (densidade_populacional < densidade_populacional2) {
        printf("\nA primeira cidade venceu na densidade populacional!\n");
    } else {
        printf("\nA segunda cidade venceu na densidade populacional!\n");
    }

    // Comparando a população (maior valor vence)
    if (população > população2) {
        printf("\nA primeira cidade venceu na população!\n");
    } else {
        printf("\nA segunda cidade venceu na população!\n");
    }

    // Comparando a área (maior valor vence)
    if (área > área2) {
        printf("\nA primeira cidade venceu na área!\n");
    } else {
        printf("\nA segunda cidade venceu na área!\n");
    }

    // Comparando o PIB (maior valor vence)
    if (PIB > PIB2) {
        printf("\nA primeira cidade venceu no PIB!\n");
    } else {
        printf("\nA segunda cidade venceu no PIB!\n");
    }

    // Comparando o número de pontos turísticos (maior valor vence)
    if (número_de_pontos_turísticos > número_de_pontos_turísticos2) {
        printf("\nA primeira cidade venceu no número de pontos turísticos!\n");
    } else {
        printf("\nA segunda cidade venceu no número de pontos turísticos!\n");
    }

    // Comparando o PIB per capita (maior valor vence)
    if (pib_per_capita > pib_per_capita2) {
        printf("\nA primeira cidade venceu no PIB per capita!\n");
    } else {
        printf("\nA segunda cidade venceu no PIB per capita!\n");
    }

    // Calculando o Super Poder de cada cidade
    float super_poder1 = população + área + PIB + número_de_pontos_turísticos + pib_per_capita;
    float super_poder2 = população2 + área2 + PIB2 + número_de_pontos_turísticos2 + pib_per_capita2;

    printf("\n*** Super Poder ***\n");
    printf("Super Poder da primeira cidade: %.2f\n", super_poder1);
    printf("Super Poder da segunda cidade: %.2f\n", super_poder2);

    // Comparando os Super Poderes
    if (super_poder1 > super_poder2) {
        printf("\nA primeira cidade venceu no Super Poder!\n");
    } else {
        printf("\nA segunda cidade venceu no Super Poder!\n");
    }

    return 0;
}
