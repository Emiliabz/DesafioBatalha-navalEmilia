#include <stdio.h>

int main() {
    // Tabuleiro 10x10 (0 a 9 em X e Y)
    int tabuleiro[10][10] = {0};
    
    // Navio 1 - Horizontal (tamanho 3)
    int navio1_x = 2;  // Coordenada X inicial
    int navio1_y = 4;  // Coordenada Y inicial
    int tamanho_navio1 = 3;
    
    // Navio 2 - Vertical (tamanho 4)
    int navio2_x = 5;  // Coordenada X inicial
    int navio2_y = 1;  // Coordenada Y inicial
    int tamanho_navio2 = 4;
    
    // Posicionando navio 1 (horizontal)
    printf("Navio 1 (horizontal) nas coordenadas:\n");
    for (int i = 0; i < tamanho_navio1; i++) {
        int x = navio1_x + i;
        int y = navio1_y;
        tabuleiro[x][y] = 1;  // Marca posição do navio
        printf("Parte %d: (%d, %d)\n", i+1, x, y);
    }
    
    // Posicionando navio 2 (vertical)
    printf("\nNavio 2 (vertical) nas coordenadas:\n");
    for (int i = 0; i < tamanho_navio2; i++) {
        int x = navio2_x;
        int y = navio2_y + i;
        tabuleiro[x][y] = 1;  // Marca posição do navio
        printf("Parte %d: (%d, %d)\n", i+1, x, y);
    }
    
    return 0;
}
