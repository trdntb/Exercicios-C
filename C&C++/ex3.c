#include <stdio.h>

int verificarPar(int num){
    if(num % 2 == 0)
        return 0;
    else{
        return -1;
    }
    
}

int main(){

    int numero, par;

    printf("Digite um numero e verificaremos se eh par: ");
    scanf("%d", &numero);
    par = verificarPar(numero);
    if(par == 0)
        printf("Par.");
    else{
        printf("Impar.");
    }

    return 0;
}