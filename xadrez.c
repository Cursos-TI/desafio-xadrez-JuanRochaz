// #include <stdio.h>

// int main() {
//     // Nível Novato - Movimentação das Peças
//     // Implementação de Movimentação do Bispo
//     // Implementação de Movimentação da Torre
//     // Implementação de Movimentação da Rainha
    
//     int j = 1;
//     int k = 1;

//     // Movimentação do Bispo
//     printf("Movimentação do Bispo:\n");
//     for (int i = 1; i <= 5; i++) { // 5 casas para cima direita
//         printf("Cima direita: %d casas\n", i);
//     }
//     // Caso for mover para outra direção (Ex. Cima esquerda) 
//     // for (int i = 1; i <= 5; i++) { // 5 casas para cima esquerda
//     //     printf("Cima esquerda: %d casas\n", i);
//     // }

//     printf("\n"); // Linha em branco para melhor leitura do código

//     // Movimentação da Torre
//     printf("Movimentação da Torre:\n");
//     while (j <= 5) { // 5 casas para a direita
//         printf("Direita: %d casas\n", j);
//         j++;
//     }

//     printf("\n"); 
    
//     // Movimentação da Rainha
//     printf("Movimentação da Rainha:\n");
//     do {
//         printf("Esquerda: %d casas\n", k);
//         k++;
//     } while (k <= 8); // 8 casas para a esquerda

//     // Nível Aventureiro - Movimentação do Cavalo
//     // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
//     // Um loop pode representar a movimentação horizontal e outro vertical.

//     printf("\n"); // Linha em branco para separar as movimentações

//     // Movimentação do Cavalo
//     printf("Movimentação do Cavalo:\n");
//     int casasCima = 2; // Número de casas para cima
//     int casasDireita = 1; // Número de casas para a direita

//     // Loop para as casas para cima
//     for (int i = 1; i <= casasCima; i++) {
//         printf("cima\n"); // Imprime "cima" para cada casa que o Cavalo se move para cima
//     }

//     // Loop aninhado para a casa à direita
//     int i = 1; // Contador para a casa à direita
//     while (i <= casasDireita) {
//         printf("direita\n"); // Imprime "direita" para a casa que o Cavalo se move para a direita
//         i++; // Incrementa o contador
//     }

//     return 0;
// }


// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    #include <stdio.h>

// Função recursiva para a movimentação da Torre
void moverTorre(int casas, int atual) {
    if (atual > casas) {
        return; // Base da recursão
    }
    printf("Direita: %d casas\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para a movimentação da Rainha
void moverRainha(int casas, int atual) {
    if (atual > casas) {
        return; // Base da recursão
    }
    printf("Esquerda: %d casas\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para a movimentação do Bispo
void moverBispo(int casasVertical, int atualVertical) {
    if (atualVertical > casasVertical) {
        return; // Base da recursão
    }
    // Movimento vertical e horizontal
    printf("Cima Direita: %d casas\n", atualVertical); // Formato desejado
    moverBispo(casasVertical, atualVertical + 1); // Chamada recursiva
}

// Função para a movimentação do Cavalo
void moverCavalo(int casasCima, int casasDireita) {
    for (int i = 1; i <= casasCima; i++) {
        for (int j = 1; j <= casasDireita; j++) {
            if (i == 2 && j == 1) {
                printf("cima\n");
                printf("cima\n");
                printf("direita\n");
                break; // Para simular o movimento em "L"
            }
        }
    }
}

int main() {
    int casasTorre = 5; // Número de casas para a Torre
    int casasRainha = 8; // Número de casas para a Rainha
    int casasBispoVertical = 5; // Número de casas para o Bispo (vertical)
    int casasCavaloCima = 2; // Número de casas para cima do Cavalo
    int casasCavaloDireita = 1; // Número de casas para a direita do Cavalo

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    moverTorre(casasTorre, 1);
    printf("\n"); // Linha em branco para separar as movimentações

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    moverRainha(casasRainha, 1);
    printf("\n"); // Linha em branco para separar as movimentações

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    moverBispo(casasBispoVertical, 1);
    printf("\n"); // Linha em branco para separar as movimentações

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    moverCavalo(casasCavaloCima, casasCavaloDireita);
    printf("\n"); // Linha em branco para separar as movimentações

    return 0;
}