/* 7) Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar 
quantos números são maiores que 30.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x, vetor[8];

void entraDados(){
    for(int x = 0; x < 8; x++){
        printf("\n[%d] Digite um numero: ",x);
        scanf("%d",&vetor[x]);
    }
}

void final(){
    for(int x = 0; x < 8; x++){
        if(vetor[x] > 30){
        }
    }
    printf("\n\n %d números sao maiores que 30", x);
}

main(){
    entraDados();
    final();
    printf("\n\n");
    system("pause");
    return(0);
}
