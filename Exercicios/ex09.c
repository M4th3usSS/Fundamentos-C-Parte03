/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que calcule o valor de A, dado por:
    A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a = 0, n;

    do
    {
        printf("Digite um número inteiro maior que zero: ");
        scanf("%d", &n);

        if (n <= 0)
            printf("Valor inválido!\n");

    } while (n <= 0);

    for (int i = 0; i <= n; i++)
        a += i;

    printf("A = %d", a);

    return 0;
}