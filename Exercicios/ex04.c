/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Fa�a um programa que some os n�meros �mpares entre 1 e 1000 e imprima a resposta.
    Restri��o:
    - O bloco de repeti��o deve executar no m�ximo 500 vezes
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;

    for (int i = 1; i < 1000; i += 2)
        soma += i;

    printf("Soma dos �mpares de 1 at� 1000 = %d", soma);

    return 0;
}