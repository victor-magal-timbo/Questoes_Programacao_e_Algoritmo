#include <stdio.h>
#include <stdlib.h>

4. Um grupo de amigos est ́a debatendo sobre a ordem de altura entre eles. Para resolver essa discuss ̃ao,
eles pediram que vocˆe criasse um algoritmo que fizesse o seguinte:
(a) Leia a altura de 6 amigos;
(b) Imprima a maior e a menor altura, juntamente com a posi ̧c ̃ao (ou  ́ındice) do amigo mais baixo e
do mais alto;
(c) Em seguida, imprima as alturas dos amigos em ordem crescente, do mais baixo para o mais alto.

void questoesPA()
{
    float alt[6], maior, menor, aux;
    int i, cont;
    int id_maior, id_menor;
    aux = 0;
    i = 0;
    while(i < 6){
        printf("ALTURA DO %do AMIGO: ", i+1);
        scanf("%f", &alt[i]);
        if(alt[i] > 0){
            i++;
        }
        system("cls");
    }
    menor = maior = alt[0];
    for(i = 1;i < 6;i++){
        if(alt[i] > maior){
            maior = alt[i];
            id_maior = i;
        }
        else{
            if(alt[i] < menor){
                menor = alt[i];
                id_menor = i;
            }
        }
    }
    printf("A maior altura eh %.2f, indice: %d\nE a menor altura eh %.2f, indice: %d \n", maior, id_maior+1, menor,id_menor+1);
    for(cont = 1; cont < 6; cont++){
        for(i = 0; i < 5; i++){
            if(alt[i] > alt[i+1]){
                aux = alt[i];
                alt[i] = alt[i+1];
                alt[i+1] = aux;
            }
        }
    }
    printf("\nAlturas em ordem crescente:\n");
    for(i = 0; i < 6; i++){
        printf("%.2f  ", alt[i]);
    }
}
