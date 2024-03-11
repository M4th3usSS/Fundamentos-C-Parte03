/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
    um menu ao usu�rio da seguinte forma:
    1 - Somar
    2 - Subtrair
    3 - Multiplicar
    4 - Dividir
    0 - Sair

    Uma estrutura do tipo switch deve ser utilizada para realizar cada opera��o em um case. Ap�s a
    escolha da opera��o, dois valores devem ser pedidos ao usu�rio para realizar a opera��o escolhida.
    Se a opera��o escolhida for a 4 o dividendo n�o pode ser zero, um novo valor deve ser solicitado. O
    programa deve funcionar at� que o usu�rio escolha a op��o 0 (op��o de sa�da).

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
        printf("1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n0 - Sair\n\nDigite sua op��o: ");
        scanf("%d", &opcao);

        // Simples tratamento da op��o:
        if (opcao == 0)
        {
            system("cls");
            printf(">>> Saindo do programa!");
            break;
        }
        else if (opcao < 1 || opcao > 4)
        {
            system("cls");
            printf(">>> Op��o inv�lida!\n\n");
            continue;
        }

        // Ap�s op��o v�lida, solicita a entrada dos operandos:
        printf("Digite os valores: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        // Impress�o do resultado:
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
