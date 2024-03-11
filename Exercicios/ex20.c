/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o. O 
    monge, necessitando de alimentos, indagou � rainha sobre o pagamento, se poderia ser feito com 
    gr�os de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o 
    primeiro quadro deveria conter apenas um gr�o e os quadros subsequentes, o dobro do quadro 
    anterior. Crie um programa para calcular o total de gr�os de trigo que o monge recebeu.7
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    unsigned long long int quadro = 1, grao = 0;

    for(int i = 0; i <= 64; i++) {
        grao += quadro;
        quadro *= 2;
    }

    printf("Valor total de gr�os = %llu", grao);

    return 0;
}