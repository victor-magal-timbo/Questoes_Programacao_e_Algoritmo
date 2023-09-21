#include <stdio.h>
#include <stdlib.h>

1.  Jose esta enfrentando dificuldades em uma outra funcionalidade de seu sistema escolar. Ele precisa
    calcular a ”media funcional”da turma, composta por 10 alunos. A media funcional  e a media das notas
    de todos os alunos que nao foram reprovados, ou seja, os alunos que obtiveram nota maior que 4. Para
    isso, considere as notas dos 10 alunos da turma como um vetor de 10 valores reais e desenvolva um
    algoritmo que resolva esse problema.

void questoesPA()
{
    float notas[10], soma;
    int i = 0, cont = 0;

    while(i<10)
    {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        if(notas[i] <= 10 && notas[i] >= 0)
        {
            if(notas[i] > 4){
                soma += notas[i];
                cont++;
            }
            i++;
        }
        system("cls");
    }
    printf("MEDIA FUNCIONAL: %.2f", soma/cont);
}
