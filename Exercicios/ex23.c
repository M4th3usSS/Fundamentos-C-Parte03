/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Escreva um programa que gere a sa�da abaixo.
    Restri��es:
    - A instru��o printf pode ser utilizada no m�ximo 2 vezes;
    - O \n para saltar linha pode ser utilizado no m�ximo 2 vezes.
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguesed");

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
