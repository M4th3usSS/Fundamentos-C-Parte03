/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
    um menu ao usuário da seguinte forma:
    1 - Somar
    2 - Subtrair
    3 - Multiplicar
    4 - Dividir
    0 - Sair

    Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
    escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
    Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
    programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;
    int opcao;

    printf(">>> Seja bem vindo a minha humilde calculadora :)\n\n");

    do
    {
        printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - Sair\n\nDigite sua opção: ");
        scanf("%d", &opcao);

        // Simples tratamento da opção:
        if (opcao == 0)
        {
            system("cls");
            printf(">>> Saindo do programa!");
            break;
        }
        else if (opcao < 1 || opcao > 4)
        {
            system("cls");
            printf(">>> Opção inválida!\n\n");
            continue;
        }

        // Após opção válida, solicita a entrada dos operandos:
        printf("Digite os valores: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        // Impressão do resultado:
        switch (opcao)
        {
        case 1:
            system("cls");
            printf(">>> %.2f + %.2f = %.2f\n\n", n1, n2, n1 + n2);
            break;
        case 2:
            system("cls");
            printf(">>> %.2f - %.2f = %.2f\n\n", n1, n2, n1 - n2);
            break;
        case 3:
            system("cls");
            printf(">>> %.2f x %.2f = %.2f\n\n", n1, n2, n1 * n2);
            break;
        case 4:
            system("cls");
            (n2 == 0) ? printf(">>> Indefinido!\n\n") : printf(">>> %.2f / %.2f = %1.2f\n\n", n1, n2, (float)n1 / 
            (float)n2);
            break;
        }

    } while (opcao != 0);

    return 0;
}
