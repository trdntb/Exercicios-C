#include <stdio.h>
#define N 5

void excluirPilha(int *, int*, int*);
void addPilha(int *, int*, int*);
int pesquisar(int*, int, int*);

int main(){

    int pilha[N];
    int TAM = 0;
    int lastpos = 0, opcao;
    int numero, encontrei;

    do
    {
        printf("1- Adicionar na pilha\n2- Ver pilha\n3- Excluir da pilha\n4- Pesquisar\n5- Sair\n");
        scanf("%d", &opcao);
 
        switch (opcao)
        {
        case 1:
            addPilha(&TAM, pilha, &lastpos);
            break;
        case 2: 
            printf("\n\n\nINICIO -> ");
            for(int i = 0; i < TAM; i++){
                printf("%d ", pilha[i]);
            }
            printf("<- FIM \n\n\n");
            break;
        case 3:
            excluirPilha(&TAM, pilha, &lastpos);
            break;
        case 4:
            printf("Digite um numero para pesquisar na pilha: ");
            scanf("%d", &numero);
            encontrei = pesquisar(&TAM, numero, pilha);
            if(encontrei == 0)
                printf("\n\nPilha vazia!\n\n");
            else{
                if(encontrei == -1){
                    printf("\n\nNumero nao encontrado!\n\n");
                }
                    else{
                        printf("\n\n%d Encontrado!\nPOSICAO: %d\n\n ", numero, encontrei);
                    }
            }
            break;
        case 5:
            opcao = 5;
            break;
        default:
            printf("\n\n\nOpcao invalida!!\n\n\n");
            break;
        }
    } while (opcao != 5);
    

    return 0;
}

void excluirPilha(int *TAM, int pilha[N], int*lastpos){

    if(*TAM > 0 && *TAM <= 5){
        pilha[*TAM] = -1;
        *lastpos = pilha[*TAM - 1];
        *TAM = *TAM - 1;
    }
    else{
        printf("\n\n\n********PILHA VAZIA!!********\n\n\n");
    }
    
}

void addPilha(int *TAM , int pilha[N], int *lastpos){
    
    if(*TAM < 5){
        printf("Digite um valor para adicionar na pilha: ");
        scanf("%d", &pilha[*TAM]);
        *lastpos = pilha[*TAM];
        *TAM += 1;
    }
    else{
        printf("\n\n\n********PILHA CHEIA!!********\n\n\n");
    }
         
}

int pesquisar(int *TAM, int numero, int pilha[N]){
     
    int flag = 0;

    if(*TAM == 0)
        return flag;
    else{
        for(int i = 0; i < *TAM; i++){
            if(numero == pilha[i]){
                flag = i+1;
                break;
            }
            else{
                flag = -1;
            }
        }
    }

    return flag;

}