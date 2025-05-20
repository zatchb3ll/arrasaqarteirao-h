#include <stdio.h>

void imprimirCoordenadas(char tabuleiro[10][10]) {
    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            if (tabuleiro[x][y] == '3' || tabuleiro[x][y] == '4' || tabuleiro[x][y] == '5' || tabuleiro[x][y] == '6') {
                printf("Navio ou área especial na posição: (%d, %d)\\n", x, y);
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

    for (int x = 0; x < 10; x++) {
        tabuleiro[5][x] = '4'; 
        tabuleiro[y][5] = '4'; 
    }


    for (int i = 0; i <= 3; i++) {
        for (int j = 5 - i; j <= 5 + i; j++) {
            tabuleiro[5 + i][j] = '5';
        }
    }


    int alcance = 3;
    for (int x= -alcance; x <= alcance; x++) {
        for (int y = -alcance; y <= alcance; y++) {
            if (abs(x) + abs(y) <= alcance) {
                int nx = 5 + x;
                int ny = 5 + y;
                if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10) {
                    tabuleiro[nx][ny] = '6/n';
                }
            }
        }
    }

    do {
        printf("Informe as coordenadas para atacar (x y): ");
        scanf("%d %d", &x, &y);

        if (x < 0 || x >= 10 || y < 0 || y >= 10) {
            printf("Coordenadas inválidas. Tente novamente.\\n");
        } else if (tabuleiro[x][y] == '3' || tabuleiro[x][y] == '4' || tabuleiro[x][y] == '5' || tabuleiro[x][y] == '6') {
            printf("Você acertou um navio ou área especial na posição (%d, %d)!\\n", x, y);
            tabuleiro[x][y] = 'X'; // Marca como atingido
        } else {
            printf("Você errou. NÃO tem nada especial ai dentro(%d, %d).\\n", x, y);
        }

        printf("Deseja continuar jogando? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Obrigado por jogar!\\n");

    imprimirCoordenadas(tabuleiro);

    return 0;
}
