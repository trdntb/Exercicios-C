#include <stdio.h>
#define TAM 2

void lerMatriz(int[][TAM]);
int somar(int[][TAM]);

int main(){

    int matriz[TAM][TAM];
    int soma;

    lerMatriz(matriz);
    soma = somar(matriz);
    printf("soma de todos os elementos da matriz: %d", soma);

    return 0;
}

void lerMatriz(int matriz[][TAM]){

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return;
}

int somar(int matriz[][TAM]){

    int soma = 0;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

