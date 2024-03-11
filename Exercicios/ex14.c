/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a 
    quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a 
    média dos salários informados, o salário mais alto e o salário mais baixo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, somaSalarios, maiorSalario, menorSalario;
    int qtdFuncionarios;

    do{
        printf("Digite a quantidade de funcionários da empresa: ");
        scanf("%d", &qtdFuncionarios);

        if (qtdFuncionarios <= 0)
            printf("Digite um número positivo maior que zero!\n");

    } while (qtdFuncionarios <= 0);

    for (int i = 1; i <= qtdFuncionarios; i++) {
        
        printf("%d salário: R$", i);
        scanf("%f", &salario);
        somaSalarios += salario;

        if (i == 1) {
            maiorSalario = salario;
            menorSalario = salario;
        }

        if (salario > maiorSalario)
            maiorSalario = salario;
        
        if (salario < menorSalario)
            menorSalario = salario;
        
    }

    printf("Média de salários = R$%.2f\nMaior salário = R$%.2f\nMenor salário = R$%.2f", 
    somaSalarios / qtdFuncionarios, maiorSalario, menorSalario);
        
    return 0;
}