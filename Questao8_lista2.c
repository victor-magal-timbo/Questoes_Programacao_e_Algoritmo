#include <stdio.h>
#include <stdlib.h>

8. Gabriel estava desenvolvendo um minigame, mas encontrou dificuldades no seu algoritmo. A ideia do
minigame  ́e a seguinte: haveria uma matriz 3x3 onde cada elemento seria atribuıdo um valor inteiro.
Se o valor fosse par, ele deveria ser substitu ́ıdo por 1; se fosse  ́ımpar, por -1. Ap ́os essa substitui ̧c ̃ao, o
programa deveria exibir a nova matriz atualizada. Gabriel solicitou sua ajuda para realizar essa tarefa.

void questoesPA(){
    int mat[3][3];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemente [%d][%d] da matriz: ", i+1, j+1);
            scanf("%d",&mat[i][j]);
            if(mat[i][j]%2 == 0){
                mat[i][j] = 1;
            }else{
                mat[i][j] = -1;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d ", mat[i][j]);
        }
        printf("\n");

    }
}
