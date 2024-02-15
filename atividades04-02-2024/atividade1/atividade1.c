#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *pont1;
    char l, *pont2;
    float r, *pont3;

    pont1 = &n;
    pont2 = &l;
    pont3 = &r; 

    printf("Digite um numero:\n");
    scanf("%d", pont1);
    getchar();
    printf("Escreva uma letra:\n");
    scanf("%c", pont2);
    printf("Escreva um numero real:\n");
    scanf("%f", pont3);
    printf("O numero que voce digitou foi %d\nA letra que voce digitou foi %c\nO numero real que voce digitou foi %f\n", *pont1, *pont2, *pont3);

     return 0;
}