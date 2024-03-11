/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N,
    inclusive N, se for o caso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    do
    {
        printf("Digite um valor inteiro maior que 1: ");
        scanf("%d", &n);
    } while (n <= 1);

    printf("Quadrado dos valores pares de 1 at� %d:\n", n);

    for (int i = 2; i <= n; i += 2)
        printf("%d ", i * i);

    return 0;
}
