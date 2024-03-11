#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aula_64() {

    /*
        Estruturas de repeti��o - for (PARA)
        Para (condi��o de in�cio; condi��o de parada; incremento)
        Assim como vimos nas estruturas de decis�o, chaves n�o s�o obrigat�rias para uma �nica instru��o,
        por�m no caso de um bloco de intru��es, chaves s�o obrigat�rias para delimitar o bloco de c�digo;
    */

    // Uma instru��o - chaves omitidas
    for(int i = 0; i < 10; i++)
        printf("%d ", i);

    printf("\n");

    // Bloco de instu��es - o uso de chaves � obrigat�rio
    for(int i = 0; i < 10; i++) {
        printf("%d", i);
        printf(" ");
    }
}

void aula_65() {

    /*
        Estrutra de repeti��o - for DECRESCENTE
    */

    // Usma instru��o - chaves omitidas
    for(int i = 10; i > 0; i--)
        printf("%d ", i);

    printf("\n");

    // Bloco de instru��es - o uso de chaves � obrigat�rio
    for(int i = 10; i > 0; i--) {
        printf("%d", i);
        printf(" ");
    }

}

void aula_66() {

    /*
        Estrutura de repeti��o - INCREMENTO DIFERENTE DE 1
    */

    // Imprimindo impares de 1 at� 100:
    for(int i = 1; i < 100; i += 2)
        printf("%d\n", i);

}

void aula_67() {

    /*
        Estrutura de repeti��o - while (ENQUANTO)
        Essa instru��o � usada quando n�o se sabe previamente a quantidade de vezes que o loop ir� executar
    */

    int i = 0;

    while (i < 10)
        printf("%d ", i++);

}

void aula_68() {

    /*
        Estrutura de repeti��o - do while (FA�A ENQUANTO)
        Essa instru��o � usada quando n�o se sabe previamente a quantidade de vezes que o loop ir� executar, e
        obrigatoriamente o c�digo de loop deve ser executado pelo menos uma vez.
    */

    int valor;

    do {
        printf("Digite um valor maior que zero: ");
        scanf("%d", &valor);
    } while(valor <= 0);

    printf("Valor: %d\nFim do programa!\n\n", valor);

}

void aula_69() {

    /*
        Diferen�a entre: for, while e do while:

        for - Quando se sabe previamente a quantidade de vezes que o loop deve executar;

        while - Quando n�o se sabe previamente a quantidade de vezes que o loop deve executar;

        do while - Quando n�o se sabe previamente a quantidade de vezes que o loop deve executar, mas deve ser
                   executado pelo menos uma vez;


        A escolha da estrutura de repeti��o ideal vai depender das propriedades do problema em quest�o, veja alguns
        exemplos:
    */

    // Programa para imprimir n�meros de 1 a 10
    // > Sabemos a quantidade de vezes que o loop ir� executar:
    for(int i = 1; i <= 10; i++)
        printf("%d ", i);

    printf("\nFim do programa!\n\n");

    // Programa que solicita a reentrada de um dado at� satisfazer uma condi��o;
    // > N�o sabemos a quantidade de vezes que o loop ir� executar:
    int valor_01;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor_01);

    while (valor_01 <= 0) {
        printf("Valor inv�lido -> Digite um valor maior que zero: ");
        scanf("%d", &valor_01);
    }

    printf("Fim do programa!\n\n");

    // Somat�rio at� ser digitado o valor 0 
    // > N�o sabemos a quantidade de vezes que o loop ir� executar e podemos considerar que ele deve-ser executado ao 
    //   menos uma
    int soma = 0, valor_02;
    
    do{

        printf("Digite um valor para somar [0 - Encerrar]: ");
        scanf("%d", &valor_02);
        soma += valor_02;

    } while(valor_02 != 0);

    printf("Somat�rio: %d", soma);
}

int main() {
    printf(setlocale(LC_ALL, "Portuguese"));
    printf("\nOl� mundo!\n\n");

    // Insira aqui a fun��o da aula
    aula_69();

    return 0;
}