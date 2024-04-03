#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
void exibirArray(int Array[], int tamanho);

int main() {
    int V[] = {7,3,1,9,6};
    int tamanho = sizeof(V)/sizeof(int);
    exibirArray(V, tamanho);
    return 0;
}

void exibirArray(int Array[], int tamanho){
    for(int i = 0; i < tamanho; i++) {
        printf("%d\t ", Array[i]);
        printf("\n");
        printf("exibirArray: %d\n", tamanho);
    }
}