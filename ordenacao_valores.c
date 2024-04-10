#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Valores {
    int valor[10];
    int posicao;
};

void getValores(struct Valores *valores) {
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores->valor[i]);
    }
}

void ordenarValores(struct Valores *valores) {
    int aux;
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (valores->valor[i] > valores->valor[j]) {
                aux = valores->valor[i];
                valores->valor[i] = valores->valor[j];
                valores->valor[j] = aux;
            }
        }
    }
}

int main() {
    struct Valores valores;
    getValores(&valores);
    ordenarValores(&valores);
    printf("Valores ordenados de forma crescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", valores.valor[i]);
    }
    return 0;
}
