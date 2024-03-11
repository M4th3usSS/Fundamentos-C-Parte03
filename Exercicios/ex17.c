/*
    Fa�a um programa que pe�a n�meros ao usu�rio. Quando o usu�rio digitar o n�mero 0 (zero) o 
    programa deve imprimir na tela quantos n�meros positivos e negativos foram digitados.
    Exemplo:
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, qtdPositivos = 0, qtdNegativos = 0;

    do {
        printf("Digite um valor: ");
        scanf("%d", &n);

        if (n < 0)
            qtdNegativos++;
        if (n >0)
            qtdPositivos++;
    
    } while (n != 0);

    printf("Positivos = %d\nNegativos = %d", qtdPositivos, qtdNegativos);

    return 0;
}