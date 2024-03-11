/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na 
    multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2 , resultado = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    for (int i = 0; i < abs(n1); i++)
        resultado += abs(n2);

    // Uma adapta��o para considerar multiplica��o de operadores negativos!
    if ((n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0))
        resultado *= 1;
    else
        resultado *= -1;
    
    printf("Multiplica��o: %d", resultado);

    return 0;
}