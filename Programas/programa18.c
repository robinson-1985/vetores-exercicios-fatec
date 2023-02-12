/* 18) Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos 
ímpares do vetor.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

int z,x,vet[11], t=10;

void processamento(){
    for(z=0; z<11; z++){
        vet[z]= t;
        t++;
    }
    printf("\n\n");
    for(x=1; x<11; x=x+2){
        printf("%d\t",vet[x]);
        printf("\n");
    }
}

main(){
    processamento();
    system("pause");
    return(0);
}