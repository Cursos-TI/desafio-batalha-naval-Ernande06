/*#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

   int tabuleiro [7][7] = {{0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0},
                           {0, 0, 0, 3, 0, 0, 0},
                           {0, 0, 0, 3, 0, 0, 0},
                           {0, 0, 3, 3, 3, 3, 0},
                           {0, 0, 0, 3, 0, 0, 0},
                           {0, 0, 0, 0, 0, 0, 0}};
    
    printf("Navio Vertical (Linha: 2, 3, 4, 5 // Coluna: 3)\n");
    printf("%d\n", tabuleiro[2][3]);
    printf("%d\n", tabuleiro[3][3]);
    printf("%d\n", tabuleiro[4][3]);
    printf("%d\n", tabuleiro[5][3]);
    printf("\n");
    printf("Navio Horizontal (Linha: 4 // Coluna: 2, 3, 4, 5)\n");
    printf("%d", tabuleiro[4][2]);
    printf("%d", tabuleiro[4][3]);
    printf("%d", tabuleiro[4][4]);
    printf("%d\n", tabuleiro[4][5]);
    printf("\n");
     
    return 0;
}*/

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    /* Sugestão: Exiba o tabuleiro completo no console,
     mostrando 0 para posições vazias e 3 para posições ocupadas.*/

    #include <stdio.h>
    int main() {
    int tabuleiro [10][10] = {0};
    
    //preencher coluna
    for(int i = 0; i < 4; i++){
        tabuleiro[i][1] = 3;
    };
    
    // preencher linha
       
    for(int j = 4; j < 8; j++){
        tabuleiro[9][j] = 3;
    };

    // preencher 1 diagonal
    for (int i = 5; i < 9; i++){
        tabuleiro[i][i] = 3;
    };
    // preencher outra diagonal diferente
    for (int i = 0; i < 4; i++){
        tabuleiro[2 + i][6 + i] = 3;
    };

    // exibir Matriz
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf(" | %d", tabuleiro[i][j]);
        }
        printf(" | \n");

    };
    return 0;
}


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0