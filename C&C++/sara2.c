#include <stdio.h>

int main(){

    float maiorAltura = 0, mediaAlturasF = 0, altura;
    int totalHomens = 0, totalMulheres = 0;
    int sexo;

    for(int i = 0; i < 5; i++){
        printf("Digite a altura numero %d em metros:\n", i+1);
        scanf("%f", &altura);
        printf("Informe 0 para masculino ou 1 para feminino:\n");
        scanf("%d", &sexo);

        if(sexo == 0){
            totalHomens++;
        }
        else{
            totalMulheres++;
            mediaAlturasF = mediaAlturasF + altura;
        }

        if(altura > maiorAltura){
            maiorAltura = altura;
        }
    }

    mediaAlturasF = mediaAlturasF/totalMulheres;

    printf("\n\n");
    printf("Maior altura: %f\n", maiorAltura);
    printf("Media das alturas femininas: %f\n", mediaAlturasF);
    printf("Total Homens: %d", totalHomens);

    return 0;
}