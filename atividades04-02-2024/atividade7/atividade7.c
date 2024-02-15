#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima 
o endereço de cada posição desse array.*/

int main(){

    float *num[10];

    for(int a = 1; a <= 10; a++){

        printf("O endereco da posicao %d eh --->%p\n", a, num[a]);

    }

    return 0;
}