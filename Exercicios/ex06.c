/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <= 9999; i += 7)
    {
        printf("%4d  ", i);
    }
    return 0;
}