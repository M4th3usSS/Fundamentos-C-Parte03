/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Fa�a um programa que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a 
    quantidade de funcion�rios e o sal�rio de cada funcion�rio. Ao final, o programa deve imprimir a 
    m�dia dos sal�rios informados, o sal�rio mais alto e o sal�rio mais baixo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, somaSalarios, maiorSalario, menorSalario;
    int qtdFuncionarios;

    do{
        printf("Digite a quantidade de funcion�rios da empresa: ");
        scanf("%d", &qtdFuncionarios);

        if (qtdFuncionarios <= 0)
            printf("Digite um n�mero positivo maior que zero!\n");

    } while (qtdFuncionarios <= 0);

    for (int i = 1; i <= qtdFuncionarios; i++) {
        
        printf("%d sal�rio: R$", i);
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

    printf("M�dia de sal�rios = R$%.2f\nMaior sal�rio = R$%.2f\nMenor sal�rio = R$%.2f", 
    somaSalarios / qtdFuncionarios, maiorSalario, menorSalario);
        
    return 0;
}