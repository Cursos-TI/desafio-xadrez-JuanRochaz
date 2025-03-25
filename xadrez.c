#include <stdio.h>



int main() {
    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação do Bispo
    // Implementação de Movimentação da Torre
    // Implementação de Movimentação da Rainha
    
    int j = 1;
    int k = 1;

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= 5; i++) { // 5 casas para cima direita
        printf("Cima direita: %d casas\n", i);
    }
    // Caso for mover para outra direção (Ex. Cima esquerda) 
    // for (int i = 1; i <= 5; i++) { // 5 casas para cima esquerda
    //     printf("Cima esquerda: %d casas\n", i);
    // }

    printf("\n"); // Linha em branco para melhor leitura do código

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    while (j <= 5) { // 5 casas para a direita
        printf("Direita: %d casas\n", j);
        j++;
    }

    printf("\n"); 
    
    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    do {
        printf("Esquerda: %d casas\n", k);
        k++;
    } while (k <= 8); // 8 casas para a esquerda





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
