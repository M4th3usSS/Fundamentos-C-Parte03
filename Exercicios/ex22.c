/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 
    centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários 
    para que Zé seja maior que Chico.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int alturaChico = 150, alturaZe = 110, ano = 0;

    while (alturaZe <= alturaChico){
        alturaZe += 3;
        alturaChico +=2;
        ano++;
    }

    printf("Ze irá passar a altura de chico em %d anos", ano);

    return 0;
} 