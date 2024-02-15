#include <stdio.h>
#include <stdlib.h>

/*5. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, 
faça uma função que retorne a soma do dobro dos dois números lidos. 
A função deverá armazenar o dobro de A na própria variável A e o dobro de B 
na própria variável B.
*/

int dobraValor(int X){

    X = X * 2;

    return X;
}

int main(){

    int A, B;

    printf("Digite dois numeros:\n");
    scanf("%d\n", &A);
    scanf("%d", &B);
    A = dobraValor(A);
    B = dobraValor(B);
    printf("A dobra de cada numero de digitado eh:\n\t-----> %d\n\t-----> %d\n", A, B);
    
    return 0;
}