#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatenarString(char *Resultado, char *A, char *B){
    strcpy(Resultado, A);
    strcat(Resultado, B);
    

}

int main() {
    char A[100], B[100], Resultado[200];

    printf("digite a string: ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = 0;

    printf("digite a string: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = 0;

    concatenarString(Resultado, A, B);

    printf("Concatenacao: %s\n", Resultado);

    return 0;
}
