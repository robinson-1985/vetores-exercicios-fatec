/* 6) Neste exercício temos dois vetores com 5 posições (0 a 4). Em cada 
vetor entraremos com cinco números. Mostrar os números e depois somar 
números que pertençam a mesma posição ou seja: [0] + [0], [1] + [1],... */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int vet1[5], vet2[5], num, cont=0, x;

void entraDados(){
    printf("\n");
    printf("\nVetor 1");
    for(x=0;x<=4;x++){
        cont=0+x;
        printf("\t[%d] Digite um valor: ",cont);
        scanf("%d",&num);
        vet1[x]=num;
    }

    printf("\n\n");
    printf("\nVetor 2");

    for(x=0;x<=4;x++){
        cont=0+x;
        printf("\t[%d] Digite um valor: ",cont);
        scanf("%d",&num);
        vet2[x]=num;
    }

    printf("\n\n");
}

void somaPosicao(){
    
    printf("\nVetor 1");
    for(x=0;x<=4;x++){
        printf("\t%d ",vet1[x]);
        printf("\n");
    }
    
    printf("\nVetor 2");
    for(x=0;x<=4;x++){
        printf("\t%d ",vet2[x]);
        printf("\n\n");
        printf("\n\nSoma:");
    }
}

void saida(){
    for(x=0;x<=4;x++){
        printf("\t%d ",vet1[x]+vet2[x]);
    }
}

main() {
    entraDados();
    somaPosicao();
    saida();
    printf("\n\n");
    system("pause");
    return(0);
}
