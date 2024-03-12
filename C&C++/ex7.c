#include <stdio.h>
#include <stdlib.h>

void imprimirSequencia(int);

int main(){

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);
    system("cls");
    imprimirSequencia(numero);

    return 0;
}

void imprimirSequencia(int numero){
    
    if(numero > 1){
        printf("%d\n", numero);
        imprimirSequencia(numero-1);
    }   
    else{
        printf("%d\n", 1);
    }

    return;
}