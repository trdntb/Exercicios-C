#include <stdio.h>

int soma(int*, int*);

int main(){

    int x, y, z = 0;

    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);

    z = soma(&x, &y);
    x=1;
    y=2;
    printf("x + y =  %d", z);

    return 0;
}

int soma(int *x, int *y){

    return *x + *y;

}