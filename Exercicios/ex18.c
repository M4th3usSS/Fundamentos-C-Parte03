/*
    Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, 
    sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que 
    informe:
    a) a média de salário do grupo;
    b) a maior e a menor idade do grupo;
    c) a quantidade de mulheres com salário até R$2000,00.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int nPessoas, idade, maiorIdade, menorIdade, qtdMulhesSalarioAte2000 = 0;
    char sexo;
    float salario, somatoriaSalario = 0;    
        
    printf("Digite o número de pessoas: ");
    scanf("%d", &nPessoas);

    for(int i = 0; i < nPessoas; i++) {
        printf("Digite sua idade, sexo(M/F) e salário: ");
        scanf("%d %c%f", &idade, &sexo, &salario );

        somatoriaSalario += salario;

        if (i == 0) {
            maiorIdade = idade;
            menorIdade = idade;
        }
        if (idade > maiorIdade)
            maiorIdade = idade;
        if (idade < menorIdade)
            menorIdade = idade;

        if (sexo == 'F' && salario < 2000.00)
            qtdMulhesSalarioAte2000++;        
    }

    printf("Média de salário do grupo = %.2f\
            \nMaior idade do grupo = %d\
            \nMenor idade do grupo = %d\
            \nQuantidade de mulheres com salário até R$2000,00 = %d",
            somatoriaSalario / nPessoas, maiorIdade, menorIdade, qtdMulhesSalarioAte2000);

    return 0;
}