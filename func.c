#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int f(int x){
    if(x==0) return (3);
    else if (x>0) return (2 * f(x-1) + 5);
    else return(ERRO);
}

int g(int x){
    if (x == 0) return (-1);
   
    else return(0); // Placeholder return statement
}

int main(){
    system("cls");
    int n = 4;
    int resposta = f(n);
    if (resposta != ERRO) printf("f(%d)) = %d", n, resposta);
    else printf("Não foi possivel realizar o calculo");

    return 0;
}