#include <stdio.h>

int fatorial(int numero){

    if(numero == 1 || numero == 0){
        return 1;
    }
    else{
        return numero * fatorial(numero-1);
    }
}

int main(){

   int n, fat;

   printf("Digite um numero para descobrir o seu fatorial:\n");
   scanf("%d", &n);

   fat = fatorial(n);
   printf("fatorial de %d:\n%d", n,fat);

    return 0;
}

// n 