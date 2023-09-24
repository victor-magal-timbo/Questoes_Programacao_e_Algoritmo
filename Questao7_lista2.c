#include <stdio.h>
#include <stdlib.h>

7. Por fim, Roberto deseja que o programa, ao ler o faturamento de 8 filiais, realize as seguintes tarefas:
(a) Armazene os faturamentos em um  ́unico vetor;
(b) Calcule a soma de todos os elementos desse vetor;
(c) Conte quantos deles representam lucro (valores positivos).

void QuestoesPA(){
    float fl[8];
    float soma;
    int i = 0, cont = 0;
    for(i=0;i<8;i++)
    {
        printf("Digite o valor da filial %d: ", i+1);
        scanf("%f", &fl[i]);
        if(fl[i] > 0)
        {
            cont++;
        }
        soma += fl[i];
        system("cls");
    }
    printf("\n%d filiais estao dando lucro.\n%.2f\n", cont, soma);
}
