#include <stdio.h>
#include <stdlib.h>

/*6. Crie um programa que contenha uma função que permita passar por parâmetro dois 
números inteiros A e B. A função deverá calcular a soma entre esses dois números e 
armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas 
deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função 
principal.
*/

void soma(int *A, int *B){
    *A = *A + *B;
}

int main(){
    
    int A, B;

    printf("Digite dois valores abaixo:\n ");
    scanf("%d", &A);
    scanf("%d", &B);
    soma(&A, &B);
    printf("A soma dos valores foi de:\n\t-----> %d\nE o segundo numero foi:\n\t-----> %d", A, B);


    return 0;
}