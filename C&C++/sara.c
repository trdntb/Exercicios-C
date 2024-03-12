#include <stdio.h>

int main(){

    int i = 0;
    float maiorNota = -1, notas, media = 0;


    //LOOP PARA LER AS NOTAS E REALIZAR OS CALCULOS
    while (i<5){
        printf("Digite a nota %d: ", i);
        scanf("%f", &notas);//LE AS NOTAS

        media += notas/5;//CALCULA A MEDIA

        if(notas > maiorNota){//CONSEGUE A MAIOR NOTA!
            maiorNota = notas;
        }
        i++;//INCREMENTA A VARIAVEL CONTADORA!
    }

    //SAIDA 
    printf("A maior nota eh: %f", maiorNota);
    printf("A media das notas eh: %f", media);
    
    return 0;
}