/*
    Autor: Matheus Sousa
    Objetivo: Resolu��o de exerc�cio:

    Escreva um programa para ler as notas da primeira e da segunda avalia��o de um aluno. Calcule
    e imprima a m�dia semestral. O programa dever� aceitar apenas notas v�lidas no intervalo [0,10]. 
    Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem ?novo 
    calculo? (1-sim 2-nao)?, solicitando ao usu�rio que informe um c�digo (1 ou 2), indicando se ele 
    deseja ou n�o executar o programa novamente. Se for informado o c�digo 1, deve ser repetida a 
    execu��o de todo o programa para permitir um novo c�lculo, se for informado o c�digo 2 o 
    programa deve ser encerrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1 = 0, nota2 = 0;
    int repetir = 0;
    
    do {
        // Repeti��o para cada semesre
        for(int i = 1; i <= 2; i++) {

            // Simples tratamento de entrada da nota 01
            do {

                printf("Digite a nota 1 do semestre %d: ",i);
                scanf("%f", &nota1);

                if (nota1 < 0 || nota1 > 10){
                    printf("Digite uma nota entre 0 e 10!\n");
                    continue;
                } else {
                    break;
                }
            } while (1);

            // Simples tratamento de entrada da nota 02
            do {
                printf("Digite a nota 1 do semestre %d: ",i);
                scanf("%f", &nota2);

                if (nota2 < 0 || nota2 > 10){
                    printf("Digite uma nota entre 0 e 10!\n");
                    continue;
                } else {
                    break;
                }
            } while (1);

            // Imprime m�dia do semestre:
            printf("\n\tNota 01 do semestre %d = %.2f\
                    \n\tNota 02 do semestre %d = %.2f\
                    \n\tM�dia do semestre %d = %.2f\n\n", 
                    i, nota1, i, nota2, i, (nota1 + nota2) / 2);       
        }

        // Simples tratamento da entrada da op��o de repetir
        do {
            printf("Novo calculo? (1 - Sim 2 - N�o): ");
            scanf("%d", &repetir);

            if (repetir == 1){
                system("cls");
                break;
            } else if (repetir == 2) {
                system("cls");
                printf("Saindo...");
                break;
            } else {
                printf("Entrada inv�lida!\n");
            }
        } while (1);
        
    } while(repetir != 2);

    return 0;
}