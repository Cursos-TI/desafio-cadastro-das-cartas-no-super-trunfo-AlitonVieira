#include <stdio.h>

int main() {
    //definindo variaveis
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2; //referente aos pontos turisticos de cada carta

    //entrada de dados da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Infome o código da carta: ");
    scanf("%s", codigo1);

    printf("Informe a sigla do Estado: \n");
    scanf("%s", estado1);

    printf("Informe a Cidade: \n");
    scanf("%s", cidade1);

    printf("Informe a população: \n");
    scanf("%d", &populacao1);

    printf("Informe a área em km²: \n");
    scanf("%f", &area1);

    printf("Informe o PIB em Bilhões: \n");
    scanf("%f", &pib1);

    printf("Informe a quantia de pontos turísticos: \n");
    scanf("%d", &pontos1);

    //entrada de dados da carta 2
    printf("Cadastro da carta 2: \n");
    printf("Infome o código da carta: ");
    scanf("%s", codigo2);

    printf("Informe a sigla do Estado: \n");
    scanf("%s", estado2);

    printf("Informe a Cidade: \n");
    scanf("%s", cidade2);

    printf("Informe a população: \n");
    scanf("%d", &populacao2);

    printf("Informe a área em km²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB em Bilhões: \n");
    scanf("%f", &pib2);

    printf("Informe a quantia de pontos turísticos: \n");
    scanf("%d", &pontos2);

    //Mostrando os dados das cartas cadastradas
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área Total em KM²: %.2f\n", area1);
    printf("PIB (em Bilhões): %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populção: %d\n", populacao2);
    printf("Área Total em KM²: %.2f\n", area2);
    printf("PIB (em Bilhões): %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);








    return 0;
}
