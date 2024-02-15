#include <stdio.h>
#include <stdlib.h>

/*3. Faça um programa que leia 2 valores inteiros e chame uma função 
que receba estas 2 variáveis e troque o conteúdo de ambas.
*/

int trocaValores(int x, int y){

    int z;
    z = y && y = x && x = z;

    return y,z;

}

int main(){

    int num1, num2;
    
    printf("Digite um numero aqui:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("O primeiro numero que voce %d");
    trocaValores(num1, num2);



    return 0;
}