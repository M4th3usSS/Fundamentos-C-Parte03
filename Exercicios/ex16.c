/*
    Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
    números inteiros entre 1 e 10.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5, n6 = 6, n7 = 7, n8 = 8, n9 = 9, n10 = 10, i = 2, mmc = 1;

    while (n1 != 1 || n2 != 1 || n3 != 1 || n4 != 1 || n5 != 1 || n6 != 1 || n7 != 1 || n8 != 1 || n9 != 1 || n10 != 1)
    {

        int dividiu = 0;

        if (n1 % i == 0)
        {
            n1 /= i;
            dividiu = 1;
        }
        if (n2 % i == 0)
        {
            n2 /= i;
            dividiu = 1;
        }
        if (n3 % i == 0)
        {
            n3 /= i;
            dividiu = 1;
        }
        if (n4 % i == 0)
        {
            n4 /= i;
            dividiu = 1;
        }
        if (n5 % i == 0)
        {
            n5 /= i;
            dividiu = 1;
        }
        if (n6 % i == 0)
        {
            n6 /= i;
            dividiu = 1;
        }
        if (n7 % i == 0)
        {
            n7 /= i;
            dividiu = 1;
        }
        if (n8 % i == 0)
        {
            n8 /= i;
            dividiu = 1;
        }
        if (n9 % i == 0)
        {
            n9 /= i;
            dividiu = 1;
        }
        if (n10 % i == 0)
        {
            n10 /= i;
            dividiu = 1;
        }

        if (dividiu == 1)
        {
            mmc *= i;
        }
        else
        {
            i++;
        }
    }

    printf("MMC = %d", mmc);

    return 0;
}