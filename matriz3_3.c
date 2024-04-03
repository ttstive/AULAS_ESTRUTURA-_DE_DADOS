#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int linha;
    int coluna;
} Posicao;

int MaiorValorMatriz(int matriz[3][3]){
    int maior = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}
    Posicao PosicaoMenorValorMatriz(int matriz[3][3]){
        int menor = matriz[0][0];
        Posicao posicaoMenor;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                    posicaoMenor.linha = i;
                    posicaoMenor.coluna = j;
                }
            }
        }
        return posicaoMenor;
    }


int main() {
    system("cls");
    int matriz[3][3];
    Posicao posicao;

    for (posicao.linha = 0; posicao.linha < 3; posicao.linha++) {
        for (posicao.coluna = 0; posicao.coluna < 3; posicao.coluna++) {
            printf("Digite o valor da posicao (%d, %d): ", posicao.linha, posicao.coluna);
            scanf("%d", &matriz[posicao.linha][posicao.coluna]);
        }
    }

    printf("Matriz:\n");
    for (posicao.linha = 0; posicao.linha < 3; posicao.linha++) {
        for (posicao.coluna = 0; posicao.coluna < 3; posicao.coluna++) {
            printf("%d ", matriz[posicao.linha][posicao.coluna]);
        }
        printf("\n");
    }

    printf("Maior valor da matriz: %d\n", MaiorValorMatriz(matriz));
    printf("Menor valor da matriz: %d\n", PosicaoMenorValorMatriz(matriz));

    return 0;
}