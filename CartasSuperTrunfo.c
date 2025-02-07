#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc. 
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.


int main() {

    int código_da_cidade, população, número_de_pontos_turísticos;
    char nome[255];
    float área, PIB;
    float densidade_populacional;
    float pib_per_capita;

    printf("*** Desafio Cartas Super Trunfo! ***\n");

    printf("\nDigite o código da sua cidade: ");
    scanf("%d", &código_da_cidade);

    printf("\nDigite o nome da sua cidade: ");
    scanf("%s", &nome);

    while (getchar() != '\n');

    printf("\nDigite a população da sua cidade: ");
    scanf("%d", &população);

    while (getchar() != '\n');
    
    printf("\nDigite o área da sua cidade: ");
    scanf("%f", &área);

    printf("\nDigite o PIB da sua cidade: ");
    scanf("%f", &PIB);
    
    while (getchar() != '\n');

    printf("\nDigite o número de pontos turísticos da sua cidade: ");
    scanf("%d", &número_de_pontos_turísticos);

    densidade_populacional = (população / área);
    pib_per_capita = (PIB / população);

    printf("Código da cidade: %d\nNome: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nPib per Capita: %f\nDensidade Populacional: %f", código_da_cidade, nome, população, área, PIB, número_de_pontos_turísticos, pib_per_capita, densidade_populacional);


    return 0;
}
