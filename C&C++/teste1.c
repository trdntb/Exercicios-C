#include <stdio.h>
#define TAM 10

void cadastrar(int*, int*);
void imprimir_vetor(int*);

int main(){

    int vetor[TAM], tamanho = 0;
    cadastrar(vetor, &tamanho);
    imprimir_vetor(vetor);

    return 0;
}

void cadastrar(int arr[TAM], int *tamanho){
    int i;

    for(i = 0; i <= 9; i++){
        *tamanho++;
        printf("vetor[%d] = ", i);
        if(arr[i] < 0){
            arr[i] *= -1;
            scanf("%d", &arr[i]);
        }
        else{
            scanf("%d", &arr[i]);
        }
    }
}

void imprimir_vetor(int arr[TAM]){

    int i;

    printf("\n\n");
    for(i = 0; i <= 9; i++){
        printf("vetor[%d]: %d\n", i, arr[i]);
    }
}

int pesquisa_vetor(int arr[TAM], int key){
     
    int i, flag = 0;

    for(i = 0; i < TAM; i++){
        if(arr[i] == key){
            flag = 1;
            return i;
        }
    }

    if(flag == 0)
        return -1;

}