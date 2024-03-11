/*
    Autor: Matheus Sousa
    Objetivo: Resolução de exercício:

    Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
    e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10]. 
    Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem ?novo 
    calculo? (1-sim 2-nao)?, solicitando ao usuário que informe um código (1 ou 2), indicando se ele 
    deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a 
    execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o 
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
        // Repetição para cada semesre
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

            // Imprime média do semestre:
            printf("\n\tNota 01 do semestre %d = %.2f\
                    \n\tNota 02 do semestre %d = %.2f\
                    \n\tMédia do semestre %d = %.2f\n\n", 
                    i, nota1, i, nota2, i, (nota1 + nota2) / 2);       
        }

        // Simples tratamento da entrada da opção de repetir
        do {
            printf("Novo calculo? (1 - Sim 2 - Não): ");
            scanf("%d", &repetir);

            if (repetir == 1){
                system("cls");
                break;
            } else if (repetir == 2) {
                system("cls");
                printf("Saindo...");
                break;
            } else {
                printf("Entrada inválida!\n");
            }
        } while (1);
        
    } while(repetir != 2);

    return 0;
}