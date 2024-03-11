/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Fa�a um programa que leia as notas referentes �s duas avalia��es de um aluno. Calcule e
    imprima a m�dia semestral. Fa�a com que o programa s� aceite notas v�lidas (uma nota v�lida deve
    pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    // Tratamento da entrada da nota 1:
    do
    {
        printf("Digite a nota 1 (nota entre 0 e 10): ");
        scanf("%f", &n1);

        if (n1 < 0 || n1 > 10)
            printf("Nota inv�lida!\n");

    } while (n1 < 0 || n1 > 10);

    // Tratamento da entrada da nota 2:
    do
    {
        printf("Digite a nota 2 (nota entre 0 e 10): ");
        scanf("%f", &n2);

        if (n2 < 0 || n2 > 10)
            printf("Nota inv�lida!\n");

    } while (n2 < 0 || n2 > 10);

    // Impress�o da m�dia do semestre:
    printf("M�dia do semestre = %.2f\n", (n1 + n2) / 2);

    return 0;
}