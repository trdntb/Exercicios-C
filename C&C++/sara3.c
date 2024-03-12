#include <stdio.h>

int main(){

    int numero, soma =0, i, contador = 0;

    printf("Digite o numero para descobrir a raiz:\n");
    scanf("%d", &numero);

    for(i = 1; soma < numero; i += 2){
        soma = soma + i;
        contador = contador + 1;
    }

    if(numero == soma)
        printf("raiz de %d: %d", numero, contador);
    else{
        printf("Raiz nao exata!");
    }
    return 0;
}