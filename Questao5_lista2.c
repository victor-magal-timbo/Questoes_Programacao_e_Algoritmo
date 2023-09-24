#include <stdio.h>
#include <stdlib.h>

5. Roberto precisa adicionar mais uma funcionalidade ao seu programa. Ele possui outra empresa com 10
filiais e necessita de um algoritmo que, tendo um vetor com os valores reais representando lucro (valores
positivos) ou preju ́ızo (valores negativos) das 10 filiais, informe quantas delas est ̃ao dando preju ́ızo.

void questoesPA()
{
    float fl[10];
    int i = 0, cont = 0;
    for(i=0;i<10;i++)
    {
        printf("Digite o valor da filial %d: ", i+1);
        scanf("%f", &fl[i]);
        if(fl[i] < 0)
        {
            cont++;
        }
        system("cls");
    }
    printf("\n%d filiais estão dando prejuizo.\n", cont);
}
