#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[60];
    int idade;
    float altura;
    float peso;
    float IMC;
    char categoriaIMC[20]; // Correção: Declarar categoriaIMC como um array de caracteres
} Pessoa;

float calcularIMC(Pessoa pessoa) {
    return pessoa.peso / (pessoa.altura * pessoa.altura);
}

void defineCategoriaIMC(Pessoa *p) {
    float IMC = p->IMC; // Obtenha o IMC calculado
    if (IMC < 18.5) {
        strcpy(p->categoriaIMC, "Abaixo do peso");
    } else if (IMC < 25) {
        strcpy(p->categoriaIMC, "Peso normal");
    } else if (IMC < 30) {
        strcpy(p->categoriaIMC, "Sobrepeso");
    } else {
        strcpy(p->categoriaIMC, "Obesidade");
    }
}

void atualizarIdade(struct Pessoa *X) {
    X-> idade++;
    
}

int main() {
    Pessoa X;

    printf("Digite o nome: ");
    fgets(X.nome, sizeof(X.nome), stdin);
    X.nome[strcspn(X.nome, "\n")] = 0;

    printf("Digite a idade: ");
    scanf("%d", &X.idade);

    printf("Digite a altura: ");
    scanf("%f", &X.altura);

    printf("Digite o peso: ");
    scanf("%f", &X.peso);

    X.IMC = calcularIMC(X);
    defineCategoriaIMC(&X); // Calcula a categoria IMC

    printf("Nome: %s\n", X.nome);
    printf("Idade: %d\n", X.idade);
    printf("Altura: %.2f\n", X.altura);
    printf("Peso: %.2f\n", X.peso);
    printf("IMC: %.2f\n", X.IMC);
    printf("Categoria IMC: %s\n", X.categoriaIMC);

    return 0;
}
