/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Escreva um programa que gere a saída abaixo.
    Restrições:
    - A instrução printf pode ser utilizada no máximo 2 vezes;
    - O \n para saltar linha pode ser utilizado no máximo 2 vezes.
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
