#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tipo_ficha
    {
        char nome[50];
        int idade;
        float salario;
    };
    
    typedef struct tipo_ficha tipo_ficha;


int main(){

    int i;
    tipo_ficha lista[5];

    for(i = 0; i < 5; i++){
        printf("\n\n--------------------Aluno %d--------------------\n\n", i);
        printf("Digite o seu nome completo: ");
        gets(lista[i].nome);
        fflush(stdin);
        printf("Digite sua idade: ");
        scanf(" %d", &lista[i].idade);
        fflush(stdin);
        printf("Digite seu salario: ");
        scanf("%f", &lista[i].salario);
        fflush(stdin);
    }

    system("cls");

    for(i = 0; i < 5; i++){
        printf("\n\n--------------------Aluno %d--------------------\n\n", i);
        printf("Seu nome: %s\n", lista[i].nome);
        printf("Sua idade: %d\n", lista[i].idade);
        printf("Seu salario: %.2f\n", lista[i].salario);
    }

    return 0;
}