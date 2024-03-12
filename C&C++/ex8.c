#include <stdio.h>
#include <stdlib.h>

void imprimirSequencia(int numero){

    if(numero == 0){
        printf("%d\n", numero);
    }
    else{
        imprimirSequencia(numero-1);
        printf("%d\n", numero);
    }

    return;
}

int main(){

    int numero;

    printf("Digite um numero:\n");
    scanf("%d", &numero);
    system("cls");
    imprimirSequencia(numero);
    
    return 0;
}