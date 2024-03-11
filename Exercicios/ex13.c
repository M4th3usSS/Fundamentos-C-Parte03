/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Fa�a um programa que pe�a ao usu�rio um n�mero inteiro maior que 2 e diga se o n�mero
    informado � primo ou n�o.
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
        printf("Digite um n�mero inteiro maior que 2: ");
        scanf("%d", &n);

        if (n <= 2)
            printf("N�mero inv�lido!\n");

    } while (n <= 2);

    for (int i = 2; i < (n / 2); i++)
    {
        if (n % i == 0)
        {
            aux = 1;
            break;
        }
    }

    (aux == 0) ? printf("O n�mero � primo!") : printf("O n�mero N�O � primo!");

    return 0;
}