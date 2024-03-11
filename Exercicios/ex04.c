/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
    Restrição:
    - O bloco de repetição deve executar no máximo 500 vezes
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

    printf("Soma dos ímpares de 1 até 1000 = %d", soma);

    return 0;
}