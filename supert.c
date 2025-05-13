#include <stdio.h>

typedef struct {
    char codigo[5];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

unsigned long int calcular_pontuacao(Carta c) {
    return c.populacao * 2 + (unsigned long int)(c.area * 3) + (unsigned long int)(c.pib * 4) + c.pontos_turisticos * 5;
}

int main() {
    Carta carta1, carta2;
    unsigned long int pontuacao1, pontuacao2;

    printf("Cadastro da primeira carta:\n");
    printf("Código: ");
    scanf("%4s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\nCadastro da segunda carta:\n");
    printf("Código: ");
    scanf("%4s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    pontuacao1 = calcular_pontuacao(carta1);
    pontuacao2 = calcular_pontuacao(carta2);

    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Pontuação: %lu\n", pontuacao1);

    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Pontuação: %lu\n", pontuacao2);

    printf("\nResultado da comparação:\n");
    if (pontuacao1 > pontuacao2) {
        printf("A primeira carta (%s) venceu!\n", carta1.codigo);
    } else if (pontuacao2 > pontuacao1) {
        printf("A segunda carta (%s) venceu!\n", carta2.codigo);
    } else {
        printf("Empate entre as cartas!\n");
    }

    return 0;
}
