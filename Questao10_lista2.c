#include <stdio.h>
#include <stdlib.h>

10. Clara  ́e uma estudante que possui uma tarefa tediosa de criar uma matriz 3x3, onde o valor de cada
elemento na linha ”i”e na coluna ”j” ́e igual `a soma de ”i”e ”j”. Ela est ́a sem tempo e pediu que vocˆe
desenvolva um algoritmo que crie e imprima essa matriz automaticamente.

void questoesPA(){
    int mat[3][3];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat[i][j] = i + j;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d ", mat[i][j]);
        }
       printf("\n");
    }
}
