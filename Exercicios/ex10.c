/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
    centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
    dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valorDia = 1, centavos = 0;

    for (int i = 1; i <= 30; i++)
    {
        centavos += valorDia;
        valorDia *= 2;
    }

    printf("Valor final = %d centavos ou R$%.2f", centavos, (float)centavos / 100.00);

    return 0;
}
