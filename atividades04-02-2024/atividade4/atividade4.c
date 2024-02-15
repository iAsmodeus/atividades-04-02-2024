#include <stdio.h>
#include <stdlib.h>


/*4. Faça um programa que leia dois valores inteiros e chame uma função 
que receba esses 2 valores de entrada e retorne o maior valor na primeira variável 
e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.
*/

void valorMenorMaior(int x, int y){

    int menor, maior;
    
    if(x > y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }

    printf("O maior numero digitado foi: %d\nE o menor digitado foi: %d\n", maior, menor);

    return;
}

int main(){

    int x, y;

    printf("Digite 2 numeros aqui:\n");
    scanf("%d\n", &x);
    scanf("%d", &y);
    valorMenorMaior(x,y);
    


    return 0;

}