#include <stdio.h>
#include <stdlib.h>

3. Roberto  ́e o dono de uma empresa com 20 filiais e precisa de ajuda para criar um algoritmo. Ele possui
   um vetor com 20 valores reais, onde valores positivos representam filiais lucrativas e valores negativos
   representam filiais que dao prejuızo. Voce deve desenvolver um algoritmo que fa ̧ca o seguinte:
    (a) Imprima o  ́ındice no vetor de todas as empresas que dao lucro;
    (b) Calcule a media dos lucros, desconsiderando todas as filiais que dao prejuızo.

void questoesPA()
{
    float fl[20], m_lucro, s_lucro;
    int i = 0, cont = 0;
    while(i<20)
    {
        printf("Digite o valor da filial %d: ", i+1);
        scanf("%f", &fl[i]);
        if(fl[i] > 0)
        {
            s_lucro += fl[i];
            cont++;
        }
        i++;
        system("cls");
    }
    m_lucro = s_lucro/cont;
    for(i = 0; i < 20; i++){
        if(fl[i] > 0){
            printf("A filial %d deu lucro.\n", i+1);
        }
    }
    printf("A media dos lucros eh: %.2f \n", m_lucro);
}
