/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
    informado é primo ou não.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, aux = 0;

    do
    {
        printf("Digite um número inteiro maior que 2: ");
        scanf("%d", &n);

        if (n <= 2)
            printf("Número inválido!\n");

    } while (n <= 2);

    for (int i = 2; i < (n / 2); i++)
    {
        if (n % i == 0)
        {
            aux = 1;
            break;
        }
    }

    (aux == 0) ? printf("O número é primo!") : printf("O número NÃO é primo!");

    return 0;
}