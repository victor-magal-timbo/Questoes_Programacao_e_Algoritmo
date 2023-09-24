#include <stdio.h>
#include <stdlib.h>

12. Clara mais uma vez pediu ajuda com uma tarefa de casa. Ela precisa de um programa que realize a
seguinte tarefa:
(a) Dadas duas matrizes A e B, ambas 2x3, o programa deve calcular a soma das duas matrizes e
criar uma matriz C com os resultados;
(b) Em seguida, o programa deve imprimir as matrizes A, B e C.

void questoesPA(){
    int a[2][3], b[2][3], c[2][3];
    int i, j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemente [%d][%d] da matriz A: ", i+1, j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemente [%d][%d] da matriz B: ", i+1, j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMATRIZ A:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%2d ", a[i][j]);
        }
       printf("\n");
    }
    printf("\nMATRIZ B:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%2d ", b[i][j]);
        }
       printf("\n");
    }
    printf("\nMATRIZ C:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%2d ", c[i][j]);
        }
       printf("\n");
    }
}
