#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

void getProduto(struct Produto *produto);

int main() {
    FILE *arquivo;
    arquivo = fopen("carrinho_compras.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo\n");
        exit(1);
    }

    FILE *html = fopen("output.html", "w");
    if(html == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    float Total = 0.0;
    
    fprintf(html, "<table border='1'>\n"); // Open the HTML table here
    while (fscanf(arquivo, "%s %f %d", produto->nome, &produto->preco, &produto->quantidade) == 3) {
        printf("%s, %d * %.2f = %.2f\n",
               produto->nome, produto->quantidade, produto->preco, produto->quantidade * produto->preco);
        fprintf(html, "<tr><td>%s</td><td>%d</td><td>%.2f</td><td>%.2f</td></tr>",
                produto->nome, produto->quantidade, produto->preco, produto->quantidade * produto->preco);
        Total += produto->quantidade * produto->preco;
    }
    fprintf(html, "</table>\n"); // Close the HTML table here

    fprintf(html, "<h1>Total: %.2f</h1>", Total);
    
    fclose(arquivo); 
    fclose(html);
} 
