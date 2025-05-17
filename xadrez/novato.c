#include <stdio.h> 

int main() {
    // mover bispo 5 casas na diagonal superior direita
    int Bispo;
    for (Bispo = 0; Bispo < 5; Bispo++) {
        printf("Bispo: diagonal\n");
    }

    // move a torre 5 casas para a direita
    int i = 0;
    while (i <= 5) {
        printf("Torre: direita\n");
        i++;
    }

    // mover rainha 8 casas para a esquerda
    int Rainha = 8;
    i = 0;
    do {
        printf("Rainha: esquerda\n");
        i++;
    } while (i < Rainha);

    return 0;
}
