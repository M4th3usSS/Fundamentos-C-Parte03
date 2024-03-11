/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y,
    passando para a pr�xima linha a cada X n�meros.
    Exemplo de entrada:
    3 99
    Exemplo de sa�da:
    1 2 3
    4 5 6
    7 8 9
    10 11 12
    ...
    97 98 99
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int linhas = 0, limite = 0, cont = 0;

    do {
        printf("Digite a quantidade de linhas e o limite (valores maior que zero): ");
        scanf("%d%d", &linhas, &limite);

        if (linhas <= 0 || limite <= 0) {
            printf("Ambos os valores deve ser um n�mero maior que 0!\n");
            continue;
        } else {
            printf("Valores v�lidos!\n");
            break;
        }

    } while(1);
    
    for(int i = 1; i <= limite; i += 1) {
        printf("%d ", i);
        cont++;
        if (cont % linhas == 0)
            printf("\n");
    }
    return 0;
}
