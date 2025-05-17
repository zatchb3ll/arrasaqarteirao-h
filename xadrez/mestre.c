#include <stdio.h> 

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Bispo: Diagonal\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Torre: Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha: Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalocima(int casas) {
    if (casas > 0) {
        printf("Cavalo: Cima\n");
        moverCavalocima(casas - 1);
    }
}

void moverCavaloDireita(int casas) {
    if (casas > 0) {
        printf("Cavalo: Direita\n");
        moverCavaloDireita(casas - 1);
    }
}

int main() {
    // mover bispo 5 casas na diagonal superior direita
    moverBispo(5);

    // move a torre 5 casas para a direita
    moverTorre(5);

    // mover rainha 8 casas para a esquerda
    moverRainha(8);

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    moverCavalocima(2);

    // Movimentação do cavalo: uma casa para a direita
    moverCavaloDireita(1);

    return 0;
}