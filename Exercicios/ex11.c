/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
    massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
    se torne menor que 0,05 gramas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float massaInicial;
    int auxTempo = 0, tempoDaMeiaVida = 50;

    printf("Digite a massa inicial do material em gramas: ");
    scanf("%f", &massaInicial);

    while (massaInicial >= 0.05)    
    {
        massaInicial -= massaInicial / 2;
        auxTempo++;
    }

    printf("Tempo = %d segundos", auxTempo * tempoDaMeiaVida);

    return 0;
}