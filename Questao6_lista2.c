#include <stdio.h>
#include <stdlib.h>

6. Roberto deseja adicionar mais uma funcionalidade ao seu programa. Ele possui uma lista de 10 IDs
de filiais. O algoritmo deve fazer o seguinte:
(a) Solicitar ao usu ́ario que insira um ID espec ́ıfico;
(b) Verificar se o ID inserido est ́a presente na lista de IDs das filiais;
(c) Se o ID estiver na lista, o programa deve informar que o ID pertence a uma filial da lista;
(d) Caso contr ́ario, o programa deve informar que o ID digitado n ̃ao corresponde a nenhuma filial da lista.

void questoesPA(){
  int id[] = {1,2,3,4,5,6,7,8,9,10};
    int ent, i, id_v = 0;
    printf("Digite o ID da filial: ");
    scanf("%d", &ent);
    for(i=0;i<10;i++){
        if(ent == id[i]){
            ent = id[i];
            id_v = ent;
            printf("FILIAL: %d\n", ent);
            break;
        }
    }
    if(id_v == 0){
        printf("ID nao corresponde as filiais da lista\n");
    }
}
