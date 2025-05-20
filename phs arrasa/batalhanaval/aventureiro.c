#include <stdio.h>

void imprimirCoordenadas(char tabuleiro[10][10]) {
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            if (tabuleiro[x][y] == '3') {
                printf("Navio na posição: (%d, %d)\\n", x, y);
            }
        }
    }
}

int main() {
    char tabuleiro[10][10] = {
        {'3', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'3', '3', '3', '0', '0', '0', '3', '0', '0', '0'},
        {'3', '3', '3', '0', '0', '0', '0', '3', '0', '0'},
        {'3', '0', '3', '0', '0', '0', '3', '0', '0', '0'},
        {'0', '0', '3', '0', '0', '0', '3', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '3', '3', '0', '0'},
        {'0', '0', '3', '0', '0', '3', '0', '3', '0', '0'},
        {'0', '3', '0', '0', '3', '0', '0', '3', '0', '0'},
        {'3', '0', '0', '0', '3', '3', '3', '0', '0', '0'}
    };

    int x, y;
    char continuar;



    do {
        printf("Por favor, digite as coordenadas para atacar (x e y, números de 0 a 9): ");
        scanf("%d %d", &x, &y);

        if (x < 0 || x > 9 || y < 0 || y > 9) {
            printf("Ops! Essas coordenadas não são válidas. Tente de novo.\\n");
        } else if (tabuleiro[x][y] == '3') {
            printf("Uau! Você acertou um navio na posição (%d, %d)!\\n", x, y);
            tabuleiro[x][y] = 'X'; // Marca como atingido
        } else {
            printf("Ah, você errou. Não tem navio na posição (%d, %d).\\n", x, y);
        }

        printf("Quer continuar jogando? (s para sim, n para não): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Valeu por jogar! Até a próxima!\\n");

    imprimirCoordenadas(tabuleiro);

    return 0;
}
