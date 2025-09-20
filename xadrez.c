#include <stdio.h>

const int TORRE_MOVES = 5;
const int BISPO_MOVES = 7;
const int RAINHA_MOVES = 8;

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i;
    // Implementação de Movimentação do Bispo

    for (int i = 0; i < TORRE_MOVES; i++) {
        printf("Torre moveu para a direita %d casas\n", i + 1);
    }
    
    printf("Carregando proxima movimentacao\n");

    for (int i = 0; i < BISPO_MOVES; i++) {
        printf("Bispo moveu na diagonal %d casas\n", i + 1);
    }

    printf("Carregando proxima movimentacao\n");

    for (int i = 0; i < RAINHA_MOVES; i++) {
        printf("Rainha moveu para a esquerda %d casas\n", i + 1);
    }
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
