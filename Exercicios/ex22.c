/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 
    cent�metros por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios 
    para que Z� seja maior que Chico.
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

    printf("Ze ir� passar a altura de chico em %d anos", ano);

    return 0;
} 