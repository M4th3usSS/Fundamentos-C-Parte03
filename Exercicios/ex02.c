/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
    de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for
    informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o programa deve ser
    encerrado. Considere que a senha correta é o valor 123456.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int senha, senhaValida = 123456;

    do
    {
        printf("Digite a sua senha: ");
        scanf("%d", &senha);

        senha != senhaValida ? printf("Senha inválida!\n") : printf("Acesso permitido!");

    } while (senha != senhaValida);

    return 0;
}