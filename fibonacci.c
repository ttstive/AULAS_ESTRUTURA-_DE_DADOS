#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int fib(int X);

int main(){
    system("cls");
    int N, Result;
    scanf("%d", &N);
    Result = fib(N);
    if (Result != ERRO) printf("%d = %d", N, Result);
    else printf("Nao existe termo");
    return 0;
}

int fib(int X){
    if (X <= 0) return ERRO;
    else if (X == 1) return 0;
    else if (X == 2) return 1;
    else return fib(X - 1) + fib(X - 2);
}