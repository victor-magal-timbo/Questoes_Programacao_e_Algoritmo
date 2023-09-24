#include <stdio.h>
#include <stdlib.h>

13. Jo ̃ao est ́a conduzindo uma pesquisa e precisa de um programa que controle quem pode sair. Ele tem
7 entrevistados com nomes de at ́e 10 letras. O crit ́erio  ́e que o primeiro a entrar deve ser o  ́ultimo a
sair. Portanto, desenvolva um programa que leia os nomes dos 7 entrevistados e imprima a ordem em
que eles devem sair, come ̧cando pelo  ́ultimo nome lido e seguindo em ordem inversa.

void questoesPA(){
    char nomes[7][10];
    int l, ord;
    for(l = 0; l < 7; l++){
        printf("Digite o nome da posicao %d: ", l+1);
        scanf("%10[^\n]", nomes[l]);
        scanf("%c");
    }
    for(l = 6; l >= 0; l--){
        printf("\n%s vai ser o %do a sair.\n ", nomes[l], ord+1);
        ord++;
    }
}
