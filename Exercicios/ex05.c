/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
    imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
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
            printf("Nota inválida!\n");

    } while (n1 < 0 || n1 > 10);

    // Tratamento da entrada da nota 2:
    do
    {
        printf("Digite a nota 2 (nota entre 0 e 10): ");
        scanf("%f", &n2);

        if (n2 < 0 || n2 > 10)
            printf("Nota inválida!\n");

    } while (n2 < 0 || n2 > 10);

    // Impressão da média do semestre:
    printf("Média do semestre = %.2f\n", (n1 + n2) / 2);

    return 0;
}