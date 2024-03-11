/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
    Restrições:
    - A instrução printf pode ser utilizada no máximo 2 vezes;
    - O \n para saltar linha pode ser utilizado no máximo 1 vez.

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