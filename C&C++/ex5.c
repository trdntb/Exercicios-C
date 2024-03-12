#include <stdio.h>
#define TAM 10

void ordenarVetor(int*);
void lerVetor(int*);
void imprimirVetor(int*);

int main(){

    int vetor[TAM];

    lerVetor(vetor);
    ordenarVetor(vetor);
    imprimirVetor(vetor);
    printf("Maior valor: %d\nMenor valor: %d", vetor[TAM-1], vetor[0]);


    return 0;
}

void ordenarVetor(int vetor[TAM]){
    
    int i, aux, verificar = 0;

    while(verificar != 1){
        verificar = 1;
        for(i = 0; i-1 < TAM; i++){
            if(vetor[i] > vetor[i+1]){
                verificar = 0;
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
    return;
}

void lerVetor(int vetor[TAM]){

    int i;

    for(i = 0; i < TAM; i++){
        printf("vetor[%d] =  ", i);
        scanf("%d", &vetor[i]);
    }
    return;
}

void imprimirVetor(int vetor[TAM]){
    for(int i = 0; i < TAM; i++){
        printf("VETOR ORDENADO -> vetor[%d]: %d\n", i, vetor[i]);
    }
    return;
}
