/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O 
    monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com 
    grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o 
    primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro 
    anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.7
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

    printf("Valor total de grãos = %llu", grao);

    return 0;
}