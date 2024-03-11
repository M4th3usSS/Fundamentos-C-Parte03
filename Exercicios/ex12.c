/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Para uma turma de 45 alunos, construa um algoritmo que determine:
    a) A idade média dos alunos com menos de 1,70m de altura;
    b) A altura média dos alunos com mais de 20 anos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float idade, altura, somaIdadeAlunosMenoresQue170 = 0, somaAlturaAlunosIdadeMaiorQue20 = 0;
    int qtdAlunosComAlturaMenorQue170 = 0, qtdAlumosComIdadeMaiorQue20 = 0;

    for (int i = 1; i <= 4; i++)
    {
        printf("Digite a idade e a altura do aluno %2d: ", i);
        scanf("%f%f", &idade, &altura);

        // Acumula e quantifica a idade dos alunos menores que 1.70m
        if (altura < 1.70)
        {
            somaIdadeAlunosMenoresQue170 += idade;
            qtdAlunosComAlturaMenorQue170++;
        }

        // Acumula e quantifica a altura dos alunos com idade superior a 20 anos
        if (idade > 20)
        {
            somaAlturaAlunosIdadeMaiorQue20 += altura;
            qtdAlumosComIdadeMaiorQue20++;
        }
    }

    // Imprime a idade média dos alunos com menos de 1,70m de altura.
    if (qtdAlunosComAlturaMenorQue170 != 0)
        printf("Idade média dos alunos com menos de 1,70m de altura: %.2f\n",
               somaIdadeAlunosMenoresQue170 / qtdAlunosComAlturaMenorQue170);
    else
        printf("Não há alunos com altura menor que 1,70 metros\n");

    // Imprime a altura média dos alunos com mais de 20 anos.
    if (qtdAlumosComIdadeMaiorQue20)
        printf("Altura média dos alunos com mais de 20 anos: %.2f",
               somaAlturaAlunosIdadeMaiorQue20 / qtdAlumosComIdadeMaiorQue20);
    else
        printf("Não há alunos que idade superior a 20 anos!");

    return 0;
}