/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Escreva um programa que gere a sa�da abaixo (10 linhas, 20 * por linha).
    Restri��es:
    - A instru��o printf pode ser utilizada no m�ximo 2 vezes;
    - O \n para saltar linha pode ser utilizado no m�ximo 1 vez.

    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}