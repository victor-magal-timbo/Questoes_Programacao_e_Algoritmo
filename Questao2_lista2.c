#include <stdio.h>
#include <stdlib.h>

2.  Jose precisa de ajuda em outra funcionalidade: o c ́alculo da ”m ́edia perfeita”da turma. A m ́edia
    perfeita  ́e a m ́edia aritm ́etica simples das notas da turma, mas caso o resultado final seja maior que 8,
    ela ser ́a igual a 10. Para isso, considere as notas dos 15 alunos da turma como um vetor de 15 valores
    reais e desenvolva um algoritmo que resolva esse problema.

void questoesPA()
{  
    float notas[15], media, soma;
    int i = 0;
    while(i < 15){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        if(notas[i] <= 10 && notas[i] >= 0){
            soma += notas[i];
            i++;
        }
        system("cls");
    }
    media = soma/15.0;
    if(media > 8){
        media = 10;
        printf("MEDIA PERFEITA: %.2f\n", media);
    }
    else{
        printf("MEDIA PERFEITA: %.2f\n", media);
    }
}
