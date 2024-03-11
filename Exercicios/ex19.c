/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de 
    pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo 
    será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem 
    escrever mensagem alguma).
    Exemplo de entrada:
    2 2
    3 -2
    -8 -1
    -7 1
    0 2
    Exemplo de saída:
    primeiro
    quarto
    terceiro
    segundo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int x, y;

    do {
        printf("Digite as coordenadas x e y: ");
        scanf("%d%d", &x, &y);

        if(x > 0 && y > 0)
            printf("Primeiro quadrante!\n");
        else if (x < 0 && y > 0)
            printf("Segundo quadrante!\n");
        else if (x < 0 && y < 0)
            printf("Terceiro quadrante!\n");
        else if (x > 0 && y < 0)
            printf("Quarto quadrante!\n");

    } while (x != 0 && y != 0);

    return 0;
}