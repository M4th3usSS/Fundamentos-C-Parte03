/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na 
    multiplicação entre os dois números sem utilizar a operação de multiplicação.
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

    // Uma adaptação para considerar multiplicação de operadores negativos!
    if ((n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0))
        resultado *= 1;
    else
        resultado *= -1;
    
    printf("Multiplicação: %d", resultado);

    return 0;
}