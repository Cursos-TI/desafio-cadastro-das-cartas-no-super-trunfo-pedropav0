#include <stdio.h>

int main(){

    int populacao;
    int area;
    int pib;
    int ponto_turistico;
    char codigo_cidade[4];
    float densidade;
    float pib_capita;
    
    // Solicita ao usuário o cadastro das cartas do jogo. 01 país, 08 estados, 04 cidades em cada estado.
    printf("Selecione o código da cidade que pretende inserir dados e depois entre com dados da cidade escolhida:\n");
    printf(" 01 - população\n 02 - área\n 03 - PIB\n 04 - número de pontos turísticos.\n");

    printf("Código da Cidade: ");
    scanf("%s", codigo_cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área: ");
    scanf("%d", &area);
    
    printf("PIB: ");
    scanf("%d", &pib);

    densidade = (float)populacao / area;
    pib_capita = (float)pib / populacao;

  
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);
    printf("\n");
    printf("Estes são os dados da cidade cadastrada:\n");
    printf("Código da cidade: %s\n", codigo_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %d km²\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos Turísticos: %d\n", ponto_turistico);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per capita: %.2f\n", pib_capita);

return 0;


}
