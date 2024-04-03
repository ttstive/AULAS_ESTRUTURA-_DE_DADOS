#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arquivo = fopen("C:/Users/estevao.maia/Documents/Estrutura de dados/dados/dieta.txt", "r");
    char alimentos[60];
    int calorias;
    int proteinas;
    int carboidratos;
    if (arquivo == NULL) {
        return 0;

    }
    fgets(alimentos, sizeof(alimentos), arquivo);
    alimentos[strcspn(alimentos, "\n")] = 0;
    while (fscanf(arquivo, "%s %d %d %d", alimentos, &calorias, &proteinas, &carboidratos) != EOF){
        printf("%s\t%d\t%d\t%d\n", alimentos, calorias, proteinas, carboidratos);
    }



}