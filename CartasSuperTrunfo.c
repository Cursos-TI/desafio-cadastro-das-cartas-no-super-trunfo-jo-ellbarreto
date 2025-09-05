#include <stdio.h>

int main() {
    // Declaração das Variáveis para a Carta 1 
    char estado1;              // Armazena a letra do estado (A-H)
    char codigo1[4];           // Armazena o código da carta (ex: "A01")
    char nomeCidade1[50];      // Armazena o nome da cidade, permitindo espaços
    int populacao1;            // Armazena a população da cidade
    float area1;               // Armazena a área da cidade em km²
    float pib1;                // Armazena o PIB da cidade
    int pontosTuristicos1;     // Armazena o número de pontos turísticos

    // Declaração das Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Mensagem de boas-vindas
    printf("--- Cadastro de Cartas Super Trunfo ---\n\n");

    // Leitura dos Dados da Carta 1
    printf("--- Inserindo dados da Carta 1 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);  
    // %c lê um único caractere.
    // O espaço antes do % ignora qualquer '\n' residual no buffer de entrada.

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);     
    // %s lê uma string sem espaços, até encontrar espaço ou Enter.

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 
    // %[^\n] lê a linha inteira até o Enter, permitindo que o nome da cidade tenha espaços.
    // O espaço antes do % ignora qualquer Enter residual deixado no buffer.

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);  
    // %d lê um número inteiro (população).

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);      
    // %f lê um número de ponto flutuante (área da cidade).

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);       
    // %f lê um número de ponto flutuante (PIB da cidade).

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1); 
    // %d lê um número inteiro (pontos turísticos).

    printf("\nCarta 1 cadastrada com sucesso!\n\n");  
    // Mensagem de confirmação para o usuário

    // --- Leitura dos Dados da Carta 2 ---
    printf("--- Inserindo dados da Carta 2 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    // --- Exibição dos Dados Cadastrados ---
    printf("--- Cartas Cadastradas no Sistema ---\n\n");

    // Exibindo os dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);  
    // %c exibe o caractere armazenado na variável estado1

    printf("Codigo: %s\n", codigo1);  
    // %s exibe a string armazenada no array codigo1

    printf("Nome da Cidade: %s\n", nomeCidade1);  
    // %s exibe a string do nome da cidade, que pode ter espaços

    printf("Populacao: %d\n", populacao1);  
    // %d exibe o número inteiro da população

    printf("Area: %.2f km2\n", area1);  
    // %.2f exibe o número de ponto flutuante com 2 casas decimais

    printf("PIB: %.2f bilhoes de reais\n", pib1);  
    // %.2f exibe o PIB com 2 casas decimais

    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);  

    printf("\n--------------------------------------\n\n");  
    // Linha separadora para organizar a saída

    // Exibindo os dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; 
}
