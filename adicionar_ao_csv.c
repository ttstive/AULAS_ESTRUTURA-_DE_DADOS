#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct adicionar_ao_csv
{
    char nome[60];
    int idade;
    float altura;
    float peso;
    float IMC;
    
} Pessoa;

int adicionaraoCSV(Pessoa *pessoas, int n){
    //a = append 
    // w = write
    // rb = read binary
    // r = read
    FILE *arquivo = fopen("C:/Users/estevao.maia/Documents/Estrutura de dados/dados/users.csv", "w");
    if (arquivo == NULL) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        fprintf(arquivo, "%s,%d,%.2f,%.2f,%.2f\n", pessoas[i].nome, pessoas[i].idade,
         pessoas[i].altura, pessoas[i].peso, pessoas[i].IMC);
    }
    fclose(arquivo);
    return 1;
}

int main(){
    Pessoa pessoas[2];
    for (int i = 0; i < 2; i++) {
        printf("Digite o nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = 0;

        printf("Digite a idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Digite a altura: ");
        scanf("%f", &pessoas[i].altura);

        printf("Digite o peso: ");
        scanf("%f", &pessoas[i].peso);

        pessoas[i].IMC = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
        getchar();
    }

    adicionaraoCSV(pessoas, 2);
    printf("Adicionado ao CSV\n");

    return 0;
}