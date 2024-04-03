#include <stdlib.h>
#include <string.h>

#define ERRO -1

int main(){
    char nomes[4][60] = {"jose é feio para p##$", "lucas ate que eh legalzin", "rafael chato", "brayon problema"};
    int nomes_posic;
    printf("entre com o numero da poscao do nome que voce quer ver, lembrando que inicia com 0: ");
    scanf("%d", &nomes_posic);
    if (nomes_posic >= 0 && nomes_posic < 4) {
        int tamanho_nome = strlen(nomes[nomes_posic]);
        printf("o nome da posição eh %d is %s\n", nomes_posic, nomes[nomes_posic]);
        printf("o tamanho do nome eh %d caracteres\n", tamanho_nome);
    } else {
        printf("Invalid position\n");
    }
    return 0;
}