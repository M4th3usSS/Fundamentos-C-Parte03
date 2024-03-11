#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aula_64() {

    /*
        Estruturas de repetição - for (PARA)
        Para (condição de início; condição de parada; incremento)
        Assim como vimos nas estruturas de decisão, chaves não são obrigatórias para uma única instrução,
        porém no caso de um bloco de intruções, chaves são obrigatórias para delimitar o bloco de código;
    */

    // Uma instrução - chaves omitidas
    for(int i = 0; i < 10; i++)
        printf("%d ", i);

    printf("\n");

    // Bloco de instuções - o uso de chaves é obrigatório
    for(int i = 0; i < 10; i++) {
        printf("%d", i);
        printf(" ");
    }
}

void aula_65() {

    /*
        Estrutra de repetição - for DECRESCENTE
    */

    // Usma instrução - chaves omitidas
    for(int i = 10; i > 0; i--)
        printf("%d ", i);

    printf("\n");

    // Bloco de instruções - o uso de chaves é obrigatório
    for(int i = 10; i > 0; i--) {
        printf("%d", i);
        printf(" ");
    }

}

void aula_66() {

    /*
        Estrutura de repetição - INCREMENTO DIFERENTE DE 1
    */

    // Imprimindo impares de 1 até 100:
    for(int i = 1; i < 100; i += 2)
        printf("%d\n", i);

}

void aula_67() {

    /*
        Estrutura de repetição - while (ENQUANTO)
        Essa instrução é usada quando não se sabe previamente a quantidade de vezes que o loop irá executar
    */

    int i = 0;

    while (i < 10)
        printf("%d ", i++);

}

void aula_68() {

    /*
        Estrutura de repetição - do while (FAÇA ENQUANTO)
        Essa instrução é usada quando não se sabe previamente a quantidade de vezes que o loop irá executar, e
        obrigatoriamente o código de loop deve ser executado pelo menos uma vez.
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
        Diferença entre: for, while e do while:

        for - Quando se sabe previamente a quantidade de vezes que o loop deve executar;

        while - Quando não se sabe previamente a quantidade de vezes que o loop deve executar;

        do while - Quando não se sabe previamente a quantidade de vezes que o loop deve executar, mas deve ser
                   executado pelo menos uma vez;


        A escolha da estrutura de repetição ideal vai depender das propriedades do problema em questão, veja alguns
        exemplos:
    */

    // Programa para imprimir números de 1 a 10
    // > Sabemos a quantidade de vezes que o loop irá executar:
    for(int i = 1; i <= 10; i++)
        printf("%d ", i);

    printf("\nFim do programa!\n\n");

    // Programa que solicita a reentrada de um dado até satisfazer uma condição;
    // > Não sabemos a quantidade de vezes que o loop irá executar:
    int valor_01;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor_01);

    while (valor_01 <= 0) {
        printf("Valor inválido -> Digite um valor maior que zero: ");
        scanf("%d", &valor_01);
    }

    printf("Fim do programa!\n\n");

    // Somatório até ser digitado o valor 0 
    // > Não sabemos a quantidade de vezes que o loop irá executar e podemos considerar que ele deve-ser executado ao 
    //   menos uma
    int soma = 0, valor_02;
    
    do{

        printf("Digite um valor para somar [0 - Encerrar]: ");
        scanf("%d", &valor_02);
        soma += valor_02;

    } while(valor_02 != 0);

    printf("Somatório: %d", soma);
}

int main() {
    printf(setlocale(LC_ALL, "Portuguese"));
    printf("\nOlá mundo!\n\n");

    // Insira aqui a função da aula
    aula_69();

    return 0;
}