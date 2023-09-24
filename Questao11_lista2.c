#include <stdio.h>
#include <stdlib.h>

11. Clara est ́a com outra tarefa, que  ́e digitar os n ́umeros de 1 a 25 em uma matriz 5x5 da seguinte forma:
      1 2 3 4 5
      6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25
Ela pediu um algoritmo que fa ̧ca o seguinte:
(a) Gere e imprima essa matriz automaticamente;
(b) Imprima a soma dos elementos de cada uma das 5 linhas;
(c) Imprima um vetor com os elementos da diagonal principal (onde i  ́e igual a j).

void questoesPA(){
    int num[5][5];
    int i, j, soma;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            num[i][j] = num[i][j-1] + 1;
            printf("%2d ", num[i][j]);
        }
        printf("\n");
    }
    printf("\nDiagonal: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i == j){
                printf("%2d ", num[i][j]);
            }
        }
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            soma += num[i][j];
        }
        printf("\nSoma da linha %d: %2d ", i+1, soma);
        printf("\n");
    }
}
