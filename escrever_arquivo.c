#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arquivo = fopen("C:/Users/estevao.maia/Documents/Estrutura de dados/dados/dados.txt", "r");
    int medalhas;
    char pais[60];
    if (arquivo == NULL) {
        return 0;
        }
    system("cls");
    while (fscanf(arquivo, "%s %d", pais, &medalhas) != EOF){
        printf("%s\t%d\n", pais, medalhas);
    }

}
