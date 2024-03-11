/*
    Foi feita uma pesquisa entre os habitantes de uma regi�o e foram coletados os dados de idade, 
    sexo (M/F) e sal�rio de X pessoas (x deve ser informado pelo usu�rio). Fa�a um algoritmo que 
    informe:
    a) a m�dia de sal�rio do grupo;
    b) a maior e a menor idade do grupo;
    c) a quantidade de mulheres com sal�rio at� R$2000,00.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int nPessoas, idade, maiorIdade, menorIdade, qtdMulhesSalarioAte2000 = 0;
    char sexo;
    float salario, somatoriaSalario = 0;    
        
    printf("Digite o n�mero de pessoas: ");
    scanf("%d", &nPessoas);

    for(int i = 0; i < nPessoas; i++) {
        printf("Digite sua idade, sexo(M/F) e sal�rio: ");
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

    printf("M�dia de sal�rio do grupo = %.2f\
            \nMaior idade do grupo = %d\
            \nMenor idade do grupo = %d\
            \nQuantidade de mulheres com sal�rio at� R$2000,00 = %d",
            somatoriaSalario / nPessoas, maiorIdade, menorIdade, qtdMulhesSalarioAte2000);

    return 0;
}