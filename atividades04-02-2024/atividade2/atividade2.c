#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variáveis inteiras. Mostre seus endereços e 
seus respectivos valores.*/


int main(){

    int x, y;
    int *pX = &x;
    int *pY = &y;

    printf("Digite um numero:\n");
    scanf("%d", &x);
    printf("Digite outro numero:\n");
    scanf("%d", &y);
    printf("Os numeros que voce digitou foram: %d e %d\ne seus enderecos de memoria sao: %p e %p", *pX, *pY, pX, pY);


    return 0;
}