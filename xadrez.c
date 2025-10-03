#include <stdio.h>

const int TORRE_MOVES = 5;
const int BISPO_MOVES = 7;
const int RAINHA_MOVES = 8;
#define CAVALO_MOVES 2

// ---------------- Funções Recursivas ----------------

// Movimento da Torre (direita)
void moverTorre(int passo, int limite) {
    if (passo > limite) return; 
    printf("Torre moveu para a direita %d casas\n", passo);
    moverTorre(passo + 1, limite);
}

// Movimento da Rainha (esquerda)
void moverRainha(int passo, int limite) {
    if (passo > limite) return; 
    printf("Rainha moveu para a esquerda %d casas\n", passo);
    moverRainha(passo + 1, limite);
}

// Movimento do Bispo com recursividade + loops aninhados
void moverBispo(int passo, int limite) {
    if (passo > limite) return;

    for (int v = passo; v <= passo; v++) {  // externo = vertical
        for (int h = passo; h <= passo; h++) {  // interno = horizontal
            printf("Bispo moveu na diagonal: vertical %d, horizontal %d\n", v, h);
        }
    }

    moverBispo(passo + 1, limite);
}

int main() {
    // ---------------- Torre ----------------
    moverTorre(1, TORRE_MOVES);

    printf("Carregando proxima movimentacao\n");

    // ---------------- Bispo ----------------
    moverBispo(1, BISPO_MOVES);

    printf("Carregando proxima movimentacao\n");

    // ---------------- Rainha ----------------
    moverRainha(1, RAINHA_MOVES);

    printf("Carregando proxima movimentacao\n");

    // ---------------- Cavalo ----------------
    // Movimento em L: 2 para cima e 1 para a direita
    for (int i = 1; i <= CAVALO_MOVES; i++) {  // sobe duas casas
        if (i == 2) {
            printf("Cavalo moveu %d casas para cima\n", i);
            // quando chegou no segundo movimento vertical, faz o horizontal
            for (int j = 1; j <= 2; j++) {
                if (j == 1) {
                    printf("Cavalo moveu %d casa para a direita\n", j);
                    break; // cavalo só move 1 na horizontal
                }
                continue; // controle do loop (não usado nesse caso)
            }
        } else {
            printf("Cavalo moveu %d casas para cima\n", i);
        }
    }

    printf("\nMovimentações concluídas!\n");

    return 0;
}