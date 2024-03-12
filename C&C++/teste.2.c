#include <stdio.h>

void trocar_numero(int *, int*);

int main(){

    int n1, n2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Digite o segundo primeiro:\n");
    scanf("%d", &n2);
    
    printf("Antes da troca:\nn1: %d\nn2: %d\n", n1, n2);
    trocar_numero(&n1, &n2);
    printf("\nDepois da troca:\nn1: %d\nn2: %d\n", n1, n2);

    
    return 0;
}

void trocar_numero(int *n1, int *n2){

    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;

    return;
}