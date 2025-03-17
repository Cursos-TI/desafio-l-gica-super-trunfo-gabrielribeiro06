#include <stdio.h>

int main() {
    // Primeira carta - São Paulo
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 11000000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 30;
    
    // Segunda carta - Rio de Janeiro
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 17000000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 50;
    
    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    
    // Escolha do atributo para comparação (exemplo: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao1 < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}

