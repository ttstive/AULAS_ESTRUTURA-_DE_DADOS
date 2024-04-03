#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

long int fatori( int X);

int main(){

    system("cls");
    double N, Result;
    scanf("%lld", &N);
    Result = fatori(N);
    if (Result != ERRO) printf("%lld! = %lld", N, Result);
    else printf("Nao existe fatorial do numeor Negat");
}

long int fatori(int X){
    if (X == 0) return(1);
    else if (X >0) return (X * fatori( X-1 ));
    else return(ERRO);
}
