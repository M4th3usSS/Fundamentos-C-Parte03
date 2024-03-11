/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Escreva um programa que repita a leitura de uma senha at� que ela seja v�lida. Para cada leitura
    de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for
    informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o programa deve ser
    encerrado. Considere que a senha correta � o valor 123456.
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

        senha != senhaValida ? printf("Senha inv�lida!\n") : printf("Acesso permitido!");

    } while (senha != senhaValida);

    return 0;
}