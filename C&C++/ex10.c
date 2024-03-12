#include <stdio.h>

int fibo(int numero){

    if(numero == 1){
        return 0;
    }
    else{
        if(numero == 2){
            return 1;
        }
        else{
            return fibo(numero-1) + fibo(numero-2);
        }
    }

}





int main(){

    int n, fib;

    printf("Digite um valor maior que zero:\n");
    scanf("%d", &n);
    fib = fibo(n);
    printf("fibonnaci de %d: %d", n, fib);
    

    return 0;
}