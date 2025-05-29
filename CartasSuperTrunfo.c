#include <stdio.h>
#include <string.h>

int main() {

    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int pontos1, pontos2;


    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o codigo da primeira carta: ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%d", &pontos1);
    getchar();


    printf("\nDigite o estado da segunda carta: ");
    scanf("%c", &estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turísticos da cidade: ");
    scanf("%d", &pontos2);


    printf("\nCarta 1: \n");
    printf("Estado: %c", estado1);
    printf("\nCodigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos1);
    float densidadep = populacao1 / area1;
    printf("\nDensidade Populacional: %.2f", densidadep);
    float pibcap1 = pib1 / populacao1;
    printf("\nPIB per Capita: %.2f\n", pibcap1);

    printf("\nCarta 2: \n");
    printf("Estado: %c", estado2);
    printf("\nCodigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos2);
    float densidadep2 = populacao2 / area2;
    printf("\nDensidade Populacional: %.2f", densidadep2);
    float pibcap2 = pib2 / populacao2;
    printf("\nPIB per Capita: %.2f\n", pibcap2);

    

    return 0;
}
