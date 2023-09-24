#include <stdio.h>
#include <stdlib.h>

9. O IBGE (Instituto Brasileiro de Geografia e Estat ́ıstica) precisa de um novo algoritmo. Eles tˆem dados
sobre a idade das 3 cidades mais velhas de 3 estados diferentes, organizados em uma matriz 3x3. Agora,
eles solicitam que vocˆe desenvolva um algoritmo que realize as seguintes tarefas:
(a) Leia a matriz de idade das cidades;
(b) Solicite ao usu ́ario que informe o  ́ındice de uma linha da matriz;
(c) Calcule a m ́edia de idade das 3 cidades daquele estado correspondente `a linha escolhida.

void questoesPA(){
    int mat[3][3];
    int i, j, soma;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite a idade da posicao [%d][%d] da matriz: ", i+1, j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Digite a linha(ESTADO) que vc quer ver a media: ");
    scanf("%d",&i);
    i--;
    for(j=0;j<3;j++){
        soma += mat[i][j];
    }

    printf("A media das idades selecionadas: %.2f", soma/3.0);
}
