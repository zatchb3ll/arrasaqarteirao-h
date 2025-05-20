#include <stdio.h>

void imprimirCoordenadas(char tabuleiro[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 'V' || tabuleiro[i][j] == 'H') {
                printf("Navio na posição: (%d, %d)\\n", i, j);
            }
        }
    }
}

int main() {
    char tabuleiro[5][5] = {
        {'V', ' ', ' ', 'H', ' '},
        {' ', ' ', 'V', ' ', ' '},
        {'H', ' ', ' ', ' ', 'V'},
        {' ', 'H', ' ', ' ', ' '},
        {'V', ' ', ' ', 'H', ' '}
    };

    int x, y;
    char continuar;

    do {
        printf("Informe as coordenadas para atacar (x y): ");
        scanf("%d %d", &x, &y);

        if (x < 0 || x >= 5 || y < 0 || y >= 5) {
            printf("Coordenadas inválidas. Tente novamente.\\n");
        } else if (tabuleiro[x][y] == 'V' || tabuleiro[x][y] == 'H') {
            printf("Você acertou um navio na posição (%d, %d)!\\n", x, y);
            tabuleiro[x][y] = 'X'; // Marca como atingido
        } else {
            printf("Você errou. Não há navio na posição (%d, %d).\\n", x, y);
        }

        printf("Deseja continuar jogando? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Obrigado por jogar!\\n");

    return 0;
}
