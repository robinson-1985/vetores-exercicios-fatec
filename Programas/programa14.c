/* 14) Preencher um vetor com 5 números e a medida que for digitando o número,
calcular o cubo e mostrar em outro vetor. Mostrar os dois vetores. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int z;
float vetcubo[5], vet[5];

void entrada(){
    for(z = 0;z < 5; z++){
        printf("Digite um numero: ");
        scanf("%f",&vet[z]);
        printf("\n");
        vetcubo[z]=pow(vet[z],3);
    }
}

void saida(){
    for(z = 0;z < 5; z++)
        printf("%3.2f\t", vetcubo[z]);
        printf("\n");
}

 main(){
    entrada();
    saida();
    system("pause");
    return(0);
}
